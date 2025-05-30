#include <cmath>
#include <iostream>
using namespace std;
class Equation {
  private:
     double y;
     int x;
     bool Area;
  public:
    void stand() {
      double s5x = pow(x, 0.2);
      double arcos = acos(pow(s5x/s5x+1, 9));
      double unlog = pow(4, tan(3*x)) + sqrt(abs(3*x-1)) + pow(abs(x),sin(2*x));
      double log5 = log(5)/log(unlog);
      y = arcos + log5;
    }
    void IsArea() {
      stand();
      Area = ((pow(x,2) + pow(y,2) == 25) and y < 0);
    }
    Equation(int xeq) {
      x = xeq;
      IsArea();
    }
    bool InArea() {
      return Area;
    }
    double getY() {
      return y;
    }
    int getX() {
      return x;
    }
};

int main() {
  int x = 0;
  std::cout << "Enter x: "; std::cin >> x;
  Equation nvm(x);
  std::cout << "A(x,y), where x="<< nvm.getX() << " and y=" << nvm.getY() << " locates " << (nvm.InArea() ? "in" : "out of") <<" D-area" << '\n';
  return 0;
}
