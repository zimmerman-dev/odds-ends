#include <iostream>

void printSize(int x) {
  std::cout << sizeof(x) << '\n';
}

int main() {

  int num{32};
  printSize(num);

  std::cout << sizeof(char) << '\n';

  return 0;
}