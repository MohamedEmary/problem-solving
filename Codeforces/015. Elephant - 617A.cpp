#include <iostream>
int main() {
    int coordinate{};
    std::cin >> coordinate;
    int remainder{coordinate % 5};
    int steps{coordinate / 5};      //In integer division fractions are ignored
    if (remainder == 0) {
        std::cout << steps << std::endl;
    } else {
        steps += 1;
        std::cout << steps << std::endl;
    }
    return 0;
}
