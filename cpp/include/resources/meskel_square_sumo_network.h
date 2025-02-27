#pragma once

#include <string>

namespace resources {

static const std::string MESKEL_SQUARE_SUMO_NETWORK =

R"(
<?xml version="1.0" encoding="UTF-8"?>

<!-- generated on Sat 14 Sep 2019 01:38:49 PM by Eclipse SUMO netedit Version v1_2_0+1287-e3a0083b72
<configuration xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="http://sumo.dlr.de/xsd/netconvertConfiguration.xsd">

    <input>
        <sumo-net-file value="/home/leeyiyuan/carla/Data/meskel_square.net.xml"/>
    </input>

    <output>
        <output-file value="/home/leeyiyuan/carla/Data/meskel_square.net.xml"/>
    </output>

    <processing>
        <geometry.max-grade.fix value="false"/>
        <offset.disable-normalization value="true"/>
        <lefthand value="false"/>
    </processing>

    <junctions>
        <no-turnarounds value="true"/>
        <junctions.corner-detail value="5"/>
        <junctions.limit-turn-speed value="5.5"/>
        <rectangular-lane-cut value="false"/>
    </junctions>

    <pedestrian>
        <walkingareas value="false"/>
    </pedestrian>

</configuration>
-->

<net version="1.3" junctionCornerDetail="5" limitTurnSpeed="5.50" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="http://sumo.dlr.de/xsd/net_file.xsd">

    <location netOffset="-4314645.11,-1006806.79" convBoundary="22.14,0.00,1489.42,1381.32" origBoundary="38.76009,9.00802,38.76603,9.01391" projParameter="+proj=merc +a=6378137 +b=6378137 +lat_ts=0.0 +lon_0=0.0 +x_0=0.0 +y_0=0 +k=1.0 +units=m +nadgrids=@null +wktext +no_defs"/>

    <type id="highway.bridleway" priority="1" numLanes="1" speed="2.78" allow="pedestrian" oneway="1" width="2.00"/>
    <type id="highway.bus_guideway" priority="1" numLanes="1" speed="27.78" allow="bus" oneway="1"/>
    <type id="highway.cycleway" priority="1" numLanes="1" speed="8.33" allow="bicycle" oneway="0" width="1.00"/>
    <type id="highway.footway" priority="1" numLanes="1" speed="2.78" allow="pedestrian" oneway="1" width="2.00"/>
    <type id="highway.ford" priority="1" numLanes="1" speed="2.78" allow="army" oneway="0"/>
    <type id="highway.living_street" priority="2" numLanes="1" speed="2.78" disallow="tram rail_urban rail rail_electric rail_fast ship" oneway="0"/>
    <type id="highway.motorway" priority="14" numLanes="2" speed="39.44" allow="private emergency authority army vip passenger hov taxi bus coach delivery truck trailer motorcycle evehicle custom1 custom2" oneway="1"/>
    <type id="highway.motorway_link" priority="9" numLanes="1" speed="22.22" allow="private emergency authority army vip passenger hov taxi bus coach delivery truck trailer motorcycle evehicle custom1 custom2" oneway="1"/>
    <type id="highway.path" priority="1" numLanes="1" speed="2.78" allow="pedestrian bicycle" oneway="1" width="2.00"/>
    <type id="highway.pedestrian" priority="1" numLanes="1" speed="2.78" allow="pedestrian" oneway="1" width="2.00"/>
    <type id="highway.primary" priority="12" numLanes="2" speed="27.78" disallow="tram rail_urban rail rail_electric rail_fast ship" oneway="0"/>
    <type id="highway.primary_link" priority="7" numLanes="1" speed="22.22" disallow="tram rail_urban rail rail_electric rail_fast ship" oneway="0"/>
    <type id="highway.raceway" priority="15" numLanes="2" speed="83.33" allow="vip" oneway="0"/>
    <type id="highway.residential" priority="3" numLanes="1" speed="13.89" disallow="tram rail_urban rail rail_electric rail_fast ship" oneway="0"/>
    <type id="highway.secondary" priority="11" numLanes="2" speed="27.78" disallow="tram rail_urban rail rail_electric rail_fast ship" oneway="0"/>
    <type id="highway.secondary_link" priority="6" numLanes="1" speed="22.22" disallow="tram rail_urban rail rail_electric rail_fast ship" oneway="0"/>
    <type id="highway.service" priority="1" numLanes="1" speed="5.56" allow="pedestrian delivery bicycle" oneway="0"/>
    <type id="highway.stairs" priority="1" numLanes="1" speed="1.39" allow="pedestrian" oneway="1" width="2.00"/>
    <type id="highway.step" priority="1" numLanes="1" speed="1.39" allow="pedestrian" oneway="1" width="2.00"/>
    <type id="highway.steps" priority="1" numLanes="1" speed="1.39" allow="pedestrian" oneway="1" width="2.00"/>
    <type id="highway.tertiary" priority="10" numLanes="1" speed="22.22" disallow="tram rail_urban rail rail_electric rail_fast ship" oneway="0"/>
    <type id="highway.tertiary_link" priority="5" numLanes="1" speed="22.22" disallow="tram rail_urban rail rail_electric rail_fast ship" oneway="0"/>
    <type id="highway.track" priority="1" numLanes="1" speed="5.56" disallow="tram rail_urban rail rail_electric rail_fast ship" oneway="0"/>
    <type id="highway.trunk" priority="13" numLanes="2" speed="27.78" disallow="pedestrian bicycle tram rail_urban rail rail_electric rail_fast ship" oneway="0"/>
    <type id="highway.trunk_link" priority="8" numLanes="1" speed="22.22" disallow="pedestrian bicycle tram rail_urban rail rail_electric rail_fast ship" oneway="0"/>
    <type id="highway.unclassified" priority="4" numLanes="1" speed="13.89" disallow="tram rail_urban rail rail_electric rail_fast ship" oneway="0"/>
    <type id="highway.unsurfaced" priority="1" numLanes="1" speed="8.33" disallow="tram rail_urban rail rail_electric rail_fast ship" oneway="0"/>
    <type id="railway.highspeed" priority="21" numLanes="1" speed="69.44" allow="rail_fast" oneway="1"/>
    <type id="railway.light_rail" priority="19" numLanes="1" speed="27.78" allow="rail_urban" oneway="1"/>
    <type id="railway.preserved" priority="16" numLanes="1" speed="27.78" allow="rail" oneway="1"/>
    <type id="railway.rail" priority="20" numLanes="1" speed="44.44" allow="rail" oneway="1"/>
    <type id="railway.subway" priority="18" numLanes="1" speed="27.78" allow="rail_urban" oneway="1"/>
    <type id="railway.tram" priority="17" numLanes="1" speed="13.89" allow="tram" oneway="1"/>

