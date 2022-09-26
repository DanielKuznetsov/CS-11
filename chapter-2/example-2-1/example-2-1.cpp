/* **************************************************************
Given the length and width of a rectangle, this C++ program
computes and outputs the perimeter and area of the rectangle.
*/ 
// **************************************************************

#include <iostream>

// using namespace std;

int main() {
    double length;
    double width;
    double area;
    double perimeter;

    std::cout << "Program to compute and output the perimeter and "
        << "area of a rectangle." << std::endl;

    length = 6.0;
    width = 4.0;
    perimeter = 2 * (length + width);
    area = length * width;

    std::cout << "Length = " << length << std::endl;
    std::cout << "Width = " << width << std::endl;
    std::cout << "Perimeter = " << perimeter << std::endl;
    std::cout << "Area = " << area << std::endl;

    return 0;
}