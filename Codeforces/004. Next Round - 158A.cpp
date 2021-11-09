#include <iostream>

int main() {
    int n{}, k{};
    std::cin >> n >> k;
    int participants[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> participants[i];
    }
    int qualified{};
    for (int i = 0; i < n; ++i) {
        if (participants[i] >= participants[k - 1] && participants[i] > 0)
            //We used k-1 instead of k because the user uses normal numbers while we use indexes
            qualified++;
    }
    std::cout<<qualified<<std::endl;
    return 0;
}