    <edge id=":1642556796_0" function="internal">
        <lane id=":1642556796_0_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="8.22" width="4.00" shape="409.27,506.47 409.80,514.64"/>
        <lane id=":1642556796_0_1" index="1" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="8.22" width="4.00" shape="405.28,506.71 405.81,514.92"/>
        <lane id=":1642556796_0_2" index="2" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="8.22" width="4.00" shape="401.29,506.95 401.82,515.20"/>
    </edge>
    <edge id=":1642556796_3" function="internal">
        <lane id=":1642556796_3_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="25.00" length="8.14" width="4.00" shape="413.13,506.24 413.79,514.36"/>
    </edge>
    <edge id=":1642556856_0" function="internal">
        <lane id=":1642556856_0_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="25.00" length="8.73" width="4.00" shape="516.56,462.75 507.85,463.30"/>
    </edge>
    <edge id=":1642556856_1" function="internal">
        <lane id=":1642556856_1_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="8.64" width="4.00" shape="516.26,458.77 513.57,458.96 511.73,459.04 509.89,459.03 507.20,458.95"/>
        <lane id=":1642556856_1_1" index="1" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="8.64" width="4.00" shape="515.96,454.78 513.40,454.96 511.65,455.04 509.89,455.03 507.33,454.95"/>
        <lane id=":1642556856_1_2" index="2" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="8.64" width="4.00" shape="515.66,450.79 513.23,450.96 511.57,451.04 509.90,451.03 507.46,450.96"/>
    </edge>
    <edge id=":221437411#2-AddedOnRampNode_0" function="internal">
        <lane id=":221437411#2-AddedOnRampNode_0_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="8.25" width="4.00" shape="234.20,490.38 231.63,490.13 229.95,488.98 228.27,487.84 225.69,487.58"/>
        <lane id=":221437411#2-AddedOnRampNode_0_1" index="1" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="8.25" width="4.00" shape="233.62,486.42 225.69,487.58"/>
        <lane id=":221437411#2-AddedOnRampNode_0_2" index="2" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="8.25" width="4.00" shape="233.03,482.47 225.11,483.62"/>
        <lane id=":221437411#2-AddedOnRampNode_0_3" index="3" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="8.25" width="4.00" shape="232.44,478.51 224.53,479.67"/>
        <lane id=":221437411#2-AddedOnRampNode_0_4" index="4" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="8.25" width="4.00" shape="231.86,474.55 223.95,475.71"/>
    </edge>
    <edge id=":224859358#1-AddedOnRampNode_0" function="internal">
        <lane id=":224859358#1-AddedOnRampNode_0_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="8.17" width="4.00" shape="204.68,450.35 207.25,450.61 208.92,451.75 210.60,452.89 213.16,453.15"/>
        <lane id=":224859358#1-AddedOnRampNode_0_1" index="1" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="8.17" width="4.00" shape="205.26,454.31 213.16,453.15"/>
        <lane id=":224859358#1-AddedOnRampNode_0_2" index="2" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="8.17" width="4.00" shape="205.84,458.27 213.75,457.10"/>
        <lane id=":224859358#1-AddedOnRampNode_0_3" index="3" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="8.17" width="4.00" shape="206.42,462.23 214.33,461.06"/>
        <lane id=":224859358#1-AddedOnRampNode_0_4" index="4" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="8.17" width="4.00" shape="207.00,466.18 214.91,465.02"/>
        <lane id=":224859358#1-AddedOnRampNode_0_5" index="5" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="8.17" width="4.00" shape="207.58,470.14 215.50,468.97"/>
        <lane id=":224859358#1-AddedOnRampNode_0_6" index="6" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="8.17" width="4.00" shape="208.15,474.10 216.08,472.93"/>
    </edge>
    <edge id=":224859359#1-AddedOnRampNode_0" function="internal">
        <lane id=":224859359#1-AddedOnRampNode_0_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="8.16" width="4.00" shape="420.13,604.74 419.68,607.20 418.42,608.73 417.21,610.26 416.88,612.70"/>
        <lane id=":224859359#1-AddedOnRampNode_0_1" index="1" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="8.16" width="4.00" shape="416.14,605.02 416.88,612.70"/>
        <lane id=":224859359#1-AddedOnRampNode_0_2" index="2" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="8.16" width="4.00" shape="412.15,605.30 412.91,613.19"/>
        <lane id=":224859359#1-AddedOnRampNode_0_3" index="3" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="8.16" width="4.00" shape="408.16,605.58 408.94,613.67"/>
    </edge>
    <edge id=":271900700_0" function="internal">
        <lane id=":271900700_0_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="0.30" width="4.00" shape="516.95,340.19 516.73,340.42"/>
        <lane id=":271900700_0_1" index="1" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="0.30" width="4.00" shape="513.99,337.50 513.78,337.72"/>
        <lane id=":271900700_0_2" index="2" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="0.30" width="4.00" shape="511.03,334.80 510.83,335.02"/>
        <lane id=":271900700_0_3" index="3" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="0.30" width="4.00" shape="508.08,332.11 507.88,332.32"/>
    </edge>
    <edge id=":271900701_0" function="internal">
        <lane id=":271900701_0_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="0.29" width="4.00" shape="494.24,323.70 494.48,323.43"/>
        <lane id=":271900701_0_1" index="1" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="0.29" width="4.00" shape="497.20,326.38 497.41,326.15"/>
        <lane id=":271900701_0_2" index="2" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="0.29" width="4.00" shape="500.16,329.07 500.35,328.87"/>
        <lane id=":271900701_0_3" index="3" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="0.29" width="4.00" shape="503.12,331.76 503.28,331.59"/>
    </edge>
    <edge id=":35977533-AddedOffRampNode_0" function="internal">
        <lane id=":35977533-AddedOffRampNode_0_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="8.28" width="4.00" shape="395.44,610.98 394.52,608.60 392.97,607.33 391.41,606.05 390.44,603.68"/>
        <lane id=":35977533-AddedOffRampNode_0_1" index="1" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="8.28" width="4.00" shape="395.44,610.98 394.40,603.12"/>
        <lane id=":35977533-AddedOffRampNode_0_2" index="2" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="8.28" width="4.00" shape="399.41,610.49 398.36,602.56"/>
        <lane id=":35977533-AddedOffRampNode_0_3" index="3" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="8.28" width="4.00" shape="403.38,610.01 402.32,602.00"/>
    </edge>
    <edge id=":420520082_0" function="internal">
        <lane id=":420520082_0_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="18.05" length="0.93" width="4.00" shape="437.58,782.73 437.60,782.82 437.61,782.89 437.62,782.95 437.65,783.04"/>
        <lane id=":420520082_0_1" index="1" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="18.05" length="0.93" width="4.00" shape="433.61,783.22 433.65,783.49 433.68,783.68 433.72,783.86 433.80,784.13"/>
        <lane id=":420520082_0_2" index="2" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="18.05" length="0.93" width="4.00" shape="429.64,783.70 429.70,784.16 429.75,784.47 429.83,784.78 429.95,785.22"/>
    </edge>
    <edge id=":420520083_0" function="internal">
        <lane id=":420520083_0_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="18.05" length="0.30" width="4.00" shape="412.14,747.48 412.10,747.18"/>
        <lane id=":420520083_0_1" index="1" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="18.05" length="0.30" width="4.00" shape="416.11,746.99 416.07,746.69"/>
        <lane id=":420520083_0_2" index="2" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="18.05" length="0.30" width="4.00" shape="420.08,746.49 420.04,746.21"/>
    </edge>
    <edge id=":5170734159_0" function="internal">
        <lane id=":5170734159_0_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="25.00" length="7.98" width="4.00" shape="333.21,476.09 330.85,476.22 329.23,476.34 327.62,476.53 325.28,476.87"/>
    </edge>
    <edge id=":5170734159_1" function="internal">
        <lane id=":5170734159_1_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="7.99" width="4.00" shape="332.58,471.76 324.69,472.92"/>
        <lane id=":5170734159_1_1" index="1" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="7.99" width="4.00" shape="332.01,467.80 324.10,468.96"/>
        <lane id=":5170734159_1_2" index="2" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="7.99" width="4.00" shape="331.43,463.84 323.52,465.00"/>
        <lane id=":5170734159_1_3" index="3" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="7.99" width="4.00" shape="330.85,459.88 322.93,461.05"/>
    </edge>
    <edge id=":5170751727_0" function="internal">
        <lane id=":5170751727_0_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="25.00" length="8.01" width="4.00" shape="103.40,465.15 111.33,464.01"/>
    </edge>
    <edge id=":5170751727_1" function="internal">
        <lane id=":5170751727_1_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="8.00" width="4.00" shape="103.99,469.13 111.90,467.96"/>
        <lane id=":5170751727_1_1" index="1" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="8.00" width="4.00" shape="104.57,473.09 112.48,471.92"/>
        <lane id=":5170751727_1_2" index="2" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="8.00" width="4.00" shape="105.15,477.04 113.06,475.88"/>
        <lane id=":5170751727_1_3" index="3" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="8.00" width="4.00" shape="105.73,481.00 113.64,479.84"/>
        <lane id=":5170751727_1_4" index="4" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="8.00" width="4.00" shape="106.31,484.96 114.22,483.79"/>
        <lane id=":5170751727_1_5" index="5" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="8.00" width="4.00" shape="106.89,488.92 114.80,487.75"/>
    </edge>
    <edge id=":5736089086_0" function="internal">
        <lane id=":5736089086_0_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="25.00" length="8.39" width="4.00" shape="377.59,512.85 376.13,504.59"/>
    </edge>
    <edge id=":5736089086_1" function="internal">
        <lane id=":5736089086_1_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="9.08" width="4.00" shape="381.55,512.29 381.18,509.62 380.97,507.79 380.86,505.95 380.76,503.26"/>
    </edge>
    <edge id=":5736089086_2" function="internal">
        <lane id=":5736089086_2_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="8.65" width="4.00" shape="385.51,511.73 385.15,509.19 384.96,507.45 384.85,505.69 384.76,503.13"/>
    </edge>
    <edge id=":5736089086_3" function="internal">
        <lane id=":5736089086_3_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="8.21" width="4.00" shape="389.47,511.17 389.13,508.76 388.95,507.10 388.84,505.43 388.76,503.00"/>
    </edge>
    <edge id=":678126832#0-AddedOffRampNode_0" function="internal">
        <lane id=":678126832#0-AddedOffRampNode_0_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="8.31" width="4.00" shape="615.71,449.67 613.29,450.58 611.97,452.12 610.65,453.65 608.23,454.57"/>
        <lane id=":678126832#0-AddedOffRampNode_0_1" index="1" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="8.31" width="4.00" shape="615.71,449.67 607.76,450.59"/>
        <lane id=":678126832#0-AddedOffRampNode_0_2" index="2" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="8.31" width="4.00" shape="615.24,445.69 607.30,446.62"/>
        <lane id=":678126832#0-AddedOffRampNode_0_3" index="3" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="8.31" width="4.00" shape="614.78,441.72 606.83,442.65"/>
    </edge>
    <edge id=":cluster_1642556745_2304667126_2304667130_2304667132_0" function="internal">
        <lane id=":cluster_1642556745_2304667126_2304667130_2304667132_0_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="15.11" length="47.06" width="4.00" shape="443.32,457.42 428.84,459.96 418.26,465.03 411.60,472.65 408.85,482.79"/>
    </edge>
    <edge id=":cluster_1642556745_2304667126_2304667130_2304667132_1" function="internal">
        <lane id=":cluster_1642556745_2304667126_2304667130_2304667132_1_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="68.02" width="4.00" shape="443.32,457.42 375.19,461.48"/>
        <lane id=":cluster_1642556745_2304667126_2304667130_2304667132_1_1" index="1" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="68.02" width="4.00" shape="443.26,453.41 375.34,457.41"/>
        <lane id=":cluster_1642556745_2304667126_2304667130_2304667132_1_2" index="2" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="68.02" width="4.00" shape="443.26,453.41 375.49,453.35"/>
    </edge>
    <edge id=":cluster_1642556745_2304667126_2304667130_2304667132_4" function="internal">
        <lane id=":cluster_1642556745_2304667126_2304667130_2304667132_4_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="12.87" length="27.56" width="4.00" shape="443.26,453.41 427.12,450.13 420.00,441.63"/>
    </edge>
    <edge id=":cluster_1642556745_2304667126_2304667130_2304667132_5" function="internal">
        <lane id=":cluster_1642556745_2304667126_2304667130_2304667132_5_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="11.85" length="20.96" width="4.00" shape="443.20,449.41 429.64,446.63 425.10,441.15"/>
    </edge>
    <edge id=":cluster_1642556745_2304667126_2304667130_2304667132_25" function="internal">
        <lane id=":cluster_1642556745_2304667126_2304667130_2304667132_25_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="12.87" length="34.61" width="4.00" shape="420.00,441.63 418.24,439.54 417.55,424.99 425.98,409.87"/>
    </edge>
    <edge id=":cluster_1642556745_2304667126_2304667130_2304667132_26" function="internal">
        <lane id=":cluster_1642556745_2304667126_2304667130_2304667132_26_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="11.85" length="31.39" width="4.00" shape="425.10,441.15 422.23,437.68 421.71,425.41 428.84,412.66"/>
    </edge>
    <edge id=":cluster_1642556745_2304667126_2304667130_2304667132_6" function="internal">
        <lane id=":cluster_1642556745_2304667126_2304667130_2304667132_6_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="5.86" length="10.87" width="4.00" shape="440.17,423.74 438.13,426.54 437.91,428.51 439.50,429.67 442.92,430.02"/>
    </edge>
    <edge id=":cluster_1642556745_2304667126_2304667130_2304667132_7" function="internal">
        <lane id=":cluster_1642556745_2304667126_2304667130_2304667132_7_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="69.19" width="4.00" shape="440.17,423.74 429.71,437.07 419.82,453.17 412.28,469.32 408.85,482.79"/>
        <lane id=":cluster_1642556745_2304667126_2304667130_2304667132_7_1" index="1" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="69.19" width="4.00" shape="437.31,420.94 426.68,434.47 416.44,451.02 408.54,467.61 404.94,481.29"/>
        <lane id=":cluster_1642556745_2304667126_2304667130_2304667132_7_2" index="2" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="69.19" width="4.00" shape="434.45,418.14 423.66,431.88 413.05,448.87 404.79,465.91 401.04,479.78"/>
    </edge>
    <edge id=":cluster_1642556745_2304667126_2304667130_2304667132_10" function="internal">
        <lane id=":cluster_1642556745_2304667126_2304667130_2304667132_10_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="68.76" width="4.00" shape="431.59,415.35 419.89,427.08 405.88,438.78 390.70,448.26 375.49,453.35"/>
    </edge>
    <edge id=":cluster_1642556745_2304667126_2304667130_2304667132_11" function="internal">
        <lane id=":cluster_1642556745_2304667126_2304667130_2304667132_11_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="26.39" length="51.85" width="4.00" shape="376.39,429.05 391.84,425.69 402.56,420.77 411.16,413.80 420.26,404.27"/>
    </edge>
    <edge id=":cluster_1642556745_2304667126_2304667130_2304667132_12" function="internal">
        <lane id=":cluster_1642556745_2304667126_2304667130_2304667132_12_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.20" length="55.13" width="4.00" shape="376.24,433.12 392.84,429.45 404.52,424.11 413.78,416.77 423.12,407.07"/>
    </edge>
    <edge id=":cluster_1642556745_2304667126_2304667130_2304667132_13" function="internal">
        <lane id=":cluster_1642556745_2304667126_2304667130_2304667132_13_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="58.41" width="4.00" shape="376.09,437.18 393.84,433.22 406.47,427.46 416.39,419.73 425.98,409.87"/>
    </edge>
    <edge id=":cluster_1642556745_2304667126_2304667130_2304667132_14" function="internal">
        <lane id=":cluster_1642556745_2304667126_2304667130_2304667132_14_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="67.47" width="4.00" shape="376.09,437.18 396.94,434.25 415.01,432.04 430.33,430.62 442.92,430.02"/>
        <lane id=":cluster_1642556745_2304667126_2304667130_2304667132_14_1" index="1" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="67.47" width="4.00" shape="375.93,441.25 396.82,438.30 414.96,436.08 430.35,434.63 442.98,434.02"/>
        <lane id=":cluster_1642556745_2304667126_2304667130_2304667132_14_2" index="2" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="67.47" width="4.00" shape="375.78,445.31 396.70,442.36 414.92,440.11 430.38,438.64 443.04,438.01"/>
    </edge>
    <edge id=":cluster_1642556745_2304667126_2304667130_2304667132_17" function="internal">
        <lane id=":cluster_1642556745_2304667126_2304667130_2304667132_17_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="14.48" length="25.32" width="4.00" shape="375.78,445.31 391.33,445.74 399.31,451.37"/>
    </edge>
    <edge id=":cluster_1642556745_2304667126_2304667130_2304667132_18" function="internal">
        <lane id=":cluster_1642556745_2304667126_2304667130_2304667132_18_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="13.42" length="16.37" width="4.00" shape="375.63,449.38 389.01,449.69 391.49,451.36"/>
    </edge>
    <edge id=":cluster_1642556745_2304667126_2304667130_2304667132_27" function="internal">
        <lane id=":cluster_1642556745_2304667126_2304667130_2304667132_27_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="14.48" length="31.27" width="4.00" shape="399.31,451.37 400.58,452.27 404.72,464.31 404.94,481.29"/>
    </edge>
    <edge id=":cluster_1642556745_2304667126_2304667130_2304667132_28" function="internal">
        <lane id=":cluster_1642556745_2304667126_2304667130_2304667132_28_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="13.42" length="32.04" width="4.00" shape="391.49,451.36 397.08,455.14 400.78,465.32 401.04,479.78"/>
    </edge>
    <edge id=":cluster_1642556745_2304667126_2304667130_2304667132_19" function="internal">
        <lane id=":cluster_1642556745_2304667126_2304667130_2304667132_19_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="6.48" length="10.15" width="4.00" shape="380.57,471.89 380.43,468.78 379.46,466.68 377.67,465.60 375.04,465.54"/>
    </edge>
    <edge id=":cluster_1642556745_2304667126_2304667130_2304667132_20" function="internal">
        <lane id=":cluster_1642556745_2304667126_2304667130_2304667132_20_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="76.77" width="4.00" shape="380.57,471.89 385.34,457.07 395.73,437.96 408.47,418.91 420.26,404.27"/>
        <lane id=":cluster_1642556745_2304667126_2304667130_2304667132_20_1" index="1" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="76.77" width="4.00" shape="384.47,473.39 389.07,458.78 399.11,440.11 411.49,421.51 423.12,407.07"/>
        <lane id=":cluster_1642556745_2304667126_2304667130_2304667132_20_2" index="2" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="76.77" width="4.00" shape="388.36,474.89 392.81,460.48 402.49,442.26 414.52,424.10 425.98,409.87"/>
        <lane id=":cluster_1642556745_2304667126_2304667130_2304667132_20_3" index="3" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="76.77" width="4.00" shape="388.36,474.89 393.26,460.92 403.92,443.66 416.93,426.46 428.84,412.66"/>
    </edge>
    <edge id=":cluster_1642556745_2304667126_2304667130_2304667132_24" function="internal">
        <lane id=":cluster_1642556745_2304667126_2304667130_2304667132_24_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="18.34" length="73.21" width="4.00" shape="388.36,474.89 392.82,459.06 403.41,447.64 420.15,440.62 443.04,438.01"/>
    </edge>
    <edge id=":gneJ0_0" function="internal">
        <lane id=":gneJ0_0_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="8.33" length="0.88" width="4.00" shape="416.93,786.15 416.93,786.06 416.93,786.00 416.93,785.94 416.92,785.86"/>
        <lane id=":gneJ0_0_1" index="1" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="8.33" length="0.88" width="4.00" shape="420.93,786.24 420.93,785.98 420.93,785.80 420.92,785.62 420.89,785.36"/>
        <lane id=":gneJ0_0_2" index="2" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="8.33" length="0.88" width="4.00" shape="424.93,786.33 424.94,785.89 424.93,785.60 424.91,785.30 424.86,784.87"/>
    </edge>

