#include <iostream>
#include <cmath>

int main()
{
    int n;
    std::cout << "Enter a number:\n";
    std::cin >> n;
    if (n % 2 == 0)
    {
        std::cout << n << " " << "is an even number";
    }
    else
    {
        std::cout << n << " " << "is an odd number";
    }
}