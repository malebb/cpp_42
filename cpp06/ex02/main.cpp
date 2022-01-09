#include "Classes.hpp"
#include <stdlib.h>
#include <time.h>

#include <iostream>

Base*	generate(void)
{
	Base*	base;
	int		i;
	
	i = rand() % 3 + 1;
	switch(i)
	{
		case 1:
			base = new A();
			break;
		case 2:
			base = new B();
			break;
		case 3:
			base = new C();
			break;
		default:
			base = NULL;
	}
	return (base);
}

void	identify(Base *p)
{
	A	*a;
	B	*b;
	C	*c;

	a = dynamic_cast<A *>(p);
	if (a != NULL)
		std::cout << "A" << std::endl;
	b = dynamic_cast<B *>(p);
	if (b != NULL)
		std::cout << "B" << std::endl;
	c = dynamic_cast<C *>(p);
	if (c != NULL)
		std::cout << "C" << std::endl;
}

void	identify(Base&p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch(std::exception & e)
	{
	}
	try
	{
		B &b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "B" << std::endl;
	}
	catch(std::exception & e)
	{
	}
	try
	{
		C &c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "C" << std::endl;
	}
	catch(std::exception & e)
	{
	}
}

int	main(void)
{
	Base*		base;

	srand(time(NULL));
	std::cout << "------------Test cast pointer------------" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		base = generate();
		std::cout << "By ptr : ";
		identify(base);
		std::cout << "By ref : ";
		identify(*base);
		std::cout << std::endl;
		delete base;
	}

	return (0);
}
