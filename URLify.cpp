#include <iostream>
#include "URLify.hpp"

int Urlify::space_count(const std::string input, const int num)
{
    int count = 0;
    for (int i = 0; i < num; i++)
    {
        if (input[i] == *" ")
            count++;
    }
    return count;
}

void Urlify::urlify(std::string& input, const int num) {
    const int space_num = space_count(input, num);
    int current_position = num + space_num * 2 - 1;
    for (int i = num - 1; i >= 0; i--)
    {
        if (input[i] == *" ")
        {
            input[current_position] = '0';
            input[current_position - 1] = '2';
            input[current_position - 2] = '%';
            current_position = current_position - 3;
        }
        else
        {
            input[current_position] = input[i];
            current_position--;
        }
    }
}
