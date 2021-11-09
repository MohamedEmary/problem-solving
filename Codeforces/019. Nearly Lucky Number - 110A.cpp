//Using integers as in the problem description
#include <iostream>
int main() {
    long long num;
    std::cin >> num;
    long long remainder{}, lucky_digits{};
    for (int i = 0; i < num; ) {
        remainder = num % 10;
        if (remainder == 4 || remainder == 7)
            lucky_digits++;
        num = (num - remainder) / 10;
    }
    if (lucky_digits == 4 || lucky_digits == 7)
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;
    return 0;
}



//Using strings
#include <iostream>
int main() {
    std::string number{};
    std::cin >> number;
    int lucky_digits{};
    for (auto val: number) {
        if (val == '4' || val == '7')
            lucky_digits++;
    }
    if (lucky_digits == 4 || lucky_digits == 7)
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;
    return 0;
}
