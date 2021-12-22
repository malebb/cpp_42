#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "A brand new brain" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "no idea";
}

Brain::~Brain()
{
	std::cout << "no more brain" << std::endl;
}

Brain::Brain(Brain const & src)
{
	*this = src;
}

Brain&		Brain::operator=(Brain const & rhs)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	return (*this);
}
