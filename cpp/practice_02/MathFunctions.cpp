#include "MathFunctions.h"
#include <math.h>

int MathFunctions::compute_factorial(int n) {
  if (n == 0) {
    return 1;
  } else if (n < 0) {
    throw std::invalid_argument(
        "Factorial is not defined for negative numbers.");
  } else {
    return n * compute_factorial(n - 1);
  }
}

double MathFunctions::compute_dot_product(std::array<double, 3> vector_u,
                                          std::array<double, 3> vector_v) {
  return vector_u[0] * vector_v[0] + vector_u[1] * vector_v[1] +
         vector_u[2] * vector_v[2];
}

std::array<double, 3>
MathFunctions::compute_cross_product(std::array<double, 3> vector_u,
                                     std::array<double, 3> vector_v) {
  std::array<double, 3> cross_product;
  cross_product[0] = vector_u[1] * vector_v[2] - vector_u[2] * vector_v[1];
  cross_product[1] = vector_u[2] * vector_v[0] - vector_u[0] * vector_v[2];
  cross_product[2] = vector_u[0] * vector_v[1] - vector_u[1] * vector_v[0];
  return cross_product;
}
