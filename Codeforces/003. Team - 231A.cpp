#include <iostream>

int main() {
    int problems{};
    std::cin >> problems;
    bool a[problems], b[problems], c[problems];
    for (int i = 0; i < problems; ++i) {
        std::cin >> a[i] >> b[i] >> c[i];
    }
    int to_be_solved{};
    for (int i = 0; i < problems; ++i) {
        if (a[i] && b[i] || c[i] && a[i] || b[i] && c[i])
            to_be_solved++;
    }
    std::cout << to_be_solved << std::endl;
    return 0;
}
