#include "TSP.hpp"

int add(int i, int j ){
    return i + j;
}
/*double distance(double x1 ,double y1 ,double x2 ,double y2){
return sqrt(    ((x1-x2)*(x1-x2)) + ((y1-y2)*(y1-y2))   );
}*/


void update1(std::vector<double> &x)
{
    int i;
    for(i = 0; i < 3; i ++)
    {
        x[i] = 1.0;
    }
}


void update2(py::array_t<double> x)
{
    auto x_buf = x.request();
    double *x_ptr = (double *)x_buf.ptr;

    int i;
    for(i = 0; i < 3; i ++)
    {
        x_ptr[i] = 1.0;
    }
}


double  update3(py::array_t<double> x , int len)
{
    auto x_buf = x.request();//requestメソッドで以下の構造体を得られる
 /*
  struct buffer_info {
   void* ptr;
   ssize_t itemsize;
   std::string format;
   ssize_t ndim;
   std::vector<ssize_t> shape;
   std::vector<ssize_t> strides;
  };
 */
    double *x_ptr = (double *)x_buf.ptr;
    
    double list[len];
    int i;
    for(i = 0; i < len; i ++)
    {
        list[i] = x_ptr[i];
    }

    for(i = 0; i < len; i ++)
    {
        x_ptr[i] = list[len-i-1];
    } 
return sizeof(x_ptr);
}

std::vector<int> append(std::vector<int> &v,int size){
  for(int i=0;i<size;i++){
      v.push_back(i);
  }
  return v;
}

std::vector<int> return_0(std::tuple<double,double> t){
    std::vector<int> u;
    u.push_back(0);
    //printf("%d\n",u[0]);
    return u;
}

std::vector<int> return_1(std::vector<std::tuple<double,double>> &multi_l){
    std::vector<int> u;
    u.push_back(1);
    //printf("%d\n",u[0]);
    return u;
}

double distance(std::tuple<double,double> c1,std::tuple<double,double> c2){
    return sqrt(pow(std::get<0>(c1)-std::get<0>(c2),2)+pow(std::get<1>(c1)-std::get<1>(c2),2));
}

int sum(int* arr, int arr_size){
    int sum = 0;
    for (int i = 0; i < arr_size; i++) {
        sum += arr[i];
    }
    return sum;
}



PYBIND11_MODULE(cpplist_example, m){
    m.doc() = "pybind11 example plugin";
    m.def("add", &add, "A function which adds tow numbers");
    m.def("update1", &update1, "update1 function");
    m.def("update2", &update2, "update2 function");
    m.def("update3", &update3, "update3 function");
    m.def("append", &append, "append function");
    m.def("return_0", &return_0, "return [0]");
    m.def("return_1", &return_1, "return [1]");
    m.def("distance", &distance, "return distance between 2 points");
    m.def("sum", &sum, "sum");
}