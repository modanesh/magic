/*
 * Agent.h
 * RVO2 Library
 *
 * Copyright 2008 University of North Carolina at Chapel Hill
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Please send all bug reports to <geom@cs.unc.edu>.
 *
 * The authors may be contacted via:
 *
 * Jur van den Berg, Stephen J. Guy, Jamie Snape, Ming C. Lin, Dinesh Manocha
 * Dept. of Computer Science
 * 201 S. Columbia St.
 * Frederick P. Brooks, Jr. Computer Science Bldg.
 * Chapel Hill, N.C. 27599-3175
 * United States of America
 *
 * <http://gamma.cs.unc.edu/RVO2/>
 *
 * modified by Yuanfu Luo <yuanfu@comp.nus.edu.sg>
 */

#pragma once

/**
 * \file       Agent.h
 * \brief      Contains the Agent class.
 */

#include "Definitions.h"
#include "RVOSimulator.h"
#include "GammaParams.h"
#include "Minkowski.h"

namespace carla {
namespace gamma {

  /**
	 * \brief      Defines an agent in the simulation.
	 */
	class Agent {
	private:
		/**
		 * \brief      Constructs an agent instance.
		 * \param      sim             The simulator instance.
		 */
		explicit Agent(RVOSimulator *sim);

		/**
		 * \brief      Computes the neighbors of this agent.
		 */
		void computeNeighbors();

		/**
		 * \brief      Computes the new velocity of this agent.
		 */
		void computeNewVelocity();

		/**
		 * \brief      Inserts an agent neighbor into the set of neighbors of
		 *             this agent.
		 * \param      agent           A pointer to the agent to be inserted.
		 * \param      rangeSq         The squared range around this agent.
		 */
		void insertAgentNeighbor(const Agent *agent, float &rangeSq);

		/**
		 * \brief      Inserts a static obstacle neighbor into the set of neighbors
		 *             of this agent.
		 * \param      obstacle        The number of the static obstacle to be
		 *                             inserted.
		 * \param      rangeSq         The squared range around this agent.
		 */
		void insertObstacleNeighbor(const Obstacle *obstacle, float rangeSq);

		/**
		 * \brief      Updates the two-dimensional position and two-dimensional
		 *             velocity of this agent.
		 */
		void update();


		void computeObstacleOrcaLinesDisc ();
		void computeObstacleOrcaLinesPoly ();
		void computeAgentOrcaLinesDisc ();
		void computeAgentOrcaLinesPoly ();
		void computeKinematicVelSet (float _max_tracking_bound);
		void computeKinematicVelSet ();
		float computeAttention(const Agent *other);
		float computeResponsibility(const Agent *other);
		bool inCollision(const std::vector<Vector2> &polygon, const Vector2 &ref_point);
        void computeLeftAndRightMostVector(Vector2 &left_most_vector, Vector2 &right_most_vector, std::vector<Vector2> &minkowski_diff);

        void computeLaneConstrains ();

        void updateBehaviorParams();

		std::vector<std::pair<float, const Agent *> > agentNeighbors_;
		size_t maxNeighbors_;
		float maxSpeed_;
		float neighborDist_;
		Vector2 newVelocity_;
		std::vector<std::pair<float, const Obstacle *> > obstacleNeighbors_;
		std::vector<Line> orcaLines_;
		Vector2 position_;
		Vector2 prefVelocity_;
		float radius_;
		RVOSimulator *sim_;
		float timeHorizon_;
		float timeHorizonObst_;
		Vector2 velocity_;

		size_t id_;

		std::vector<Vector2> bounding_corners_;
		std::vector<Vector2> velocity_convex_;
		std::string tag_;
		float max_tracking_angle_;
		Vector2 heading_;

		int tracking_id_;
		float r_front_;
		float r_rear_;
		float res_dec_rate_;

		bool left_lane_constrained_;
		bool right_lane_constrained_;
		Vector2 path_forward_;

		bool use_polygon_;
		bool consider_kinematics_;
		bool use_dynamic_resp_;
		bool use_dynamic_att_;
		AgentBehaviorType agent_behavior_type_;

		friend class KdTree;
		friend class RVOSimulator;
	};

	/**
	 * \relates    Agent
	 * \brief      Solves a one-dimensional linear program on a specified line
	 *             subject to linear constraints defined by lines and a circular
	 *             constraint.
	 * \param      lines         Lines defining the linear constraints.
	 * \param      lineNo        The specified line constraint.
	 * \param      radius        The radius of the circular constraint.
	 * \param      optVelocity   The optimization velocity.
	 * \param      directionOpt  True if the direction should be optimized.
	 * \param      result        A reference to the result of the linear program.
	 * \return     True if successful.
	 */
	bool linearProgram1(const std::vector<Line> &lines, size_t lineNo,
						float radius, const Vector2 &optVelocity,
						bool directionOpt, Vector2 &result);

	/**
	 * \relates    Agent
	 * \brief      Solves a two-dimensional linear program subject to linear
	 *             constraints defined by lines and a circular constraint.
	 * \param      lines         Lines defining the linear constraints.
	 * \param      radius        The radius of the circular constraint.
	 * \param      optVelocity   The optimization velocity.
	 * \param      directionOpt  True if the direction should be optimized.
	 * \param      result        A reference to the result of the linear program.
	 * \return     The number of the line it fails on, and the number of lines if successful.
	 */
	size_t linearProgram2(const std::vector<Line> &lines, float radius,
						  const Vector2 &optVelocity, bool directionOpt,
						  Vector2 &result);

	/**
	 * \relates    Agent
	 * \brief      Solves a two-dimensional linear program subject to linear
	 *             constraints defined by lines and a circular constraint.
	 * \param      lines         Lines defining the linear constraints.
	 * \param      numObstLines  Count of obstacle lines.
	 * \param      beginLine     The line on which the 2-d linear program failed.
	 * \param      radius        The radius of the circular constraint.
	 * \param      result        A reference to the result of the linear program.
	 */
	void linearProgram3(const std::vector<Line> &lines, size_t numObstLines, size_t beginLine,
						float radius, Vector2 &result);

}}
