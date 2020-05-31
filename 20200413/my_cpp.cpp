#include <boost/python.hpp>
extern "C" {
  #include "my_c.h"
}
using namespace boost::python;

BOOST_PYTHON_MODULE(my_wrapper){
    def("hello_world", hello_world);
}