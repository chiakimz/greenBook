#include <iostream>
#include "URLify.hpp"

int main()
{
    Urlify urlify;
    std::string output = "Mr John Smith    ";
    urlify.urlify(output, 13);
    std::cout << output << std::endl;
}
