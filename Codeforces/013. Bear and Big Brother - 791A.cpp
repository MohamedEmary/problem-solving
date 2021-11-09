#include <iostream>
int main() {
    int a{}, b{};
    std::cin >> a >> b;
    int A_after_years{a}, B_after_years{b};
    bool done{true};
    int number_of_years{1};
    while (done) {
        A_after_years *= 3;
        B_after_years *= 2;
        if (A_after_years > B_after_years)
            done = false;
        else
            number_of_years++;
    }
    std::cout << number_of_years << std::endl;
    return 0;
}
