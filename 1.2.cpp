#include <iostream>
#include <string>
int main() {
  int a = 0, b = 0;
  std::cout << "Enter a: "; std::cin >> a;
  b = a%10000/1000 + a%100/10;
  std::cout << b << '\n';
  return 0;
}
