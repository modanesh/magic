#pragma once

#include "carla/geom/Vector2D.h"
#include "carla/occupancy/OccupancyMap.h"
#include "carla/segments/SegmentMap.h"
#include <boost/optional.hpp>
#include <boost/geometry.hpp>
#include <boost/geometry/geometries/point.hpp>
#include <boost/geometry/geometries/box.hpp>
#include <boost/geometry/index/rtree.hpp>

namespace carla {
namespace occupancy { class OccupancyMap; }
namespace segments { class SegmentMap; }
}

namespace carla {
namespace sidewalk {

struct SidewalkRoutePoint {
  size_t polygon_id;
  size_t segment_id;
  float offset;
};

class Sidewalk {

public:

  Sidewalk(const std::vector<std::vector<geom::Vector2D>>& polygons);

  const std::vector<std::vector<geom::Vector2D>>& Polygons() const { return _polygons; }

  occupancy::OccupancyMap CreateOccupancyMap(float width) const;
  segments::SegmentMap CreateSegmentMap() const;

  geom::Vector2D GetRoutePointPosition(const SidewalkRoutePoint& route_point) const;
  SidewalkRoutePoint GetNearestRoutePoint(const geom::Vector2D& position) const;
  SidewalkRoutePoint GetNextRoutePoint(const SidewalkRoutePoint& route_point, float lookahead_distance) const;
  SidewalkRoutePoint GetPreviousRoutePoint(const SidewalkRoutePoint& route_point, float lookahead_distance) const;
  boost::optional<SidewalkRoutePoint> GetAdjacentRoutePoint(const SidewalkRoutePoint& route_point, float max_cross_distance) const;
  bool Intersects(const geom::Segment2D& segment) const;

private:

  typedef boost::geometry::model::point<float, 2, boost::geometry::cs::cartesian> rt_point_t;
  typedef boost::geometry::model::segment<rt_point_t> rt_segment_t;
  typedef std::pair<rt_segment_t, std::pair<size_t, size_t>> rt_value_t;
  typedef boost::geometry::index::rtree<rt_value_t, boost::geometry::index::rstar<16> > rt_tree_t;

  std::vector<std::vector<geom::Vector2D>> _polygons;
  rt_tree_t _segments_index;

};

}
}
