#include <iostream>

double print(const double& x) {
    std::cout << typeid(x).name() << '\n';
    return x;
}

int main() {
    int num{5};

    std::cout << print(num) << '\n' << typeid(num).name();
}


