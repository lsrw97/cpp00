#include "Contact.hpp"

Contact::Contact()
{

}

Contact::~Contact()
{

}

void Contact::setFname(std::string fname)
{
    this->fname = fname;
}

void Contact::setLname(std::string lname)
{
    this->lname = lname;
}

void Contact::setPhone(std::string phone)
{
    this->phone = phone;
}

std::string Contact::getPhone()
{
    return this->phone;
}

void Contact::setNickname(std::string nickname)
{
    this->nickname = nickname;
}

void Contact::setSecret(std::string secret)
{
    this->secret = secret;
}

std::string Contact::getFname()
{
    return this->fname;
}

std::string Contact::getLname()
{
    return this->lname;
}

std::string Contact::getNickname()
{
    return this->nickname;
}

std::string Contact::getSecret()
{
    return this->secret;
}