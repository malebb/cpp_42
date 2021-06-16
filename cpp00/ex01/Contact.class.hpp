#ifndef	CONTACT_H
# define CONTACT_H

#include <iostream>
#include <sstream>

class Contact {

	public:

		Contact( void );
		~Contact( void );

		void	set_first_name( std::string first_name);
		std::string		get_first_name( void ) const;
		void	set_last_name( std::string last_name);
		std::string		get_last_name( void ) const;
		void	set_nickname( std::string nickname);
		std::string		get_nickname( void ) const;
		void	set_login( std::string login);
		std::string		get_login( void ) const;
		void	set_postal_address( std::string postal_address);
		std::string		get_postal_address( void ) const;
		void	set_email_address( std::string email_address);
		std::string		get_email_address( void ) const;
		void	set_phone_number( std::string phone_number);
		std::string		get_phone_number( void ) const;
		void	set_birthday_date( std::string birthday_date);
		std::string		get_birthday_date( void ) const;
		void	set_favorite_meal( std::string favorite_meal);
		std::string		get_favorite_meal( void ) const;
		void	set_underwear_color( std::string underwear_color);
		std::string		get_underwear_color( void ) const;
		void	set_darkest_secret( std::string darkest_secret);
		std::string		get_darkest_secret( void ) const;
		void	set_index( int index );
		int		get_index( void ) const;
		void	display_detail( void ) const;

	private:

		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _login;
		std::string _postal_address;
		std::string	_email_address;
		std::string _phone_number;
		std::string _birthday_date;
		std::string _favorite_meal;
		std::string _underwear_color;
		std::string _darkest_secret;
		int			_index;
};

#endif
