#include <iostream>
#include <iomanip>

int main()
{
    double r, p = 3.14;
    std::cout << "Enter the radius number: ";
    std::cin >> r;
    std::cout << std::fixed << std::setprecision(2) << "area:" << (p*(r*r)) << std::endl;
    std::cout << std::fixed << std::setprecision(2) << "length:" << 2*p*r << std::endl;
    return 0;
}