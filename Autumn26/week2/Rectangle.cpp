#include <iostream>
int main(){
    std::cout << "Enter the width and height of the rectangle: " << std::endl;
    double width, height;
    std::cin >> width >> height;
    std::cout << "Area of rectangle: " << width * height << std::endl;
    std::cout << "Perimeter of rectangle: " << 2 * (width + height) << std::endl;
}