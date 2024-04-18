# ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
	private:
		std::string fname;
		std::string lname;
		std::string nickname;
		std::string secret;
		std::string phone;
	public:
		Contact();
		~Contact();
		void setFname(std::string fname);
		void setLname(std::string lname);
		void setNickname(std::string nickname);
		void setSecret(std::string secret);
		void setPhone(std::string phone);
		std::string getFname();
		std::string getLname();
		std::string getNickname();
		std::string getSecret();
		std::string getPhone();
};

#endif
