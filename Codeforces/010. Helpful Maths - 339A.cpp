#include <string>
#include <iostream>
int main() {
    std::string addition, order;
    std::cin >> addition;
    for (int i{0};i<addition.length();i++) {
        if (addition.at(i) == '1') {
            order.push_back(addition.at(i));
        }
    }
    for (int i{0};i<addition.length();i++) {
        if (addition.at(i) == '2') {
            order.push_back(addition[i]);
        }
    }
    for (int i{0};i<addition.length();i++) {
        if (addition.at(i) == '3') {
            order.push_back(addition[i]);
        }
    }
    for (int i{0};i<order.length();i++) {
        if (i==order.length()-1)
            std::cout<<order.at(i);
        else
            std::cout<<order.at(i)<<"+";
    }
    return 0;
}
