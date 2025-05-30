#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int x = 0;
  double y = 1.0;
  std::cout << "Enter x: "; std::cin >> x;
  if (x<=8) {
    y = acos(sqrt(exp(-abs(x)))) + 3;
  } else if (8<x<9){
    y = cos(pow(x,5)/(7+pow(x,2)));
  } else if (x>=9) {
    y = pow(x, 8) + pow(x, x-10);
  }
  std::cout << "y(" << x << ") = " << y << '\n';
  return 0;
}
