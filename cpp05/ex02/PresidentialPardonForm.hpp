#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"
# include <time.h>
# include <stdlib.h>


class PresidentialPardonForm : public AForm
{
	public :
		PresidentialPardonForm();
		virtual ~PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const & src);
		PresidentialPardonForm& operator=(PresidentialPardonForm const & rhs);
		PresidentialPardonForm(std::string target);
		void	action() const;
};

#endif
