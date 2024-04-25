#include <iostream>
#include <string>
#include <fstream>
#include "Harl.hpp"

int main ()
{
    Harl harl;
    harl.complain("debug");
    harl.complain("info");
    harl.complain("warning");
    harl.complain("error");
    harl.complain("aadsfasdfsdf");

    return 0;
}