    <edge id="151430192#2" from="5736089086" to="cluster_1642556745_2304667126_2304667130_2304667132" priority="12" type="highway.primary" spreadType="center" shape="384.90,507.44 384.55,496.63 383.83,481.72 385.54,459.37">
        <lane id="151430192#2_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="29.78" width="4.00" shape="380.76,503.26 380.55,496.79 379.82,481.66 380.57,471.89"/>
        <lane id="151430192#2_1" index="1" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="29.78" width="4.00" shape="384.76,503.13 384.55,496.63 383.83,481.72 384.47,473.39"/>
        <lane id="151430192#2_2" index="2" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="29.78" width="4.00" shape="388.76,503.00 388.55,496.47 387.84,481.78 388.36,474.89"/>
    </edge>
    <edge id="194608194#0" from="cluster_1642556745_2304667126_2304667130_2304667132" to="271900701" priority="12" type="highway.primary" spreadType="center" shape="398.40,435.91 406.36,427.76 413.63,420.20 428.32,404.42 473.91,355.01 498.78,327.62">
        <lane id="194608194#0_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="109.61" width="4.00" shape="420.26,404.27 423.92,400.34 469.48,350.96 494.24,323.70"/>
        <lane id="194608194#0_1" index="1" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="109.61" width="4.00" shape="423.12,407.07 426.85,403.06 472.43,353.66 497.20,326.38"/>
        <lane id="194608194#0_2" index="2" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="109.61" width="4.00" shape="425.98,409.87 429.79,405.78 475.39,356.36 500.16,329.07"/>
        <lane id="194608194#0_3" index="3" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="109.61" width="4.00" shape="428.84,412.66 432.72,408.50 478.34,359.06 503.12,331.76"/>
    </edge>
    <edge id="194608194#3" from="271900701" to="1642987266" priority="12" type="highway.primary" spreadType="center">
        <lane id="194608194#3_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="446.67" width="4.00" shape="494.48,323.43 798.21,-4.08"/>
        <lane id="194608194#3_1" index="1" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="446.67" width="4.00" shape="497.41,326.15 801.14,-1.36"/>
        <lane id="194608194#3_2" index="2" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="446.67" width="4.00" shape="500.35,328.87 804.08,1.36"/>
        <lane id="194608194#3_3" index="3" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="446.67" width="4.00" shape="503.28,331.59 807.01,4.08"/>
    </edge>
    <edge id="221437411#0" from="cluster_1642556745_2304667126_2304667130_2304667132" to="5170734159" priority="12" type="highway.primary" spreadType="center" shape="385.54,459.37 377.62,459.10 327.67,466.41">
        <lane id="221437411#0_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="44.01" width="4.00" shape="375.04,465.54 332.58,471.76"/>
        <lane id="221437411#0_1" index="1" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="44.01" width="4.00" shape="375.19,461.48 332.01,467.80"/>
        <lane id="221437411#0_2" index="2" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="44.01" width="4.00" shape="375.34,457.41 331.43,463.84"/>
        <lane id="221437411#0_3" index="3" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="44.01" width="4.00" shape="375.49,453.35 330.85,459.88"/>
    </edge>
    <edge id="221437411#2" from="221437411#2-AddedOnRampNode" to="1691661679" priority="12" type="highway.primary" spreadType="center">
        <lane id="221437411#2_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="194.55" width="4.00" shape="225.69,487.58 33.19,515.72"/>
        <lane id="221437411#2_1" index="1" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="194.55" width="4.00" shape="225.11,483.62 32.61,511.76"/>
        <lane id="221437411#2_2" index="2" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="194.55" width="4.00" shape="224.53,479.67 32.03,507.80"/>
        <lane id="221437411#2_3" index="3" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="194.55" width="4.00" shape="223.95,475.71 31.45,503.84"/>
    </edge>
    <edge id="221437411#2-AddedOnRampEdge" from="5170734159" to="221437411#2-AddedOnRampNode" priority="12" type="highway.primary" spreadType="center" shape="327.94,468.39 229.09,483.05">
        <lane id="221437411#2-AddedOnRampEdge_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="92.07" width="4.00" acceleration="1" shape="325.28,476.87 234.20,490.38"/>
        <lane id="221437411#2-AddedOnRampEdge_1" index="1" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="92.07" width="4.00" shape="324.69,472.92 233.62,486.42"/>
        <lane id="221437411#2-AddedOnRampEdge_2" index="2" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="92.07" width="4.00" shape="324.10,468.96 233.03,482.47"/>
        <lane id="221437411#2-AddedOnRampEdge_3" index="3" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="92.07" width="4.00" shape="323.52,465.00 232.44,478.51"/>
        <lane id="221437411#2-AddedOnRampEdge_4" index="4" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="92.07" width="4.00" shape="322.93,461.05 231.86,474.55"/>
    </edge>
    <edge id="224859357#0" from="cluster_1642556745_2304667126_2304667130_2304667132" to="29706017" priority="12" type="highway.primary" spreadType="center" shape="422.25,434.34 449.04,433.92 508.64,429.29 633.34,419.60 695.91,413.97 906.27,394.75 951.71,389.06 1039.96,379.44 1111.74,371.51 1183.39,364.95 1202.92,363.44 1234.23,360.01 1252.26,358.86 1280.84,355.11 1311.50,350.43 1339.30,346.94 1345.16,346.67 1456.79,347.10 1489.42,349.29">
        <lane id="224859357#0_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="1050.92" width="4.00" shape="442.92,430.02 448.85,429.92 508.33,425.30 633.01,415.61 695.55,409.99 905.84,390.77 951.24,385.09 1039.52,375.46 1111.34,367.53 1183.05,360.96 1202.55,359.46 1233.88,356.02 1251.87,354.88 1280.28,351.15 1310.95,346.47 1338.96,342.95 1345.08,342.67 1456.93,343.10 1489.69,345.30"/>
        <lane id="224859357#0_1" index="1" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="1050.92" width="4.00" shape="442.98,434.02 449.04,433.92 508.64,429.29 633.34,419.60 695.91,413.97 906.27,394.75 951.71,389.06 1039.96,379.44 1111.74,371.51 1183.39,364.95 1202.92,363.44 1234.23,360.01 1252.26,358.86 1280.84,355.11 1311.50,350.43 1339.30,346.94 1345.16,346.67 1456.79,347.10 1489.42,349.29"/>
        <lane id="224859357#0_2" index="2" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="1050.92" width="4.00" shape="443.04,438.01 449.23,437.92 508.95,433.28 633.67,423.59 696.27,417.95 906.70,398.73 952.18,393.03 1040.40,383.42 1112.14,375.49 1183.73,368.94 1203.29,367.42 1234.58,364.00 1252.65,362.84 1281.40,359.07 1312.05,354.39 1339.64,350.93 1345.24,350.67 1456.65,351.10 1489.15,353.28"/>
    </edge>
    <edge id="224859358#0" from="2123944796" to="5170751727" priority="12" type="highway.primary" spreadType="center">
        <lane id="224859358#0_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="84.19" width="4.00" shape="20.69,481.36 103.99,469.13"/>
        <lane id="224859358#0_1" index="1" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="84.19" width="4.00" shape="21.27,485.31 104.57,473.09"/>
        <lane id="224859358#0_2" index="2" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="84.19" width="4.00" shape="21.85,489.27 105.15,477.04"/>
        <lane id="224859358#0_3" index="3" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="84.19" width="4.00" shape="22.43,493.23 105.73,481.00"/>
        <lane id="224859358#0_4" index="4" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="84.19" width="4.00" shape="23.01,497.19 106.31,484.96"/>
        <lane id="224859358#0_5" index="5" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="84.19" width="4.00" shape="23.59,501.14 106.89,488.92"/>
    </edge>
    <edge id="224859358#1" from="224859358#1-AddedOnRampNode" to="cluster_1642556745_2304667126_2304667130_2304667132" priority="12" type="highway.primary" spreadType="center" shape="210.68,463.62 398.40,435.91">
        <lane id="224859358#1_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="163.14" width="4.00" shape="213.16,453.15 376.39,429.05"/>
        <lane id="224859358#1_1" index="1" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="163.14" width="4.00" shape="213.75,457.10 376.24,433.12"/>
        <lane id="224859358#1_2" index="2" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="163.14" width="4.00" shape="214.33,461.06 376.09,437.18"/>
        <lane id="224859358#1_3" index="3" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="163.14" width="4.00" shape="214.91,465.02 375.93,441.25"/>
        <lane id="224859358#1_4" index="4" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="163.14" width="4.00" shape="215.50,468.97 375.78,445.31"/>
        <lane id="224859358#1_5" index="5" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="163.14" width="4.00" shape="216.08,472.93 375.63,449.38"/>
    </edge>
    <edge id="224859358#1-AddedOnRampEdge" from="5170751727" to="224859358#1-AddedOnRampNode" priority="12" type="highway.primary" spreadType="center" shape="109.09,476.46 210.36,461.65">
        <lane id="224859358#1-AddedOnRampEdge_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="94.35" width="4.00" shape="111.33,464.01 204.68,450.35"/>
        <lane id="224859358#1-AddedOnRampEdge_1" index="1" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="94.35" width="4.00" shape="111.90,467.96 205.26,454.31"/>
        <lane id="224859358#1-AddedOnRampEdge_2" index="2" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="94.35" width="4.00" shape="112.48,471.92 205.84,458.27"/>
        <lane id="224859358#1-AddedOnRampEdge_3" index="3" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="94.35" width="4.00" shape="113.06,475.88 206.42,462.23"/>
        <lane id="224859358#1-AddedOnRampEdge_4" index="4" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="94.35" width="4.00" shape="113.64,479.84 207.00,466.18"/>
        <lane id="224859358#1-AddedOnRampEdge_5" index="5" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="94.35" width="4.00" shape="114.22,483.79 207.58,470.14"/>
        <lane id="224859358#1-AddedOnRampEdge_6" index="6" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="94.35" width="4.00" shape="114.80,487.75 208.15,474.10"/>
    </edge>
    <edge id="224859359#0" from="cluster_1642556745_2304667126_2304667130_2304667132" to="1642556796" priority="12" type="highway.primary" spreadType="center" shape="409.80,456.00 406.00,466.17 404.47,488.05 404.85,497.87 405.17,504.86 405.53,510.85">
        <lane id="224859359#0_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="25.46" width="4.00" shape="408.85,482.79 408.48,488.11 408.85,497.70 409.16,504.65 409.27,506.47"/>
        <lane id="224859359#0_1" index="1" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="25.46" width="4.00" shape="404.94,481.29 404.47,488.05 404.85,497.87 405.17,504.86 405.28,506.71"/>
        <lane id="224859359#0_2" index="2" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="25.46" width="4.00" shape="401.04,479.78 400.46,487.99 400.85,498.04 401.18,505.07 401.29,506.95"/>
    </edge>
    <edge id="224859359#1" from="224859359#1-AddedOnRampNode" to="420520082" priority="12" type="highway.primary" spreadType="center">
        <lane id="224859359#1_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="171.28" width="4.00" shape="416.88,612.70 437.58,782.73"/>
        <lane id="224859359#1_1" index="1" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="171.28" width="4.00" shape="412.91,613.19 433.61,783.22"/>
        <lane id="224859359#1_2" index="2" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="171.28" width="4.00" shape="408.94,613.67 429.64,783.70"/>
    </edge>
    <edge id="224859359#1-AddedOnRampEdge" from="1642556796" to="224859359#1-AddedOnRampNode" priority="12" type="highway.primary" spreadType="center" shape="407.53,510.86 414.42,609.05">
        <lane id="224859359#1-AddedOnRampEdge_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="90.61" width="4.00" acceleration="1" shape="413.79,514.36 420.13,604.74"/>
        <lane id="224859359#1-AddedOnRampEdge_1" index="1" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="90.61" width="4.00" shape="409.80,514.64 416.14,605.02"/>
        <lane id="224859359#1-AddedOnRampEdge_2" index="2" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="90.61" width="4.00" shape="405.81,514.92 412.15,605.30"/>
        <lane id="224859359#1-AddedOnRampEdge_3" index="3" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="90.61" width="4.00" shape="401.82,515.20 408.16,605.58"/>
    </edge>
    <edge id="283562278#0" from="2869843583" to="271900700" priority="12" type="highway.primary" spreadType="center">
        <lane id="283562278#0_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="402.49" width="4.00" shape="788.03,42.68 516.95,340.19"/>
        <lane id="283562278#0_1" index="1" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="402.49" width="4.00" shape="785.07,39.99 513.99,337.50"/>
        <lane id="283562278#0_2" index="2" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="402.49" width="4.00" shape="782.11,37.29 511.03,334.80"/>
        <lane id="283562278#0_3" index="3" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="402.49" width="4.00" shape="779.15,34.60 508.08,332.11"/>
    </edge>
    <edge id="283562278#4" from="271900700" to="cluster_1642556745_2304667126_2304667130_2304667132" priority="12" type="highway.primary" spreadType="center" shape="512.41,336.26 456.91,396.86 444.64,410.04 431.34,424.47 422.25,434.34">
        <lane id="283562278#4_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="112.96" width="4.00" shape="516.73,340.42 461.32,400.93 449.04,414.12 440.17,423.74"/>
        <lane id="283562278#4_1" index="1" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="112.96" width="4.00" shape="513.78,337.72 458.38,398.22 446.11,411.40 437.31,420.94"/>
        <lane id="283562278#4_2" index="2" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="112.96" width="4.00" shape="510.83,335.02 455.44,395.50 443.17,408.68 434.45,418.14"/>
        <lane id="283562278#4_3" index="3" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="112.96" width="4.00" shape="507.88,332.32 452.50,392.79 440.24,405.96 431.59,415.35"/>
    </edge>
    <edge id="35977533" from="420520083" to="35977533-AddedOffRampNode" priority="12" type="highway.primary" spreadType="center">
        <lane id="35977533_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="137.21" width="4.00" shape="412.10,747.18 395.44,610.98"/>
        <lane id="35977533_1" index="1" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="137.21" width="4.00" shape="416.07,746.69 399.41,610.49"/>
        <lane id="35977533_2" index="2" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="137.21" width="4.00" shape="420.04,746.21 403.38,610.01"/>
    </edge>
    <edge id="35977533-AddedOffRampEdge" from="35977533-AddedOffRampNode" to="5736089086" priority="12" type="highway.primary" spreadType="center" shape="396.94,606.77 382.92,507.73">
        <lane id="35977533-AddedOffRampEdge_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="91.74" width="4.00" shape="390.44,603.68 377.59,512.85"/>
        <lane id="35977533-AddedOffRampEdge_1" index="1" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="91.74" width="4.00" shape="394.40,603.12 381.55,512.29"/>
        <lane id="35977533-AddedOffRampEdge_2" index="2" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="91.74" width="4.00" shape="398.36,602.56 385.51,511.73"/>
        <lane id="35977533-AddedOffRampEdge_3" index="3" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="91.74" width="4.00" shape="402.32,602.00 389.47,511.17"/>
    </edge>
    <edge id="388718982" from="765210031" to="gneJ0" priority="12" type="highway.primary" spreadType="center" shape="465.91,1381.32 464.40,1371.49 459.86,1323.30 456.37,1286.27 451.21,1225.98 445.86,1213.07 434.21,1187.12 427.80,1166.75 425.13,1151.09 423.38,1141.85 420.75,1127.98 392.09,890.07 392.80,872.15 395.03,851.07 400.43,833.21 415.05,806.32 420.72,795.63 420.94,785.80">
        <lane id="388718982_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="8.33" length="608.76" width="4.00" shape="461.96,1381.93 460.43,1371.98 455.88,1323.68 452.39,1286.63 447.28,1226.94 442.19,1214.66 430.46,1188.54 423.90,1167.69 421.19,1151.80 419.45,1142.59 416.79,1128.59 388.08,890.23 388.81,871.86 391.09,850.27 396.72,831.66 411.53,804.43 416.74,794.59 416.93,786.15"/>
        <lane id="388718982_1" index="1" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="8.33" length="608.76" width="4.00" shape="465.91,1381.32 464.40,1371.49 459.86,1323.30 456.37,1286.27 451.21,1225.98 445.86,1213.07 434.21,1187.12 427.80,1166.75 425.13,1151.09 423.38,1141.85 420.75,1127.98 392.09,890.07 392.80,872.15 395.03,851.07 400.43,833.21 415.05,806.32 420.72,795.63 420.93,786.24"/>
        <lane id="388718982_2" index="2" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="8.33" length="608.76" width="4.00" shape="469.86,1380.71 468.37,1371.00 463.84,1322.92 460.35,1285.91 455.14,1225.02 449.53,1211.48 437.96,1185.70 431.70,1165.81 429.07,1150.38 427.31,1141.11 424.71,1127.37 396.10,889.91 396.79,872.44 398.97,851.87 404.14,834.76 418.57,808.21 424.70,796.67 424.93,786.33"/>
    </edge>
    <edge id="388718982.606" from="gneJ0" to="420520083" priority="12" type="highway.primary" spreadType="center">
        <lane id="388718982.606_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="8.33" length="38.67" width="4.00" shape="416.92,785.86 412.14,747.48"/>
        <lane id="388718982.606_1" index="1" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="8.33" length="38.67" width="4.00" shape="420.89,785.36 416.11,746.99"/>
        <lane id="388718982.606_2" index="2" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="8.33" length="38.67" width="4.00" shape="424.86,784.87 420.08,746.49"/>
    </edge>
    <edge id="532883867" from="1642556856" to="1642556796" priority="7" type="highway.primary_link" spreadType="center" shape="512.29,463.08 424.06,467.54 419.34,472.05 415.98,478.86 412.65,489.94 413.02,504.99 413.53,510.91">
        <lane id="532883867_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="22.22" length="125.90" width="4.00" shape="507.85,463.30 424.06,467.54 419.34,472.05 415.98,478.86 412.65,489.94 413.02,504.99 413.13,506.24"/>
    </edge>
    <edge id="532883868" from="5736089086" to="5170734159" priority="7" type="highway.primary_link" spreadType="center" shape="376.98,508.59 372.59,488.07 364.85,480.98 354.33,474.99 329.04,476.31">
        <lane id="532883868_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="22.22" length="60.65" width="4.00" shape="376.13,504.59 372.59,488.07 364.85,480.98 354.33,474.99 333.21,476.09"/>
    </edge>
    <edge id="532885611" from="1642556860" to="5170751727" priority="7" type="highway.primary_link" spreadType="center" shape="26.67,441.20 34.61,455.51 39.06,459.91 45.08,465.35 53.65,468.08 59.37,468.22 67.51,468.21 81.41,467.03 95.44,466.26 107.15,464.62">
        <lane id="532885611_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="22.22" length="89.63" width="4.00" shape="26.67,441.20 34.61,455.51 39.06,459.91 45.08,465.35 53.65,468.08 59.37,468.22 67.51,468.21 81.41,467.03 95.44,466.26 103.40,465.15"/>
    </edge>
    <edge id="678126832#0" from="533591697" to="678126832#0-AddedOffRampNode" priority="12" type="highway.primary" spreadType="center">
        <lane id="678126832#0_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="218.22" width="4.00" shape="832.45,424.24 615.71,449.67"/>
        <lane id="678126832#0_1" index="1" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="218.22" width="4.00" shape="831.98,420.27 615.24,445.69"/>
        <lane id="678126832#0_2" index="2" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="218.22" width="4.00" shape="831.51,416.30 614.78,441.72"/>
    </edge>
    <edge id="678126832#0-AddedOffRampEdge" from="678126832#0-AddedOffRampNode" to="1642556856" priority="12" type="highway.primary" spreadType="center" shape="611.50,448.14 576.26,452.28 511.84,457.09">
        <lane id="678126832#0-AddedOffRampEdge_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="91.80" width="4.00" shape="608.23,454.57 576.83,458.25 516.56,462.75"/>
        <lane id="678126832#0-AddedOffRampEdge_1" index="1" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="91.80" width="4.00" shape="607.76,450.59 576.45,454.27 516.26,458.77"/>
        <lane id="678126832#0-AddedOffRampEdge_2" index="2" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="91.80" width="4.00" shape="607.30,446.62 576.07,450.29 515.96,454.78"/>
        <lane id="678126832#0-AddedOffRampEdge_3" index="3" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="91.80" width="4.00" shape="606.83,442.65 575.69,446.31 515.66,450.79"/>
    </edge>
    <edge id="678126832#1" from="1642556856" to="cluster_1642556745_2304667126_2304667130_2304667132" priority="12" type="highway.primary" spreadType="center" shape="511.69,455.10 448.60,453.00 409.80,456.00">
        <lane id="678126832#1_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="64.12" width="4.00" shape="507.20,458.95 448.69,457.01 443.32,457.42"/>
        <lane id="678126832#1_1" index="1" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="64.12" width="4.00" shape="507.33,454.95 448.60,453.00 443.26,453.41"/>
        <lane id="678126832#1_2" index="2" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="27.78" length="64.12" width="4.00" shape="507.46,450.96 448.51,448.99 443.20,449.41"/>
    </edge>
    <edge id="95458443#0" from="420520082" to="301442201" priority="12" type="highway.primary" spreadType="center" shape="433.67,783.68 436.98,795.33 465.64,827.91 473.78,842.96 482.83,864.87 485.76,878.10 487.66,893.77 492.17,931.00 499.80,999.96 510.20,1111.71 510.18,1125.01 510.15,1137.56 510.59,1153.16 508.75,1172.16 505.46,1206.33 509.92,1274.43 515.63,1320.51 521.08,1364.46 522.18,1374.38">
        <lane id="95458443#0_0" index="0" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="8.33" length="608.12" width="4.00" shape="437.65,783.04 440.58,793.37 468.94,825.61 477.40,841.24 486.66,863.66 489.71,877.43 491.63,893.29 496.14,930.54 503.78,999.55 514.20,1111.53 514.18,1125.02 514.15,1137.51 514.60,1153.30 512.73,1172.54 509.47,1206.39 513.90,1274.05 519.60,1320.02 525.05,1363.99 526.16,1373.94"/>
        <lane id="95458443#0_1" index="1" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="8.33" length="608.12" width="4.00" shape="433.80,784.13 436.98,795.33 465.64,827.91 473.78,842.96 482.83,864.87 485.76,878.10 487.66,893.77 492.17,931.00 499.80,999.96 510.20,1111.71 510.18,1125.01 510.15,1137.56 510.59,1153.16 508.75,1172.16 505.46,1206.33 509.92,1274.43 515.63,1320.51 521.08,1364.46 522.18,1374.38"/>
        <lane id="95458443#0_2" index="2" disallow="tram rail_urban rail rail_electric rail_fast ship" speed="8.33" length="608.12" width="4.00" shape="429.95,785.22 433.38,797.29 462.34,830.21 470.16,844.68 479.00,866.08 481.81,878.77 483.69,894.25 488.20,931.46 495.82,1000.37 506.20,1111.89 506.18,1125.00 506.15,1137.61 506.58,1153.02 504.77,1171.78 501.45,1206.27 505.94,1274.81 511.66,1321.00 517.11,1364.93 518.20,1374.82"/>
    </edge>

