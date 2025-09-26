#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::string num_str;
    std::vector<char> p1;
    std::vector<char> p2;
    std::vector<char> num_str_vec;
    std::vector<std::string> b1 = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    std::vector<std::string> sb = {"zero", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    std::vector<std::string> b2 = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    std::string str_p1;
    std::string str_p2;
    std::string nb1;
    std::string nb2;
    int sn;
    bool nb = false;
    bool h_case = false;
    std::cout << "Enter a number string:\n";
    std::getline(std::cin, num_str);
    if (num_str == "one hundred" || num_str == "one-hundred")
    {
        std::cout << 100;
        h_case = true;
    }
    // for (int i = 0; i < num_str.length(); i++)
    // {
    //     num_str_vec.push_back(num_str[i]);
    // }
    for (int i = 0; i < num_str.length(); i++)
    {
        if (num_str[i] == ' ' || num_str[i] == '-')
        {
            auto start = num_str.begin();
            auto end = num_str.begin() + i;
            p1.assign(start, end);
            nb = true;
        }
        if (num_str[i - 1] == ' ' || num_str[i - 1] == '-')
        {
            auto start = num_str.begin() + i;
            auto end = num_str.end();
            p2.assign(start, end);
            nb = true;
        }
    }
    // for (int i = 0; i < num_str_vec.size(); i++)
    // {
    //     if (num_str_vec[i] == ' ' || num_str_vec[i] == '-')
    //     {
    //         auto start = num_str.begin();
    //         auto end = num_str.begin() + i;
    //         p1.assign(start, end);
    //         nb = true;
    //     }
    //     if (num_str[i - 1] == ' ' || num_str[i - 1] == '-')
    //     {
    //         auto start = num_str.begin() + i;
    //         auto end = num_str.end();
    //         p2.assign(start, end);
    //         nb = true;
    //     }
    // }

    if (nb && !h_case)
    {
        for (int i = 0; i < p1.size(); i++)
        {
            str_p1 += p1[i];
        }
        std::cout << str_p1 << "\n";
        std::cout << str_p2 << "\n";
        for (int i = 0; i < p2.size(); i++)
        {
            str_p2 += p2[i];
        }
        if (b1[0] == str_p1)
        {
            nb1 = "2";
        }
        if (b1[1] == str_p1)
        {
            nb1 = "3";
        }
        if (b1[2] == str_p1)
        {
            nb1 = "4";
        }
        if (b1[3] == str_p1)
        {
            nb1 = "5";
        }
        if (b1[4] == str_p1)
        {
            nb1 = "6";
        }
        if (b1[5] == str_p1)
        {
            nb1 = "7";
        }
        if (b1[6] == str_p1)
        {
            nb1 = "8";
        }
        if (b1[7] == str_p1)
        {
            nb1 = "9";
        }

        if (b2[0] == str_p2)
        {
            nb2 = "1";
        }
        if (b2[1] == str_p2)
        {
            nb2 = "2";
        }
        if (b2[2] == str_p2)
        {
            nb2 = "3";
        }
        if (b2[3] == str_p2)
        {
            nb2 = "4";
        }
        if (b2[4] == str_p2)
        {
            nb2 = "5";
        }
        if (b2[5] == str_p2)
        {
            nb2 = "6";
        }
        if (b2[6] == str_p2)
        {
            nb2 = "7";
        }
        if (b2[7] == str_p2)
        {
            nb2 = "8";
        }
        if (b2[8] == str_p2)
        {
            nb2 = "9";
        }
        std::string joined_str = nb1 + nb2;
        int joined_num = std::stoi(joined_str);
        std::cout << joined_num;
    }

    else if (!nb && !h_case)
    {
        if (sb[0] == num_str)
        {
            sn = 0;
        }
        if (sb[1] == num_str)
        {
            sn = 10;
        }
        if (sb[2] == num_str)
        {
            sn = 11;
        }
        if (sb[3] == num_str)
        {
            sn = 12;
        }
        if (sb[4] == num_str)
        {
            sn = 13;
        }
        if (sb[5] == num_str)
        {
            sn = 14;
        }
        if (sb[6] == num_str)
        {
            sn = 15;
        }
        if (sb[7] == num_str)
        {
            sn = 16;
        }
        if (sb[8] == num_str)
        {
            sn = 17;
        }
        if (sb[9] == num_str)
        {
            sn = 18;
        }
        if (sb[10] == num_str)
        {
            sn = 19;
        }
        std::cout << sn;
    }
}