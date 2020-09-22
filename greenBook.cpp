// greenBook.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int space_count(const std::string input, const int num)
{
    int count = 0;
    for (int i = 0; i < num; i++)
    {
        if (input[i] == *" ") 
        { 
            count++; 
        }
    }
    return count;
}

void urlify(std::string &input, const int num) {
    const int space_num = space_count(input, num);
    int current_position = num + space_num * 2 - 1;
    for (int i = num - 1; i >= 0; i--)
    {
        if (input[i] == *" ")
        {
            input[current_position] = '0';
            input[current_position -1] = '2';
            input[current_position -2] = '%';
            current_position = current_position - 3;
        }
        else 
        {
            char *letter = &input[i];
            input[current_position] = input[i];
            current_position--;
        }
    }
}
int main()
{
    std::string output = "Mr John Smith    ";
    urlify(output, 13);
    std::cout << output << std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