    <junction id="1642556796" type="priority" x="405.53" y="510.85" incLanes="224859359#0_0 224859359#0_1 224859359#0_2 532883867_0" intLanes=":1642556796_0_0 :1642556796_0_1 :1642556796_0_2 :1642556796_3_0" shape="399.82,515.34 415.79,514.22 415.13,506.12 399.29,507.07">
        <request index="0" response="0000" foes="0000" cont="0"/>
        <request index="1" response="0000" foes="0000" cont="0"/>
        <request index="2" response="0000" foes="0000" cont="0"/>
        <request index="3" response="0000" foes="0000" cont="0"/>
    </junction>
    <junction id="1642556856" type="priority" x="511.69" y="455.10" incLanes="678126832#0-AddedOffRampEdge_0 678126832#0-AddedOffRampEdge_1 678126832#0-AddedOffRampEdge_2 678126832#0-AddedOffRampEdge_3" intLanes=":1642556856_0_0 :1642556856_1_0 :1642556856_1_1 :1642556856_1_2" shape="516.71,464.75 515.51,448.79 512.56,449.00 511.52,449.04 510.49,449.04 509.23,449.01 507.53,448.96 507.13,460.95 507.75,461.31 507.95,465.30">
        <request index="0" response="0000" foes="0000" cont="0"/>
        <request index="1" response="0000" foes="0000" cont="0"/>
        <request index="2" response="0000" foes="0000" cont="0"/>
        <request index="3" response="0000" foes="0000" cont="0"/>
    </junction>
    <junction id="1642556860" type="dead_end" x="26.67" y="441.20" incLanes="" intLanes="" shape="24.92,442.17 28.42,440.23"/>
    <junction id="1642987266" type="dead_end" x="802.61" y="0.00" incLanes="194608194#3_0 194608194#3_1 194608194#3_2 194608194#3_3" intLanes="" shape="796.74,-5.44 808.48,5.44"/>
    <junction id="1691661679" type="dead_end" x="32.32" y="509.78" incLanes="221437411#2_0 221437411#2_1 221437411#2_2 221437411#2_3" intLanes="" shape="33.48,517.70 31.16,501.86"/>
    <junction id="2123944796" type="dead_end" x="22.14" y="491.25" incLanes="" intLanes="" shape="23.88,503.12 20.40,479.38"/>
    <junction id="221437411#2-AddedOnRampNode" type="priority" x="228.76" y="481.07" incLanes="221437411#2-AddedOnRampEdge_0 221437411#2-AddedOnRampEdge_1 221437411#2-AddedOnRampEdge_2 221437411#2-AddedOnRampEdge_3 221437411#2-AddedOnRampEdge_4" intLanes=":221437411#2-AddedOnRampNode_0_0 :221437411#2-AddedOnRampNode_0_1 :221437411#2-AddedOnRampNode_0_2 :221437411#2-AddedOnRampNode_0_3 :221437411#2-AddedOnRampNode_0_4" shape="234.50,492.36 231.56,472.57 223.67,473.73 225.98,489.56 229.17,490.14 231.30,491.78 232.63,492.33">
        <request index="0" response="00010" foes="00010" cont="0"/>
        <request index="1" response="00000" foes="00001" cont="0"/>
        <request index="2" response="00000" foes="00000" cont="0"/>
        <request index="3" response="00000" foes="00000" cont="0"/>
        <request index="4" response="00000" foes="00000" cont="0"/>
    </junction>
    <junction id="224859358#1-AddedOnRampNode" type="priority" x="210.68" y="463.62" incLanes="224859358#1-AddedOnRampEdge_0 224859358#1-AddedOnRampEdge_1 224859358#1-AddedOnRampEdge_2 224859358#1-AddedOnRampEdge_3 224859358#1-AddedOnRampEdge_4 224859358#1-AddedOnRampEdge_5 224859358#1-AddedOnRampEdge_6" intLanes=":224859358#1-AddedOnRampNode_0_0 :224859358#1-AddedOnRampNode_0_1 :224859358#1-AddedOnRampNode_0_2 :224859358#1-AddedOnRampNode_0_3 :224859358#1-AddedOnRampNode_0_4 :224859358#1-AddedOnRampNode_0_5 :224859358#1-AddedOnRampNode_0_6" shape="216.38,474.91 212.87,451.17 209.69,450.59 207.57,448.96 206.25,448.40 204.39,448.37 208.44,476.08">
        <request index="0" response="0000010" foes="0000010" cont="0"/>
        <request index="1" response="0000000" foes="0000001" cont="0"/>
        <request index="2" response="0000000" foes="0000000" cont="0"/>
        <request index="3" response="0000000" foes="0000000" cont="0"/>
        <request index="4" response="0000000" foes="0000000" cont="0"/>
        <request index="5" response="0000000" foes="0000000" cont="0"/>
        <request index="6" response="0000000" foes="0000000" cont="0"/>
    </junction>
    <junction id="224859359#1-AddedOnRampNode" type="priority" x="412.43" y="609.27" incLanes="224859359#1-AddedOnRampEdge_0 224859359#1-AddedOnRampEdge_1 224859359#1-AddedOnRampEdge_2 224859359#1-AddedOnRampEdge_3" intLanes=":224859359#1-AddedOnRampNode_0_0 :224859359#1-AddedOnRampNode_0_1 :224859359#1-AddedOnRampNode_0_2 :224859359#1-AddedOnRampNode_0_3" shape="406.95,613.91 418.86,612.46 419.55,609.49 420.41,608.54 421.30,607.59 421.95,606.37 422.13,604.60 406.17,605.72">
        <request index="0" response="0010" foes="0010" cont="0"/>
        <request index="1" response="0000" foes="0001" cont="0"/>
        <request index="2" response="0000" foes="0000" cont="0"/>
        <request index="3" response="0000" foes="0000" cont="0"/>
    </junction>
    <junction id="271900700" type="priority" x="512.41" y="336.26" incLanes="283562278#0_0 283562278#0_1 283562278#0_2 283562278#0_3" intLanes=":271900700_0_0 :271900700_0_1 :271900700_0_2 :271900700_0_3" shape="518.42,341.54 506.60,330.76 506.41,330.97 518.21,341.77">
        <request index="0" response="0000" foes="0000" cont="0"/>
        <request index="1" response="0000" foes="0000" cont="0"/>
        <request index="2" response="0000" foes="0000" cont="0"/>
        <request index="3" response="0000" foes="0000" cont="0"/>
    </junction>
    <junction id="271900701" type="priority" x="498.78" y="327.62" incLanes="194608194#0_0 194608194#0_1 194608194#0_2 194608194#0_3" intLanes=":271900701_0_0 :271900701_0_1 :271900701_0_2 :271900701_0_3" shape="504.75,332.95 493.01,322.07 492.76,322.35 504.60,333.11">
        <request index="0" response="0000" foes="0000" cont="0"/>
        <request index="1" response="0000" foes="0000" cont="0"/>
        <request index="2" response="0000" foes="0000" cont="0"/>
        <request index="3" response="0000" foes="0000" cont="0"/>
    </junction>
    <junction id="2869843583" type="dead_end" x="783.59" y="38.64" incLanes="" intLanes="" shape="777.68,33.25 789.50,44.03"/>
    <junction id="29706017" type="dead_end" x="1489.42" y="349.29" incLanes="224859357#0_0 224859357#0_1 224859357#0_2" intLanes="" shape="1489.82,343.30 1489.02,355.28"/>
    <junction id="301442201" type="dead_end" x="522.18" y="1374.38" incLanes="95458443#0_0 95458443#0_1 95458443#0_2" intLanes="" shape="528.14,1373.72 516.22,1375.04"/>
    <junction id="35977533-AddedOffRampNode" type="priority" x="398.93" y="606.54" incLanes="35977533_0 35977533_1 35977533_2" intLanes=":35977533-AddedOffRampNode_0_0 :35977533-AddedOffRampNode_0_1 :35977533-AddedOffRampNode_0_2 :35977533-AddedOffRampNode_0_3" shape="393.46,611.22 405.37,609.77 404.31,601.72 388.46,603.96 389.91,606.81 390.99,607.59 392.06,608.37 392.95,609.47">
        <request index="0" response="0000" foes="0000" cont="0"/>
        <request index="1" response="0000" foes="0000" cont="0"/>
        <request index="2" response="0000" foes="0000" cont="0"/>
        <request index="3" response="0000" foes="0000" cont="0"/>
    </junction>
    <junction id="420520082" type="priority" x="433.67" y="783.68" incLanes="224859359#1_0 224859359#1_1 224859359#1_2" intLanes=":420520082_0_0 :420520082_0_1 :420520082_0_2" shape="428.03,785.77 439.57,782.49 427.66,783.94 427.75,784.63 427.79,784.87 427.84,785.10 427.92,785.39">
        <request index="0" response="000" foes="000" cont="0"/>
        <request index="1" response="000" foes="000" cont="0"/>
        <request index="2" response="000" foes="000" cont="0"/>
    </junction>
    <junction id="420520083" type="priority" x="416.09" y="746.84" incLanes="388718982.606_0 388718982.606_1 388718982.606_2" intLanes=":420520083_0_0 :420520083_0_1 :420520083_0_2" shape="410.15,747.73 422.06,746.25 422.03,745.96 410.12,747.42">
        <request index="0" response="000" foes="000" cont="0"/>
        <request index="1" response="000" foes="000" cont="0"/>
        <request index="2" response="000" foes="000" cont="0"/>
    </junction>
    <junction id="5170734159" type="priority" x="327.67" y="466.41" incLanes="532883868_0 221437411#0_0 221437411#0_1 221437411#0_2 221437411#0_3" intLanes=":5170734159_0_0 :5170734159_1_0 :5170734159_1_1 :5170734159_1_2 :5170734159_1_3" shape="333.50,478.08 330.57,457.90 322.64,459.07 325.57,478.85 328.50,478.44 329.52,478.32 330.55,478.24 331.81,478.17">
        <request index="0" response="00000" foes="00000" cont="0"/>
        <request index="1" response="00000" foes="00000" cont="0"/>
        <request index="2" response="00000" foes="00000" cont="0"/>
        <request index="3" response="00000" foes="00000" cont="0"/>
        <request index="4" response="00000" foes="00000" cont="0"/>
    </junction>
    <junction id="5170751727" type="priority" x="109.41" y="478.44" incLanes="532885611_0 224859358#0_0 224859358#0_1 224859358#0_2 224859358#0_3 224859358#0_4 224859358#0_5" intLanes=":5170751727_0_0 :5170751727_1_0 :5170751727_1_1 :5170751727_1_2 :5170751727_1_3 :5170751727_1_4 :5170751727_1_5" shape="115.09,489.73 111.04,462.03 103.11,463.17 107.18,490.90">
        <request index="0" response="0000000" foes="0000000" cont="0"/>
        <request index="1" response="0000000" foes="0000000" cont="0"/>
        <request index="2" response="0000000" foes="0000000" cont="0"/>
        <request index="3" response="0000000" foes="0000000" cont="0"/>
        <request index="4" response="0000000" foes="0000000" cont="0"/>
        <request index="5" response="0000000" foes="0000000" cont="0"/>
        <request index="6" response="0000000" foes="0000000" cont="0"/>
    </junction>
    <junction id="533591697" type="dead_end" x="831.98" y="420.27" incLanes="" intLanes="" shape="831.28,414.31 832.68,426.23"/>
    <junction id="5736089086" type="priority" x="384.90" y="507.44" incLanes="35977533-AddedOffRampEdge_0 35977533-AddedOffRampEdge_1 35977533-AddedOffRampEdge_2 35977533-AddedOffRampEdge_3" intLanes=":5736089086_0_0 :5736089086_1_0 :5736089086_2_0 :5736089086_3_0" shape="375.61,513.13 391.45,510.89 391.05,507.96 390.94,506.93 390.87,505.89 390.81,504.63 390.76,502.93 378.76,503.32 378.08,504.18 374.17,505.01">
        <request index="0" response="0000" foes="0000" cont="0"/>
        <request index="1" response="0000" foes="0000" cont="0"/>
        <request index="2" response="0000" foes="0000" cont="0"/>
        <request index="3" response="0000" foes="0000" cont="0"/>
    </junction>
    <junction id="678126832#0-AddedOffRampNode" type="priority" x="611.27" y="446.16" incLanes="678126832#0_0 678126832#0_1 678126832#0_2" intLanes=":678126832#0-AddedOffRampNode_0_0 :678126832#0-AddedOffRampNode_0_1 :678126832#0-AddedOffRampNode_0_2 :678126832#0-AddedOffRampNode_0_3" shape="615.94,451.65 614.54,439.73 606.60,440.66 608.46,456.55 611.39,455.17 613.02,453.04 614.15,452.16">
        <request index="0" response="0000" foes="0000" cont="0"/>
        <request index="1" response="0000" foes="0000" cont="0"/>
        <request index="2" response="0000" foes="0000" cont="0"/>
        <request index="3" response="0000" foes="0000" cont="0"/>
    </junction>
    <junction id="765210031" type="dead_end" x="465.91" y="1381.32" incLanes="" intLanes="" shape="471.84,1380.41 459.98,1382.23"/>
    <junction id="cluster_1642556745_2304667126_2304667130_2304667132" type="priority" x="404.00" y="446.40" incLanes="678126832#1_0 678126832#1_1 678126832#1_2 283562278#4_0 283562278#4_1 283562278#4_2 283562278#4_3 224859358#1_0 224859358#1_1 224859358#1_2 224859358#1_3 224859358#1_4 224859358#1_5 151430192#2_0 151430192#2_1 151430192#2_2" intLanes=":cluster_1642556745_2304667126_2304667130_2304667132_0_0 :cluster_1642556745_2304667126_2304667130_2304667132_1_0 :cluster_1642556745_2304667126_2304667130_2304667132_1_1 :cluster_1642556745_2304667126_2304667130_2304667132_1_2 :cluster_1642556745_2304667126_2304667130_2304667132_25_0 :cluster_1642556745_2304667126_2304667130_2304667132_26_0 :cluster_1642556745_2304667126_2304667130_2304667132_6_0 :cluster_1642556745_2304667126_2304667130_2304667132_7_0 :cluster_1642556745_2304667126_2304667130_2304667132_7_1 :cluster_1642556745_2304667126_2304667130_2304667132_7_2 :cluster_1642556745_2304667126_2304667130_2304667132_10_0 :cluster_1642556745_2304667126_2304667130_2304667132_11_0 :cluster_1642556745_2304667126_2304667130_2304667132_12_0 :cluster_1642556745_2304667126_2304667130_2304667132_13_0 :cluster_1642556745_2304667126_2304667130_2304667132_14_0 :cluster_1642556745_2304667126_2304667130_2304667132_14_1 :cluster_1642556745_2304667126_2304667130_2304667132_14_2 :cluster_1642556745_2304667126_2304667130_2304667132_27_0 :cluster_1642556745_2304667126_2304667130_2304667132_28_0 :cluster_1642556745_2304667126_2304667130_2304667132_19_0 :cluster_1642556745_2304667126_2304667130_2304667132_20_0 :cluster_1642556745_2304667126_2304667130_2304667132_20_1 :cluster_1642556745_2304667126_2304667130_2304667132_20_2 :cluster_1642556745_2304667126_2304667130_2304667132_20_3 :cluster_1642556745_2304667126_2304667130_2304667132_24_0" shape="443.35,459.42 442.89,428.02 440.97,427.72 440.57,427.33 440.54,426.76 440.89,426.03 441.60,425.14 418.83,402.88 411.60,410.61 405.82,416.27 400.46,420.30 394.47,423.14 386.82,425.23 376.46,427.02 374.96,467.57 377.14,467.71 377.87,468.17 378.36,468.90 378.61,469.89 378.62,471.14 410.80,483.55 412.13,476.84 415.09,471.21 419.70,466.65 425.94,463.17 433.82,460.76">
        <request index="0"  response="0000000000000000000000000" foes="0000000000000001110000000" cont="0"/>
        <request index="1"  response="0000000000000000000000000" foes="1111101100000011110000000" cont="0"/>
        <request index="2"  response="0000000000000000000000000" foes="1111101100000011110000000" cont="0"/>
        <request index="3"  response="0000000000000000000000000" foes="1111101100000011110000000" cont="0"/>
        <request index="4"  response="0000000011111100000000000" foes="1111100011111111110000000" cont="1"/>
        <request index="5"  response="0000000011111100000000000" foes="1111100011111111110000000" cont="1"/>
        <request index="6"  response="0000000011100000000000000" foes="0000000011100000000000000" cont="0"/>
        <request index="7"  response="0000001111100000000111111" foes="1000001111100000000111111" cont="0"/>
        <request index="8"  response="0000001111100000000111111" foes="1000001111100000000111111" cont="0"/>
        <request index="9"  response="0000001111100000000111111" foes="1000001111100000000111111" cont="0"/>
        <request index="10" response="0111101111100000000111110" foes="0111101111100000000111110" cont="0"/>
        <request index="11" response="0000000000000000000000000" foes="0111100000000000000110000" cont="0"/>
        <request index="12" response="0000000000000000000000000" foes="0111100000000000000110000" cont="0"/>
        <request index="13" response="0000000000000000000000000" foes="0111100000000000000110000" cont="0"/>
        <request index="14" response="0000000000000000000000000" foes="1111100000000011111110000" cont="0"/>
        <request index="15" response="0000000000000000000000000" foes="1111100000000011111110000" cont="0"/>
        <request index="16" response="0000000000000000000000000" foes="1111100000000011111110000" cont="0"/>
        <request index="17" response="0000000000000000000001110" foes="1111100000000011110001110" cont="1"/>
        <request index="18" response="0000000000000000000001110" foes="1111100000000011110001110" cont="1"/>
        <request index="19" response="0000000000000000000000000" foes="0000000000000000000000000" cont="0"/>
        <request index="20" response="0000001111111100000111110" foes="0000001111111110000111110" cont="0"/>
        <request index="21" response="0000001111111100000111110" foes="0000001111111110000111110" cont="0"/>
        <request index="22" response="0000001111111100000111110" foes="0000001111111110000111110" cont="0"/>
        <request index="23" response="0000001111111100000111110" foes="0000001111111110000111110" cont="0"/>
        <request index="24" response="0000001111100001110111110" foes="0000001111100001110111110" cont="0"/>
    </junction>
    <junction id="gneJ0" type="priority" x="420.94" y="785.80" incLanes="388718982_0 388718982_1 388718982_2" intLanes=":gneJ0_0_0 :gneJ0_0_1 :gneJ0_0_2" shape="426.84,784.62 414.93,786.11 426.93,786.37 426.94,785.72 426.93,785.50 426.92,785.27 426.89,784.99">
        <request index="0" response="000" foes="000" cont="0"/>
        <request index="1" response="000" foes="000" cont="0"/>
        <request index="2" response="000" foes="000" cont="0"/>
    </junction>

