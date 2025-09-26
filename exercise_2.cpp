#include <iostream>
#include <cmath>

int main()
{
    double x;
    double y;

    std::cout << "X:";
    std::cin >> x;
    std::cout << "Y:";
    std::cin >> y;

    if (x < y)
    {
        std::cout << x << " " << "<" << " " << y << "\n";
    }
    else if (x > y)
    {
        std::cout << x << " " << ">" << " " << y << "\n";
    }
    else if (x == y)
    {
        std::cout << x << " " << "==" << " " << y << "\n";
    }
    std::cout << "x + y == " << x + y << "\n"
              << "x - y == " << x - y << "\n"
              << "x * y == " << x * y << "\n"
              << "x / y == " << x / y << "\n";
}