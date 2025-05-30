#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int x = 0;
  std::cout << "Enter x: "; std::cin >> x;

  double y;
  bool Area;
  double s5x = pow(x, 0.2);
  double arcos = acos(pow(s5x/s5x+1, 9));
  double unlog = pow(4, tan(3*x)) + sqrt(abs(3*x-1)) + pow(abs(x),sin(2*x));
  double log5 = log(5)/log(unlog);
  y = arcos + log5;

  std::cout << "A(x,y), where x = "<< x << " and y = " << y << " locates " << (((pow(x,2) + pow(y,2) == 25) and y < 0) ? "in" : "out of") <<" D-area" << '\n';
  return 0;
}
