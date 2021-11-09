#include <iostream>

int main() {
    int upper_count{}, lower_count{};
    std::string word{};
    std::cin >> word;
    for (auto val: word) {
        if (val < 97)
            upper_count++;
        else
            lower_count++;
    }
    if (upper_count > lower_count) {
        for (int i{0}; i < word.size(); i++) {
            if (word.at(i) >= 97)
                word.at(i) -= 32;
        }
    } else {
        for (int i{0}; i < word.size(); i++) {
            if (word.at(i) < 97)
                word.at(i) += 32;
        }
    }
    std::cout << word << std::endl;
    return 0;
}
