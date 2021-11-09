#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string user_name{};
    std::cin >> user_name;
    unsigned size = user_name.size();
    int del{};
    std::sort(user_name.begin(),user_name.end());
   	for (int i = 0; i < size; ++i) {
        if (i != size-1 && user_name.at(i) == user_name.at(i + 1))  
        //Make sure that (i != size - 1) so that you don't go out of bounds also put it first before (user_name.at(i) == user_name.at(i + 1)) in if condition so the compiler
        //checks it first and if it's FALSE then the compiler wouldn't continue since we are using AND logical operator and all AND conditions have to be TRUE and if any one 
	//of them is FALSE then the compiler knows that whole statement is FALSE and when it doesn't continue to the next statement it will not get executed and we will not 
	//go out of bounds.
            del++;
    }
    unsigned result{size - del};
    if (result % 2 == 1)
        std::cout << "IGNORE HIM!" << std::endl;
    else
        std::cout << "CHAT WITH HER!" << std::endl;
    return 0;
}
