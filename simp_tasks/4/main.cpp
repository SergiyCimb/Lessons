#include <iostream>

int main()
{
    int x, y, z;
    std::cout << "Enter the X number: ";
    std::cin >> x;
    std::cout << "Enter the Y number: ";
    std::cin >> y;
    std::cout << "Enter the z number: ";
    std::cin >> z;
    std::cout << "Volume:" << x * y * z << std::endl;
    return 0;
}