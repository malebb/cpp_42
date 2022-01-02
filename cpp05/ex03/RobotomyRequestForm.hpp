#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include <time.h>
# include <stdlib.h>


class RobotomyRequestForm : public AForm
{
	public :
		RobotomyRequestForm();
		virtual ~RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm const & src);
		RobotomyRequestForm& operator=(RobotomyRequestForm const & rhs);
		RobotomyRequestForm(std::string target);
		void	action() const;
};

#endif
