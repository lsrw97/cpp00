#include <iostream>
#include "Harl.hpp"

void Harl::debug()
{
    std::cout << "This is a debug message" << std::endl;
}

void Harl::info()
{
    std::cout << "This is a info message" << std::endl;
}

void Harl::warning()
{
    std::cout << "This is a warning message" << std::endl;
}

void Harl::error()
{
    std::cout << "This is a error message" << std::endl;
}

void Harl::complain(std::string level)
{
    void (Harl::*ptr[])() = {&Harl::warning, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[] = {"debug", "info", "warning", "error"};

    for (int i = 0; i < 4; i++)
    {
        if (level == levels[i])
        {
            (this->*ptr[i])();
            return ;
        }
    }
    std::cout << "Invalid level" << std::endl;
}