#include <iostream>
int main() {
    int num{}, times{};
    std::cin >> num >> times;
    for (int i = 0; i < times; ++i) {
        if (num % 10 == 0)
            num /= 10;
        else
            num -= 1;
    }
    std::cout << num << std::endl;
    return 0;
}
