//#define BOOST_PYTHON_STATIC_LIB
#include <boost/python.hpp>
#include <stdio.h>
#include <math.h>

double distance(double c1_x,double c1_y,double c2_x,double c2_y){
    return sqrt(pow(c1_x-c2_x,2)+pow(c1_y-c2_y,2));
}

BOOST_PYTHON_MODULE(cpp_distance)
{
    using namespace boost::python;
    def("distance", &distance);
}