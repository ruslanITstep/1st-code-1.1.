#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter your name: ";
    std::string myName;
    std::cin >> myName;

    std::cout << "Enter your full surname: ";
    std::string mySurname;
    std::cin >> mySurname;

    std::cout << "Enter your age: ";
    std::string myAge;
    std::cin >> myAge;

    std::cout << "Your name is " << myName << " Your surname is   " << mySurname << " and your age is " << myAge;
    return 0;
}