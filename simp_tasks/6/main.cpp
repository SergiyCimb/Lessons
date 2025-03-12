#include <iostream>
#include <iomanip>

int main() 
{
    float P, R;
    int T;

    std::cout << "Enter the loan amount P: ";
    std::cin >> P;
    std::cout << "Enter the loan period T (years): ";
    std::cin >> T;
    std::cout << "Enter interest rate R: ";
    std::cin >> R;

    float I = (P * T * R) / 100;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "percentages (float): " << I << std::endl;
    std::cout << "percentages (int): " << static_cast<int>(I) << std::endl;

    return 0;
}