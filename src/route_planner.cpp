#include "route_planner.h"
#include <algorithm>

RoutePlanner::RoutePlanner(RouteModel &model, float start_x, float start_y, float end_x, float end_y): m_Model(model) {
	start_x *= 0.01; //  Since node coordinates are scaled to values between 0 an 1
    start_y *= 0.01;
    end_x   *= 0.01;
    end_y   *= 0.01;
  
	// find the closest nodes to `(start_x, start_y)` and `(end_x, end_y)`. Store pointers to these nodes in the `start_node` and `end_node` class variables.  
    start_node = &model.FindClosestNode(start_x, start_y); 
    end_node = &model.FindClosestNode(end_x, end_y);
}