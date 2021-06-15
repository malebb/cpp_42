#include "Contact.class.hpp"

Contact::Contact( void ) {
	return ;
}

Contact::~Contact( void ) {
	return ;	
}

void	Contact::set_first_name(std::string first_name)
{
	this->_first_name = first_name;
}

std::string	Contact::get_first_name( void ) const
{
	return this->_first_name;
}
