#include <iostream>

void print(int x) {
  std::cout << x << '\n';
}

int main() {
  double num{5.5};
  print(static_cast<int>(num));

  return 0;
}
