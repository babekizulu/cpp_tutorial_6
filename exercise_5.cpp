#include <iostream>
#include <cmath>
#include <vector>
#include <iterator>
#include <algorithm>

/*
1. Prompt the user for 3 strings, str1, str2 and str3
2. Store the values str1, str2 and str3
3. Define a string vector called 'names'
4. Store values str1, str2 and str3 in numbers vector
5. Loop over names vector
6. Compare last and first name
    - If first is greater than last, Pop last, insert it to first position
    - If first less than last, check:
        - If last is less than middle:
            - Pop out last, insert it into middle
*/

int main()
{
    std::string str1;
    std::string str2;
    std::string str3;
    std::cout << "Enter a name: ";
    std::cin >> str1;
    std::cout << "Enter a name: ";
    std::cin >> str2;
    std::cout << "Enter a name: ";
    std::cin >> str3;
    std::vector<std::string> names = {str1, str2, str3};
    for (int i = 0; i < names.size(); i++)
    {
        if (names.front() > names.back())
        {
            std::string last = names.back();
            names.pop_back();
            names.insert(names.begin(), last);
        }
        else if (names.front() < names.back())
        {
            if (names.back() < names[names.size() - 2])
            {
                std::string last = names.back();
                names.pop_back();
                names.insert(names.begin() + 1, last);
            }
            else
            {
                break;
            }
        }
    }

    std::cout << names[0] << ", " << names[1] << ", " << names[2];
}