    <junction id=":cluster_1642556745_2304667126_2304667130_2304667132_25_0" type="internal" x="420.00" y="441.63" incLanes=":cluster_1642556745_2304667126_2304667130_2304667132_4_0 224859358#1_0 224859358#1_1 224859358#1_2 224859358#1_3 224859358#1_4" intLanes=":cluster_1642556745_2304667126_2304667130_2304667132_7_0 :cluster_1642556745_2304667126_2304667130_2304667132_7_1 :cluster_1642556745_2304667126_2304667130_2304667132_7_2 :cluster_1642556745_2304667126_2304667130_2304667132_10_0 :cluster_1642556745_2304667126_2304667130_2304667132_11_0 :cluster_1642556745_2304667126_2304667130_2304667132_12_0 :cluster_1642556745_2304667126_2304667130_2304667132_13_0 :cluster_1642556745_2304667126_2304667130_2304667132_14_0 :cluster_1642556745_2304667126_2304667130_2304667132_14_1 :cluster_1642556745_2304667126_2304667130_2304667132_14_2 :cluster_1642556745_2304667126_2304667130_2304667132_20_0 :cluster_1642556745_2304667126_2304667130_2304667132_20_1 :cluster_1642556745_2304667126_2304667130_2304667132_20_2 :cluster_1642556745_2304667126_2304667130_2304667132_20_3 :cluster_1642556745_2304667126_2304667130_2304667132_24_0"/>
    <junction id=":cluster_1642556745_2304667126_2304667130_2304667132_26_0" type="internal" x="425.10" y="441.15" incLanes=":cluster_1642556745_2304667126_2304667130_2304667132_5_0 224859358#1_0 224859358#1_1 224859358#1_2 224859358#1_3 224859358#1_4" intLanes=":cluster_1642556745_2304667126_2304667130_2304667132_7_0 :cluster_1642556745_2304667126_2304667130_2304667132_7_1 :cluster_1642556745_2304667126_2304667130_2304667132_7_2 :cluster_1642556745_2304667126_2304667130_2304667132_10_0 :cluster_1642556745_2304667126_2304667130_2304667132_11_0 :cluster_1642556745_2304667126_2304667130_2304667132_12_0 :cluster_1642556745_2304667126_2304667130_2304667132_13_0 :cluster_1642556745_2304667126_2304667130_2304667132_14_0 :cluster_1642556745_2304667126_2304667130_2304667132_14_1 :cluster_1642556745_2304667126_2304667130_2304667132_14_2 :cluster_1642556745_2304667126_2304667130_2304667132_20_0 :cluster_1642556745_2304667126_2304667130_2304667132_20_1 :cluster_1642556745_2304667126_2304667130_2304667132_20_2 :cluster_1642556745_2304667126_2304667130_2304667132_20_3 :cluster_1642556745_2304667126_2304667130_2304667132_24_0"/>
    <junction id=":cluster_1642556745_2304667126_2304667130_2304667132_27_0" type="internal" x="399.31" y="451.37" incLanes=":cluster_1642556745_2304667126_2304667130_2304667132_17_0 678126832#1_0 678126832#1_1" intLanes=":cluster_1642556745_2304667126_2304667130_2304667132_0_0 :cluster_1642556745_2304667126_2304667130_2304667132_1_0 :cluster_1642556745_2304667126_2304667130_2304667132_1_1 :cluster_1642556745_2304667126_2304667130_2304667132_1_2 :cluster_1642556745_2304667126_2304667130_2304667132_7_0 :cluster_1642556745_2304667126_2304667130_2304667132_7_1 :cluster_1642556745_2304667126_2304667130_2304667132_7_2 :cluster_1642556745_2304667126_2304667130_2304667132_10_0 :cluster_1642556745_2304667126_2304667130_2304667132_20_0 :cluster_1642556745_2304667126_2304667130_2304667132_20_1 :cluster_1642556745_2304667126_2304667130_2304667132_20_2 :cluster_1642556745_2304667126_2304667130_2304667132_20_3 :cluster_1642556745_2304667126_2304667130_2304667132_24_0"/>
    <junction id=":cluster_1642556745_2304667126_2304667130_2304667132_28_0" type="internal" x="391.49" y="451.36" incLanes=":cluster_1642556745_2304667126_2304667130_2304667132_18_0 678126832#1_0 678126832#1_1" intLanes=":cluster_1642556745_2304667126_2304667130_2304667132_0_0 :cluster_1642556745_2304667126_2304667130_2304667132_1_0 :cluster_1642556745_2304667126_2304667130_2304667132_1_1 :cluster_1642556745_2304667126_2304667130_2304667132_1_2 :cluster_1642556745_2304667126_2304667130_2304667132_7_0 :cluster_1642556745_2304667126_2304667130_2304667132_7_1 :cluster_1642556745_2304667126_2304667130_2304667132_7_2 :cluster_1642556745_2304667126_2304667130_2304667132_10_0 :cluster_1642556745_2304667126_2304667130_2304667132_20_0 :cluster_1642556745_2304667126_2304667130_2304667132_20_1 :cluster_1642556745_2304667126_2304667130_2304667132_20_2 :cluster_1642556745_2304667126_2304667130_2304667132_20_3 :cluster_1642556745_2304667126_2304667130_2304667132_24_0"/>

