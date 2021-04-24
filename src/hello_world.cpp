#include <iostream>

int main()
{
    std::cout << "Hallo mensen\n";
    std::cout << "Potato\n";
    int potato = 69;
    std::cout << potato << "\n";
    potato = 5;  
    std::cout << potato << "\n";
    std::cout << "Hallo, vul hier je pincode in asjeblieft";
    std::cin >> potato; 
    std::cout << potato << "\n";
    if (potato == 9669) 
    {
        std::cout << "You've found the nice, well done human being!" << std::endl; 
    }
    else 
    {
        std::cout << "Thanks for the money human being!\n";
    }
}