#include <iostream>
#include <random>
using namespace std;

int main(){
  int a = 0, b = 0, n= 0, sum=0, elnum=0;
  std::cout << "Enter a, A[a][b]: "; std::cin >> a;
  std::cout << "Enter b, A[a][b]: "; std::cin >> b;
  std::cout << "Enter number N: "; std::cin >> n;
  int** array{new int*[a]};
  for (int i = 0; i < a; i++) {
    array[i] = new int[b];
    for (int j = 0; j < b; j++) {
      array[i][j] = rand() % 101 - 50;
      std::cout << array[i][j] << " ";
    }
    std::cout << '\n';
  }
  std::cout << '\n';
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < b; j++) {
      if ((i+j)%2==1 and array[i][j]>=n){
        sum+=1;
        elnum+=1;
        std::cout <<"Element "<< elnum << ": " << array[i][j] << " on position - A["<<i<<"]"<<"["<<j<<"]";
      }
    }
    std::cout << '\n';
  }

  std::cout << "Sum of elements: " << sum << '\n';
  return 0;
  for (int i{}; i < a; i++)
    {
        delete[] array[i];
    }
    delete[] array;
}