    <connection from="151430192#2" to="221437411#0" fromLane="0" toLane="0" via=":cluster_1642556745_2304667126_2304667130_2304667132_19_0" dir="r" state="M"/>
    <connection from="151430192#2" to="194608194#0" fromLane="0" toLane="0" via=":cluster_1642556745_2304667126_2304667130_2304667132_20_0" dir="s" state="m"/>
    <connection from="151430192#2" to="194608194#0" fromLane="1" toLane="1" via=":cluster_1642556745_2304667126_2304667130_2304667132_20_1" dir="s" state="m"/>
    <connection from="151430192#2" to="194608194#0" fromLane="2" toLane="2" via=":cluster_1642556745_2304667126_2304667130_2304667132_20_2" dir="s" state="m"/>
    <connection from="151430192#2" to="194608194#0" fromLane="2" toLane="3" via=":cluster_1642556745_2304667126_2304667130_2304667132_20_3" dir="s" state="m"/>
    <connection from="151430192#2" to="224859357#0" fromLane="2" toLane="2" via=":cluster_1642556745_2304667126_2304667130_2304667132_24_0" dir="l" state="m"/>
    <connection from="194608194#0" to="194608194#3" fromLane="0" toLane="0" via=":271900701_0_0" dir="s" state="M"/>
    <connection from="194608194#0" to="194608194#3" fromLane="1" toLane="1" via=":271900701_0_1" dir="s" state="M"/>
    <connection from="194608194#0" to="194608194#3" fromLane="2" toLane="2" via=":271900701_0_2" dir="s" state="M"/>
    <connection from="194608194#0" to="194608194#3" fromLane="3" toLane="3" via=":271900701_0_3" dir="s" state="M"/>
    <connection from="221437411#0" to="221437411#2-AddedOnRampEdge" fromLane="0" toLane="1" via=":5170734159_1_0" dir="s" state="M"/>
    <connection from="221437411#0" to="221437411#2-AddedOnRampEdge" fromLane="1" toLane="2" via=":5170734159_1_1" dir="s" state="M"/>
    <connection from="221437411#0" to="221437411#2-AddedOnRampEdge" fromLane="2" toLane="3" via=":5170734159_1_2" dir="s" state="M"/>
    <connection from="221437411#0" to="221437411#2-AddedOnRampEdge" fromLane="3" toLane="4" via=":5170734159_1_3" dir="s" state="M"/>
    <connection from="221437411#2-AddedOnRampEdge" to="221437411#2" fromLane="0" toLane="0" via=":221437411#2-AddedOnRampNode_0_0" dir="s" state="m"/>
    <connection from="221437411#2-AddedOnRampEdge" to="221437411#2" fromLane="1" toLane="0" via=":221437411#2-AddedOnRampNode_0_1" dir="s" state="M"/>
    <connection from="221437411#2-AddedOnRampEdge" to="221437411#2" fromLane="2" toLane="1" via=":221437411#2-AddedOnRampNode_0_2" dir="s" state="M"/>
    <connection from="221437411#2-AddedOnRampEdge" to="221437411#2" fromLane="3" toLane="2" via=":221437411#2-AddedOnRampNode_0_3" dir="s" state="M"/>
    <connection from="221437411#2-AddedOnRampEdge" to="221437411#2" fromLane="4" toLane="3" via=":221437411#2-AddedOnRampNode_0_4" dir="s" state="M"/>
    <connection from="224859358#0" to="224859358#1-AddedOnRampEdge" fromLane="0" toLane="1" via=":5170751727_1_0" dir="s" state="M"/>
    <connection from="224859358#0" to="224859358#1-AddedOnRampEdge" fromLane="1" toLane="2" via=":5170751727_1_1" dir="s" state="M"/>
    <connection from="224859358#0" to="224859358#1-AddedOnRampEdge" fromLane="2" toLane="3" via=":5170751727_1_2" dir="s" state="M"/>
    <connection from="224859358#0" to="224859358#1-AddedOnRampEdge" fromLane="3" toLane="4" via=":5170751727_1_3" dir="s" state="M"/>
    <connection from="224859358#0" to="224859358#1-AddedOnRampEdge" fromLane="4" toLane="5" via=":5170751727_1_4" dir="s" state="M"/>
    <connection from="224859358#0" to="224859358#1-AddedOnRampEdge" fromLane="5" toLane="6" via=":5170751727_1_5" dir="s" state="M"/>
    <connection from="224859358#1" to="194608194#0" fromLane="0" toLane="0" via=":cluster_1642556745_2304667126_2304667130_2304667132_11_0" dir="R" state="M"/>
    <connection from="224859358#1" to="194608194#0" fromLane="1" toLane="1" via=":cluster_1642556745_2304667126_2304667130_2304667132_12_0" dir="R" state="M"/>
    <connection from="224859358#1" to="194608194#0" fromLane="2" toLane="2" via=":cluster_1642556745_2304667126_2304667130_2304667132_13_0" dir="R" state="M"/>
    <connection from="224859358#1" to="224859357#0" fromLane="2" toLane="0" via=":cluster_1642556745_2304667126_2304667130_2304667132_14_0" dir="s" state="M"/>
    <connection from="224859358#1" to="224859357#0" fromLane="3" toLane="1" via=":cluster_1642556745_2304667126_2304667130_2304667132_14_1" dir="s" state="M"/>
    <connection from="224859358#1" to="224859357#0" fromLane="4" toLane="2" via=":cluster_1642556745_2304667126_2304667130_2304667132_14_2" dir="s" state="M"/>
    <connection from="224859358#1" to="224859359#0" fromLane="4" toLane="1" via=":cluster_1642556745_2304667126_2304667130_2304667132_17_0" dir="l" state="m"/>
    <connection from="224859358#1" to="224859359#0" fromLane="5" toLane="2" via=":cluster_1642556745_2304667126_2304667130_2304667132_18_0" dir="l" state="m"/>
    <connection from="224859358#1-AddedOnRampEdge" to="224859358#1" fromLane="0" toLane="0" via=":224859358#1-AddedOnRampNode_0_0" dir="s" state="m"/>
    <connection from="224859358#1-AddedOnRampEdge" to="224859358#1" fromLane="1" toLane="0" via=":224859358#1-AddedOnRampNode_0_1" dir="s" state="M"/>
    <connection from="224859358#1-AddedOnRampEdge" to="224859358#1" fromLane="2" toLane="1" via=":224859358#1-AddedOnRampNode_0_2" dir="s" state="M"/>
    <connection from="224859358#1-AddedOnRampEdge" to="224859358#1" fromLane="3" toLane="2" via=":224859358#1-AddedOnRampNode_0_3" dir="s" state="M"/>
    <connection from="224859358#1-AddedOnRampEdge" to="224859358#1" fromLane="4" toLane="3" via=":224859358#1-AddedOnRampNode_0_4" dir="s" state="M"/>
    <connection from="224859358#1-AddedOnRampEdge" to="224859358#1" fromLane="5" toLane="4" via=":224859358#1-AddedOnRampNode_0_5" dir="s" state="M"/>
    <connection from="224859358#1-AddedOnRampEdge" to="224859358#1" fromLane="6" toLane="5" via=":224859358#1-AddedOnRampNode_0_6" dir="s" state="M"/>
    <connection from="224859359#0" to="224859359#1-AddedOnRampEdge" fromLane="0" toLane="1" via=":1642556796_0_0" dir="s" state="M"/>
    <connection from="224859359#0" to="224859359#1-AddedOnRampEdge" fromLane="1" toLane="2" via=":1642556796_0_1" dir="s" state="M"/>
    <connection from="224859359#0" to="224859359#1-AddedOnRampEdge" fromLane="2" toLane="3" via=":1642556796_0_2" dir="s" state="M"/>
    <connection from="224859359#1" to="95458443#0" fromLane="0" toLane="0" via=":420520082_0_0" dir="s" state="M"/>
    <connection from="224859359#1" to="95458443#0" fromLane="1" toLane="1" via=":420520082_0_1" dir="s" state="M"/>
    <connection from="224859359#1" to="95458443#0" fromLane="2" toLane="2" via=":420520082_0_2" dir="s" state="M"/>
    <connection from="224859359#1-AddedOnRampEdge" to="224859359#1" fromLane="0" toLane="0" via=":224859359#1-AddedOnRampNode_0_0" dir="s" state="m"/>
    <connection from="224859359#1-AddedOnRampEdge" to="224859359#1" fromLane="1" toLane="0" via=":224859359#1-AddedOnRampNode_0_1" dir="s" state="M"/>
    <connection from="224859359#1-AddedOnRampEdge" to="224859359#1" fromLane="2" toLane="1" via=":224859359#1-AddedOnRampNode_0_2" dir="s" state="M"/>
    <connection from="224859359#1-AddedOnRampEdge" to="224859359#1" fromLane="3" toLane="2" via=":224859359#1-AddedOnRampNode_0_3" dir="s" state="M"/>
    <connection from="283562278#0" to="283562278#4" fromLane="0" toLane="0" via=":271900700_0_0" dir="s" state="M"/>
    <connection from="283562278#0" to="283562278#4" fromLane="1" toLane="1" via=":271900700_0_1" dir="s" state="M"/>
    <connection from="283562278#0" to="283562278#4" fromLane="2" toLane="2" via=":271900700_0_2" dir="s" state="M"/>
    <connection from="283562278#0" to="283562278#4" fromLane="3" toLane="3" via=":271900700_0_3" dir="s" state="M"/>
    <connection from="283562278#4" to="224859357#0" fromLane="0" toLane="0" via=":cluster_1642556745_2304667126_2304667130_2304667132_6_0" dir="r" state="m"/>
    <connection from="283562278#4" to="224859359#0" fromLane="0" toLane="0" via=":cluster_1642556745_2304667126_2304667130_2304667132_7_0" dir="s" state="m"/>
    <connection from="283562278#4" to="224859359#0" fromLane="1" toLane="1" via=":cluster_1642556745_2304667126_2304667130_2304667132_7_1" dir="s" state="m"/>
    <connection from="283562278#4" to="224859359#0" fromLane="2" toLane="2" via=":cluster_1642556745_2304667126_2304667130_2304667132_7_2" dir="s" state="m"/>
    <connection from="283562278#4" to="221437411#0" fromLane="3" toLane="3" via=":cluster_1642556745_2304667126_2304667130_2304667132_10_0" dir="l" state="m"/>
    <connection from="35977533" to="35977533-AddedOffRampEdge" fromLane="0" toLane="0" via=":35977533-AddedOffRampNode_0_0" dir="s" state="M"/>
    <connection from="35977533" to="35977533-AddedOffRampEdge" fromLane="0" toLane="1" via=":35977533-AddedOffRampNode_0_1" dir="s" state="M"/>
    <connection from="35977533" to="35977533-AddedOffRampEdge" fromLane="1" toLane="2" via=":35977533-AddedOffRampNode_0_2" dir="s" state="M"/>
    <connection from="35977533" to="35977533-AddedOffRampEdge" fromLane="2" toLane="3" via=":35977533-AddedOffRampNode_0_3" dir="s" state="M"/>
    <connection from="35977533-AddedOffRampEdge" to="532883868" fromLane="0" toLane="0" via=":5736089086_0_0" dir="s" state="M"/>
    <connection from="35977533-AddedOffRampEdge" to="151430192#2" fromLane="1" toLane="0" via=":5736089086_1_0" dir="L" state="M"/>
    <connection from="35977533-AddedOffRampEdge" to="151430192#2" fromLane="2" toLane="1" via=":5736089086_2_0" dir="L" state="M"/>
    <connection from="35977533-AddedOffRampEdge" to="151430192#2" fromLane="3" toLane="2" via=":5736089086_3_0" dir="L" state="M"/>
    <connection from="388718982" to="388718982.606" fromLane="0" toLane="0" via=":gneJ0_0_0" dir="s" state="M"/>
    <connection from="388718982" to="388718982.606" fromLane="1" toLane="1" via=":gneJ0_0_1" dir="s" state="M"/>
    <connection from="388718982" to="388718982.606" fromLane="2" toLane="2" via=":gneJ0_0_2" dir="s" state="M"/>
    <connection from="388718982.606" to="35977533" fromLane="0" toLane="0" via=":420520083_0_0" dir="s" state="M"/>
    <connection from="388718982.606" to="35977533" fromLane="1" toLane="1" via=":420520083_0_1" dir="s" state="M"/>
    <connection from="388718982.606" to="35977533" fromLane="2" toLane="2" via=":420520083_0_2" dir="s" state="M"/>
    <connection from="532883867" to="224859359#1-AddedOnRampEdge" fromLane="0" toLane="0" via=":1642556796_3_0" dir="s" state="M"/>
    <connection from="532883868" to="221437411#2-AddedOnRampEdge" fromLane="0" toLane="0" via=":5170734159_0_0" dir="s" state="M"/>
    <connection from="532885611" to="224859358#1-AddedOnRampEdge" fromLane="0" toLane="0" via=":5170751727_0_0" dir="s" state="M"/>
    <connection from="678126832#0" to="678126832#0-AddedOffRampEdge" fromLane="0" toLane="0" via=":678126832#0-AddedOffRampNode_0_0" dir="s" state="M"/>
    <connection from="678126832#0" to="678126832#0-AddedOffRampEdge" fromLane="0" toLane="1" via=":678126832#0-AddedOffRampNode_0_1" dir="s" state="M"/>
    <connection from="678126832#0" to="678126832#0-AddedOffRampEdge" fromLane="1" toLane="2" via=":678126832#0-AddedOffRampNode_0_2" dir="s" state="M"/>
    <connection from="678126832#0" to="678126832#0-AddedOffRampEdge" fromLane="2" toLane="3" via=":678126832#0-AddedOffRampNode_0_3" dir="s" state="M"/>
    <connection from="678126832#0-AddedOffRampEdge" to="532883867" fromLane="0" toLane="0" via=":1642556856_0_0" dir="s" state="M"/>
    <connection from="678126832#0-AddedOffRampEdge" to="678126832#1" fromLane="1" toLane="0" via=":1642556856_1_0" dir="s" state="M"/>
    <connection from="678126832#0-AddedOffRampEdge" to="678126832#1" fromLane="2" toLane="1" via=":1642556856_1_1" dir="s" state="M"/>
    <connection from="678126832#0-AddedOffRampEdge" to="678126832#1" fromLane="3" toLane="2" via=":1642556856_1_2" dir="s" state="M"/>
    <connection from="678126832#1" to="224859359#0" fromLane="0" toLane="0" via=":cluster_1642556745_2304667126_2304667130_2304667132_0_0" dir="r" state="M"/>
    <connection from="678126832#1" to="221437411#0" fromLane="0" toLane="1" via=":cluster_1642556745_2304667126_2304667130_2304667132_1_0" dir="s" state="M"/>
    <connection from="678126832#1" to="221437411#0" fromLane="1" toLane="2" via=":cluster_1642556745_2304667126_2304667130_2304667132_1_1" dir="s" state="M"/>
    <connection from="678126832#1" to="221437411#0" fromLane="1" toLane="3" via=":cluster_1642556745_2304667126_2304667130_2304667132_1_2" dir="s" state="M"/>
    <connection from="678126832#1" to="194608194#0" fromLane="1" toLane="2" via=":cluster_1642556745_2304667126_2304667130_2304667132_4_0" dir="l" state="m"/>
    <connection from="678126832#1" to="194608194#0" fromLane="2" toLane="3" via=":cluster_1642556745_2304667126_2304667130_2304667132_5_0" dir="l" state="m"/>

