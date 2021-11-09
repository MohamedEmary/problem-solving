#include <iostream>

int main() {
    int one_banana_cost{}, dollar{}, banana{}, total_cost{};
    std::cin >> one_banana_cost >> dollar >> banana;
    for (int i = 1; i <= banana; ++i) {
        total_cost += (one_banana_cost * i);
    }
    if (total_cost > dollar) {
        int borrow{total_cost - dollar};
        std::cout << borrow << std::endl;
    } else
        std::cout << 0 << std::endl;
    return 0;
}
