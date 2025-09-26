#include <iostream>
#include <cmath>

int main()
{
    double miles = 0;
    std::cout << "Enter number of miles:\n";
    std::cin >> miles;
    double kilometers;
    kilometers = miles * 1.60934;
    std::cout << "Kilometers: " << kilometers << " km";
}