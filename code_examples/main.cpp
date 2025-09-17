#include <iostream>

double getTowerHeight() {
  std::cout << "Enter the height of the tower in meters: ";
  double height{};
  std::cin >> height;
  return height;
}

double getBallHeight(double towerHeight, float seconds) {
  double groundDistance{towerHeight - (4.9 * (seconds * seconds))};

  if (groundDistance < 0.0)
    return 0.0;
  return groundDistance;
}

void printHeight(double groundDistance, float seconds) {
  if (groundDistance > 0) {
    std::cout << "At " << seconds << " seconds, the ball is at height: " << groundDistance << " meters.\n";
  } else {
    std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
  }
}

void getAndPrintGroundDistance(double towerHeight, float seconds) {
  double groundDistance{getBallHeight(towerHeight, seconds)};
  printHeight(groundDistance, seconds);
}

int main() {

  double towerHeight{getTowerHeight()};

  getAndPrintGroundDistance(towerHeight, 0.0f);
  getAndPrintGroundDistance(towerHeight, 1.0f);
  getAndPrintGroundDistance(towerHeight, 2.0f);
  getAndPrintGroundDistance(towerHeight, 3.0f);
  getAndPrintGroundDistance(towerHeight, 4.0f);
  getAndPrintGroundDistance(towerHeight, 5.0f);

  return 0;
}
