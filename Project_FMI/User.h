#include <iostream>

using std::string;

class User {
private:
	string username;
	string password;
	string email;
public:
	//! Мутатор за потребителско име.
	void setUsername(string);
	//! Селектор за потребилтеско име.
	string getName();
	//! Мутатор за потребителска парола.
	void setPassword(string);
	//! Селектор за потребителска парола.
	string getPassword();
	//! Мутатор за потрелбилски имейл адрес.
	void setEmail(string);
	//! Слектор за потрелбилски имейл адрес.
	string getEmail();

	//! 
	User(string username = "default", string password = "default", string email = "default");
};

