#include <iostream>

#include <iomanip>

void printSquare1(int outer_width, int inner_width);

void printSquare2(int width);


int main() {
    printSquare1(4, 2);
}

void printSquare1(int outer_width, int inner_width) {
    int x = outer_width - inner_width;
    if (x < 0) {
        std::cout << "Invalid inner and outer width (outer<=inner)";
        return;
    }
    for (int i = 0; i < (x / 2); ++i) {
        std::cout << std::setfill('*') << std::setw(outer_width)<<""<<std::endl;
    }
    for (int i = 0; i < (outer_width - x); ++i) {
        std::cout << std::setfill('*') << std::setw(x / 2)<<"";
        std::cout << std::setfill(' ') << std::setw(outer_width - x)<<"";
        std::cout << std::setfill('*') << std::setw(x / 2)<<""<<std::endl;
    }
    for (int i = 0; i < (x / 2); ++i) {
        std::cout << std::setfill('*') << std::setw(outer_width)<<""<<std::endl;
    }
}

void printSquare2(int width) {}
