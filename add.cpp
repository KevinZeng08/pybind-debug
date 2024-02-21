#include "pybind11/pybind11.h"

float cpp_add(float i, float j) {
    int result = i + j;
    printf("%d\n", result);
    return result;
}

PYBIND11_MODULE(my_add, m) {
    m.doc()= "This is documentation";
    m.def("cpp_add", &cpp_add, "A function which adds two numbers");
}



