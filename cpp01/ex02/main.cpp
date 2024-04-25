#include <string>
#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* ptr = &str;
    std::string& ref = str;

    std::cout << "Address of the string:\t" << &str << std::endl;
    std::cout << "Address held by ptr*:\t" << ptr << std::endl;
    std::cout << "Address held by ref&:\t" << &ref << std:: endl << std::endl;

    std::cout << "Value of String:\t" << str << std::endl;
    std::cout << "Value of Pointer:\t" << *ptr << std::endl;
    std::cout << "Value of Reference:\t" << ref << std::endl;
}