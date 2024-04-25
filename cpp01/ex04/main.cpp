#include <iostream>
#include <string>
#include <fstream>

int main (int argc, char **argv)
{
    if (argc != 4)
        std::cout << "Invalid number of arguments" << std::endl;
    std::string file = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::string line;
    std::ifstream myfile;
    myfile.open (argv[1]);
    if (!myfile.is_open())
    {
        std::cout << "Error opening file" << std::endl;
        return 1;
    }
    std::ofstream newfile;
    char c;
    newfile.open(file + ".replaced");
    if (!newfile.is_open())
    {
        std::cout << "Error open file replaced" << std::endl;
        return 1;
    }
    while (std::getline(myfile, line))
    {
        for (size_t i = 0; i < line.size(); i++)
        {
            if (line.substr(i, s1.size()) == s1)
            {
                newfile << s2;
                i += s1.size() -1;
            }
            else
                newfile << line[i]; 
        }
        myfile.seekg (-1, myfile.cur);
        myfile.read(&c, 1);
        if (c == '\n')
            newfile << std::endl;
    }
    myfile.close();
    newfile.close();
    return 0;
}
