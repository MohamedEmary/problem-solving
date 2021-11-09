#include <iostream>
int main() {
    std::string word;
    std::cin >> word;
    if (word.at(0) > 90)
        word.at(0) -= 32;
    std::cout << word << std::endl;
    return 0;
}
