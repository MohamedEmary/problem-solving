#include <iostream>

int main() {
    int num_of_statements{}, x{};
    std::string x_val;
    std::cin >> num_of_statements;
    std::cin.ignore();
    for (int i = 0; i < num_of_statements; ++i) {
        getline(std::cin, x_val);
        if (x_val == "X++" || x_val == "++X")
            x++;
        else
            x--;
    }
    std::cout << x << std::endl;
    return 0;
}