    <connection from=":1642556796_0" to="224859359#1-AddedOnRampEdge" fromLane="0" toLane="1" dir="s" state="M"/>
    <connection from=":1642556796_0" to="224859359#1-AddedOnRampEdge" fromLane="1" toLane="2" dir="s" state="M"/>
    <connection from=":1642556796_0" to="224859359#1-AddedOnRampEdge" fromLane="2" toLane="3" dir="s" state="M"/>
    <connection from=":1642556796_3" to="224859359#1-AddedOnRampEdge" fromLane="0" toLane="0" dir="s" state="M"/>
    <connection from=":1642556856_0" to="532883867" fromLane="0" toLane="0" dir="s" state="M"/>
    <connection from=":1642556856_1" to="678126832#1" fromLane="0" toLane="0" dir="s" state="M"/>
    <connection from=":1642556856_1" to="678126832#1" fromLane="1" toLane="1" dir="s" state="M"/>
    <connection from=":1642556856_1" to="678126832#1" fromLane="2" toLane="2" dir="s" state="M"/>
    <connection from=":221437411#2-AddedOnRampNode_0" to="221437411#2" fromLane="0" toLane="0" dir="s" state="M"/>
    <connection from=":221437411#2-AddedOnRampNode_0" to="221437411#2" fromLane="1" toLane="0" dir="s" state="M"/>
    <connection from=":221437411#2-AddedOnRampNode_0" to="221437411#2" fromLane="2" toLane="1" dir="s" state="M"/>
    <connection from=":221437411#2-AddedOnRampNode_0" to="221437411#2" fromLane="3" toLane="2" dir="s" state="M"/>
    <connection from=":221437411#2-AddedOnRampNode_0" to="221437411#2" fromLane="4" toLane="3" dir="s" state="M"/>
    <connection from=":224859358#1-AddedOnRampNode_0" to="224859358#1" fromLane="0" toLane="0" dir="s" state="M"/>
    <connection from=":224859358#1-AddedOnRampNode_0" to="224859358#1" fromLane="1" toLane="0" dir="s" state="M"/>
    <connection from=":224859358#1-AddedOnRampNode_0" to="224859358#1" fromLane="2" toLane="1" dir="s" state="M"/>
    <connection from=":224859358#1-AddedOnRampNode_0" to="224859358#1" fromLane="3" toLane="2" dir="s" state="M"/>
    <connection from=":224859358#1-AddedOnRampNode_0" to="224859358#1" fromLane="4" toLane="3" dir="s" state="M"/>
    <connection from=":224859358#1-AddedOnRampNode_0" to="224859358#1" fromLane="5" toLane="4" dir="s" state="M"/>
    <connection from=":224859358#1-AddedOnRampNode_0" to="224859358#1" fromLane="6" toLane="5" dir="s" state="M"/>
    <connection from=":224859359#1-AddedOnRampNode_0" to="224859359#1" fromLane="0" toLane="0" dir="s" state="M"/>
    <connection from=":224859359#1-AddedOnRampNode_0" to="224859359#1" fromLane="1" toLane="0" dir="s" state="M"/>
    <connection from=":224859359#1-AddedOnRampNode_0" to="224859359#1" fromLane="2" toLane="1" dir="s" state="M"/>
    <connection from=":224859359#1-AddedOnRampNode_0" to="224859359#1" fromLane="3" toLane="2" dir="s" state="M"/>
    <connection from=":271900700_0" to="283562278#4" fromLane="0" toLane="0" dir="s" state="M"/>
    <connection from=":271900700_0" to="283562278#4" fromLane="1" toLane="1" dir="s" state="M"/>
    <connection from=":271900700_0" to="283562278#4" fromLane="2" toLane="2" dir="s" state="M"/>
    <connection from=":271900700_0" to="283562278#4" fromLane="3" toLane="3" dir="s" state="M"/>
    <connection from=":271900701_0" to="194608194#3" fromLane="0" toLane="0" dir="s" state="M"/>
    <connection from=":271900701_0" to="194608194#3" fromLane="1" toLane="1" dir="s" state="M"/>
    <connection from=":271900701_0" to="194608194#3" fromLane="2" toLane="2" dir="s" state="M"/>
    <connection from=":271900701_0" to="194608194#3" fromLane="3" toLane="3" dir="s" state="M"/>
    <connection from=":35977533-AddedOffRampNode_0" to="35977533-AddedOffRampEdge" fromLane="0" toLane="0" dir="s" state="M"/>
    <connection from=":35977533-AddedOffRampNode_0" to="35977533-AddedOffRampEdge" fromLane="1" toLane="1" dir="s" state="M"/>
    <connection from=":35977533-AddedOffRampNode_0" to="35977533-AddedOffRampEdge" fromLane="2" toLane="2" dir="s" state="M"/>
    <connection from=":35977533-AddedOffRampNode_0" to="35977533-AddedOffRampEdge" fromLane="3" toLane="3" dir="s" state="M"/>
    <connection from=":420520082_0" to="95458443#0" fromLane="0" toLane="0" dir="s" state="M"/>
    <connection from=":420520082_0" to="95458443#0" fromLane="1" toLane="1" dir="s" state="M"/>
    <connection from=":420520082_0" to="95458443#0" fromLane="2" toLane="2" dir="s" state="M"/>
    <connection from=":420520083_0" to="35977533" fromLane="0" toLane="0" dir="s" state="M"/>
    <connection from=":420520083_0" to="35977533" fromLane="1" toLane="1" dir="s" state="M"/>
    <connection from=":420520083_0" to="35977533" fromLane="2" toLane="2" dir="s" state="M"/>
    <connection from=":5170734159_0" to="221437411#2-AddedOnRampEdge" fromLane="0" toLane="0" dir="s" state="M"/>
    <connection from=":5170734159_1" to="221437411#2-AddedOnRampEdge" fromLane="0" toLane="1" dir="s" state="M"/>
    <connection from=":5170734159_1" to="221437411#2-AddedOnRampEdge" fromLane="1" toLane="2" dir="s" state="M"/>
    <connection from=":5170734159_1" to="221437411#2-AddedOnRampEdge" fromLane="2" toLane="3" dir="s" state="M"/>
    <connection from=":5170734159_1" to="221437411#2-AddedOnRampEdge" fromLane="3" toLane="4" dir="s" state="M"/>
    <connection from=":5170751727_0" to="224859358#1-AddedOnRampEdge" fromLane="0" toLane="0" dir="s" state="M"/>
    <connection from=":5170751727_1" to="224859358#1-AddedOnRampEdge" fromLane="0" toLane="1" dir="s" state="M"/>
    <connection from=":5170751727_1" to="224859358#1-AddedOnRampEdge" fromLane="1" toLane="2" dir="s" state="M"/>
    <connection from=":5170751727_1" to="224859358#1-AddedOnRampEdge" fromLane="2" toLane="3" dir="s" state="M"/>
    <connection from=":5170751727_1" to="224859358#1-AddedOnRampEdge" fromLane="3" toLane="4" dir="s" state="M"/>
    <connection from=":5170751727_1" to="224859358#1-AddedOnRampEdge" fromLane="4" toLane="5" dir="s" state="M"/>
    <connection from=":5170751727_1" to="224859358#1-AddedOnRampEdge" fromLane="5" toLane="6" dir="s" state="M"/>
    <connection from=":5736089086_0" to="532883868" fromLane="0" toLane="0" dir="s" state="M"/>
    <connection from=":5736089086_1" to="151430192#2" fromLane="0" toLane="0" dir="L" state="M"/>
    <connection from=":5736089086_2" to="151430192#2" fromLane="0" toLane="1" dir="L" state="M"/>
    <connection from=":5736089086_3" to="151430192#2" fromLane="0" toLane="2" dir="L" state="M"/>
    <connection from=":678126832#0-AddedOffRampNode_0" to="678126832#0-AddedOffRampEdge" fromLane="0" toLane="0" dir="s" state="M"/>
    <connection from=":678126832#0-AddedOffRampNode_0" to="678126832#0-AddedOffRampEdge" fromLane="1" toLane="1" dir="s" state="M"/>
    <connection from=":678126832#0-AddedOffRampNode_0" to="678126832#0-AddedOffRampEdge" fromLane="2" toLane="2" dir="s" state="M"/>
    <connection from=":678126832#0-AddedOffRampNode_0" to="678126832#0-AddedOffRampEdge" fromLane="3" toLane="3" dir="s" state="M"/>
    <connection from=":cluster_1642556745_2304667126_2304667130_2304667132_0" to="224859359#0" fromLane="0" toLane="0" dir="r" state="M"/>
    <connection from=":cluster_1642556745_2304667126_2304667130_2304667132_1" to="221437411#0" fromLane="0" toLane="1" dir="s" state="M"/>
    <connection from=":cluster_1642556745_2304667126_2304667130_2304667132_1" to="221437411#0" fromLane="1" toLane="2" dir="s" state="M"/>
    <connection from=":cluster_1642556745_2304667126_2304667130_2304667132_1" to="221437411#0" fromLane="2" toLane="3" dir="s" state="M"/>
    <connection from=":cluster_1642556745_2304667126_2304667130_2304667132_4" to="194608194#0" fromLane="0" toLane="2" via=":cluster_1642556745_2304667126_2304667130_2304667132_25_0" dir="l" state="m"/>
    <connection from=":cluster_1642556745_2304667126_2304667130_2304667132_25" to="194608194#0" fromLane="0" toLane="2" dir="l" state="M"/>
    <connection from=":cluster_1642556745_2304667126_2304667130_2304667132_5" to="194608194#0" fromLane="0" toLane="3" via=":cluster_1642556745_2304667126_2304667130_2304667132_26_0" dir="l" state="m"/>
    <connection from=":cluster_1642556745_2304667126_2304667130_2304667132_26" to="194608194#0" fromLane="0" toLane="3" dir="l" state="M"/>
    <connection from=":cluster_1642556745_2304667126_2304667130_2304667132_6" to="224859357#0" fromLane="0" toLane="0" dir="r" state="M"/>
    <connection from=":cluster_1642556745_2304667126_2304667130_2304667132_7" to="224859359#0" fromLane="0" toLane="0" dir="s" state="M"/>
    <connection from=":cluster_1642556745_2304667126_2304667130_2304667132_7" to="224859359#0" fromLane="1" toLane="1" dir="s" state="M"/>
    <connection from=":cluster_1642556745_2304667126_2304667130_2304667132_7" to="224859359#0" fromLane="2" toLane="2" dir="s" state="M"/>
    <connection from=":cluster_1642556745_2304667126_2304667130_2304667132_10" to="221437411#0" fromLane="0" toLane="3" dir="l" state="M"/>
    <connection from=":cluster_1642556745_2304667126_2304667130_2304667132_11" to="194608194#0" fromLane="0" toLane="0" dir="R" state="M"/>
    <connection from=":cluster_1642556745_2304667126_2304667130_2304667132_12" to="194608194#0" fromLane="0" toLane="1" dir="R" state="M"/>
    <connection from=":cluster_1642556745_2304667126_2304667130_2304667132_13" to="194608194#0" fromLane="0" toLane="2" dir="R" state="M"/>
    <connection from=":cluster_1642556745_2304667126_2304667130_2304667132_14" to="224859357#0" fromLane="0" toLane="0" dir="s" state="M"/>
    <connection from=":cluster_1642556745_2304667126_2304667130_2304667132_14" to="224859357#0" fromLane="1" toLane="1" dir="s" state="M"/>
    <connection from=":cluster_1642556745_2304667126_2304667130_2304667132_14" to="224859357#0" fromLane="2" toLane="2" dir="s" state="M"/>
    <connection from=":cluster_1642556745_2304667126_2304667130_2304667132_17" to="224859359#0" fromLane="0" toLane="1" via=":cluster_1642556745_2304667126_2304667130_2304667132_27_0" dir="l" state="m"/>
    <connection from=":cluster_1642556745_2304667126_2304667130_2304667132_27" to="224859359#0" fromLane="0" toLane="1" dir="l" state="M"/>
    <connection from=":cluster_1642556745_2304667126_2304667130_2304667132_18" to="224859359#0" fromLane="0" toLane="2" via=":cluster_1642556745_2304667126_2304667130_2304667132_28_0" dir="l" state="m"/>
    <connection from=":cluster_1642556745_2304667126_2304667130_2304667132_28" to="224859359#0" fromLane="0" toLane="2" dir="l" state="M"/>
    <connection from=":cluster_1642556745_2304667126_2304667130_2304667132_19" to="221437411#0" fromLane="0" toLane="0" dir="r" state="M"/>
    <connection from=":cluster_1642556745_2304667126_2304667130_2304667132_20" to="194608194#0" fromLane="0" toLane="0" dir="s" state="M"/>
    <connection from=":cluster_1642556745_2304667126_2304667130_2304667132_20" to="194608194#0" fromLane="1" toLane="1" dir="s" state="M"/>
    <connection from=":cluster_1642556745_2304667126_2304667130_2304667132_20" to="194608194#0" fromLane="2" toLane="2" dir="s" state="M"/>
    <connection from=":cluster_1642556745_2304667126_2304667130_2304667132_20" to="194608194#0" fromLane="3" toLane="3" dir="s" state="M"/>
    <connection from=":cluster_1642556745_2304667126_2304667130_2304667132_24" to="224859357#0" fromLane="0" toLane="2" dir="l" state="M"/>
    <connection from=":gneJ0_0" to="388718982.606" fromLane="0" toLane="0" dir="s" state="M"/>
    <connection from=":gneJ0_0" to="388718982.606" fromLane="1" toLane="1" dir="s" state="M"/>
    <connection from=":gneJ0_0" to="388718982.606" fromLane="2" toLane="2" dir="s" state="M"/>

</net>)";

}
