#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

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
