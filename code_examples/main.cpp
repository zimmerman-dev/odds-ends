#include <iostream>
#include <string>
#include <string_view>

void printString(std::string test) {
  std::cout << test << '\n';
}

int main() {

  std::string_view arg1{"Testing C-Style Literal"};
  std::string arg2{arg1};

  std::cout << typeid(arg1).name() << '\n';
  std::cout << typeid(arg2).name() << '\n';
  std::cout << typeid(static_cast<std::string>(arg1)).name();

  printString(arg2);
  printString(static_cast<std::string>(arg1));
  return 0;
}
