#include <iostream>

int main() {

    char x{'\n'};

    std::cout << "Line 1" << x;
    std::cout << "Line 2" << x;
    std::cout << "line 3" << x;
    std::cout << "Type casting 'x' to int: " << static_cast<int>(x) << '\n';

    return 0;
}
