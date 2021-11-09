//Better take a look at those two links first to understand how to solve the problem
//https://www.programiz.com/cpp-programming/char-type
//https://en.cppreference.com/w/cpp/language/ascii

//C++ have 128 ASCII characters and the upper case letter 'A' come in the order 65 and the lower case letter 'a' comes 
//in the order 97 so there is 32 characters between them that is why we used the number 32 in our if stataments.

#include <iostream>
int main() {
    std::string str1, str2;
    std::cin >> str1 >> str2;
    int result{};
    for (int i{0}; i < str1.length(); i++) {
        if (str1.at(i) > 90)
            str1.at(i) -= 32;
        if (str2.at(i) > 90)
            str2.at(i) -= 32;
    }

    if (str1 > str2)
        std::cout << 1 << std::endl;
    else if (str1 < str2)
        std::cout << -1 << std::endl;
    else
        std::cout << 0 << std::endl;
    return 0;
}
