#include <iostream>
#include <iostream>
#include <string>

class Contact {
    private:
        std::string	firstname;
        std::string	lastname;
        std::string	nickname;
        std::string	secret;
        std::string	number;
    public:
        const std::string&	get_firstname(void) const;
        const std::string&	get_lastname(void) const;
        const std::string&	get_nickname(void) const;
        const std::string&	get_secret(void) const;
        const std::string&	get_number(void) const;
        void				set_firstname(std::string firstname);
        void				set_lastname(std::string lastname);
        void				set_nickname(std::string nickname);
        void				set_secret(std::string secret);
        void				set_number(std::string number);
    };

class PhoneBook {
private:
	Contact	contacts[8];
	int 	size;
	int 	index;
    
public:
	PhoneBook() : size (0), index (0) {}
	int 	get_size(void) const;
	void	add_contact(std::string data[5]);
	void	display_contact(int i) const;
	void	display_phonebook(void) const;
};