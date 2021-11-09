#include <string>
#include <iostream>

int main() {
    int number_of_stones{};
    std::cin >> number_of_stones;
    std::string colors{};
    std::cin >> colors;
    int to_be_taken{};
    for (int i = 0; i < number_of_stones; ++i) {
        if ((i != number_of_stones - 1) && (colors.at(i) == colors.at(i + 1)))
            to_be_taken++;
    }
    std::cout << to_be_taken << std::endl;
    return 0;
}
