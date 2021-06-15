#ifndef	CONTACT_H
# define CONTACT_H

#include <string>

class Contact {

	public:

		Contact( void );
		~Contact( void );

		void	set_first_name( std::string first_name);
		std::string		get_first_name( void ) const;

	private:

		std::string _first_name;
//		char *_last_name;
//		char *_nickname;
//		char *_login;
//		char *_postal_address;
//		char *email;
//		char *phone_number;
//		char *birthday_date;
//		char *favorite_meal;
//		char *underwear_color;
//		char *darkest_secret;
};

#endif
