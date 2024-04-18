#include <iostream>
#include "Phonebook.hpp"
#include <iomanip>
#include <cctype>
#include <string>

PhoneBook::PhoneBook()
{
    this->index = 0;
}

PhoneBook::~PhoneBook()
{

}

Contact* PhoneBook::getContacts()
{
    return contacts;
}

std::string moreThanTen(std::string str)
{
    if (str.length() > 10)
    {
        str = str.substr(0, 9);
        str += ".";
    }
    return str;
}

void    PhoneBook::search()
{
    for(int i = 0; i < 8; i++)
    {
        std::cout << std::setw(10) << i + 1 << "|";
        std::cout << std::setw(10) << moreThanTen(this->getContacts()[i].getFname()) << "|";
        std::cout << std::setw(10) << moreThanTen(this->getContacts()[i].getLname()) << "|";
        std::cout << std::setw(10) << moreThanTen(this->getContacts()[i].getNickname()) << "|" << std::endl;
    }
}

int isEmpty(std::string str)
{
    for(unsigned long i = 0; i < str.length(); i++)
    {
        if (!std::isspace(str[i]))
            return 0;
    }
    return 1;
}

void    PhoneBook::search(int index)
{
    if (index < 0 || index > 7)
    {
        std::cout << "Invalid index" << std::endl;
        return ;
    }
    std::cout << "First name: " << this->getContacts()[index].getFname() << std::endl;
    std::cout << "Last name: " << this->getContacts()[index].getLname() << std::endl;
    std::cout << "Nickname: " << this->getContacts()[index].getNickname() << std::endl;
    std::cout << "Phone number: " << this->getContacts()[index].getPhone() << std::endl;
    std::cout << "Darkest Secret: " << this->getContacts()[index].getSecret() << std::endl;
}

int PhoneBook::add()
{
    std::string fname;
    std::string lname;
    std::string nickname;
    std::string phone;
    std::string secret;

    std::cout << "Enter first name: ";
    getline (std::cin, fname);
    std::cout << "Enter last name: ";
    getline (std::cin, lname);
    std::cout << "Enter Nickname: ";
    getline (std::cin, nickname);
    std::cout << "Enter Phone Number: ";
    getline (std::cin, phone);
    std::cout << "Enter your darkest Secret: ";
    getline (std::cin, secret);

    if (isEmpty(fname) || isEmpty(lname) || isEmpty(nickname) || isEmpty(phone) || isEmpty(secret))
    {
        std::cout << "You have an empty field" << std::endl;
        return 0;
    }
    this->getContacts()[this->getIndex()].setNickname(nickname);
    this->getContacts()[this->getIndex()].setLname(lname);
    this->getContacts()[this->getIndex()].setFname(fname);
    this->getContacts()[this->getIndex()].setSecret(secret);
    this->getContacts()[this->getIndex()].setPhone(phone);
    return 1;
}

int PhoneBook::getIndex()
{
    return this->index;
}

void PhoneBook::incrementIndex()
{
    if (this->index == 7)
        this->index = -1;
    this->index++;
}
