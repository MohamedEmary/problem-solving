#include <iostream>

int main(){
    int num{};
    std::cin >> num;
    std::string words[num];
    for(int i{0}; i < num; i++){
        std::cin >> words[i];
    }
    for(int i{0}; i < num; i++) {
        if (words[i].length() > 10) {
            std::cout << words[i].at(0) << words[i].length() - 2 << words[i].at(words[i].length() - 1) << std::endl;
        } else
            std::cout << words[i] << std::endl;
    }
    return 0;
}
