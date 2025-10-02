#include <iostream>
#include <string_view>

std::string_view getQuantityPhrase(int apples) {
  if (apples < 0)
    return "negative";
  if (apples == 0)
    return "no";
  if (apples == 1)
    return "a single";
  if (apples == 2)
    return "a couple of";
  if (apples == 3)
    return "a few";
  return "many";
}

std::string_view getApplesPluralized(int apples) {
 return (apples == 1) ? "apple" : "apples";
}

int main() {
  constexpr int maryApples{3};
  std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

  std::cout << "How many apples do you have? ";
  int numApples{};
  std::cin >> numApples;

  std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";
  return 0;
}
