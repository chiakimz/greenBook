#include <iostream>
#include "URLify.hpp"
#include "removeDups.hpp"

int main()
{
    Urlify urlify;
    std::string output = "Mr John Smith    ";
    urlify.urlify(output, 13);
    std::cout << output << std::endl;

    LinkedList ll;

    Node f = { 1 };
    Node e = { 3, &f };
    Node d = { 1, &e };
    Node c = { 5, &d };
    Node b = { 4, &c };
    Node a = { 4, &b };

    Node answer = ll.removeDuplicates(&a);
    std::cout << "hello" << std::endl;
    
}
