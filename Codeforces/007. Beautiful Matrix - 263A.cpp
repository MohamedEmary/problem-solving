#include <iostream>

int main() {
    const int size{5};
    int arr[size][size];
    int r{}, c{};
    for (int row = 0; row < size; ++row) {
        for (int column = 0; column < size; ++column) {
            std::cin >> arr[row][column];
            if (arr[row][column] == 1) {
                r = row;
                c = column;
            }
        }
    }
    const int middle{2};    //initialize it to 2 not 3 because it's an index
    int least_number_of_moves{(abs(middle-r)+abs(middle-c))};
    std::cout<<least_number_of_moves<<std::endl;
    return 0;
}
