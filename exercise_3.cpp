#include <iostream>
#include <cmath>
#include <vector>
#include <iterator>
#include <algorithm>

/*
1. Prompt the user for 3 values, x, y and z
2. Store the values x, y and z
3. Define a numbers vector
4. Store values x, y and z in numbers vector
5. Loop over numbers vector
6. Compare last and first number
    - If first is greater than last, Pop last, insert it to first position
    - If first less than last, check:
        - If last is less than middle:
            - Pop out last, insert it into middle
*/

int main()
{
    double x;
    double y;
    double z;
    std::cout << "x: ";
    std::cin >> x;
    std::cout << "y: ";
    std::cin >> y;
    std::cout << "z: ";
    std::cin >> z;
    std::vector<double> nums = {x, y, z};
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums.front() > nums.back())
        {
            double last = nums.back();
            nums.pop_back();
            nums.insert(nums.begin(), last); // returns 132
        }
        else if (nums.front() < nums.back())
        {
            if (nums.back() < nums[nums.size() - 2])
            {
                double last = nums.back();
                nums.pop_back();
                nums.insert(nums.begin() + 1, last);
            }
            else
            {
                break;
            }
        }
    }

    std::cout << nums[0] << ", " << nums[1] << ", " << nums[2];
}