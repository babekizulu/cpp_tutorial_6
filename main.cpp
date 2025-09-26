#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <cctype>

std::string loweredText(std::string response)
{
    std::transform(response.begin(), response.end(), response.begin(), [](unsigned char c)
                   { return std::tolower(c); });
    return response;
}

std::string err(std::string err_message)
{
    std::cout << "Error: " << err_message;
}

int main()
{
    std::string friend_1;
    std::string friend_2;
    int age = 0;
    std::vector<int> stAges;
    stAges = {1, 21, 31, 41, 51, 61, 71, 81, 91, 101};
    std::string response;
    std::cout << "Enter the name of your first friend:\n";
    std::cin >> friend_1;
    std::cout << "Enter the name of your other friend:\n";
    std::cin >> friend_2;
    std::cout << "Dear " << friend_1 << ",\n"
              << "Looking forward to seeing you this weekend at the movie theatre to watch Fantastic Four. By the way, I was wondering if you've heard from " << friend_2 << " lately?\n";
    while (std::cin >> response)
    {
        if (loweredText(response) == "yes")
        {
            std::cout << "Great! Could you let her know that we have book club this weekend?\n";
            break;
        }
        else if (loweredText(response) == "no")
        {
            std::cout << "Oh, no worries. I'll reach out to her later this week.\n";
            break;
        }
    }
    std::cout << "I heard it's your birthday this weekend. How old are you turning?\n";
    while (std::cin >> age)
    {
        int search_age = age;
        auto iteration = std::find(stAges.begin(), stAges.end(), search_age);
        if (age == 0 || age >= 110)
        {
            err("You're kidding!?");
            break;
        }
        else if (age > 0 && age < 110 && age != 17 && iteration != stAges.end())
        {
            std::cout << "Great, enjoy your " << age << "st birthday\n";

            break;
        }
        else if (age > 0 && age < 110 && age != 17 && iteration == stAges.end())
        {
            std::cout << "Brilliant, enjoy your " << age << "th birdthday\n";
            break;
        }
        else if (age == 17)
        {
            std::cout << "Awesome, you'll be able to vote next year!\n";
            break;
        }
    }
    std::cout << "Cheers! See you soon mate!\n";
}