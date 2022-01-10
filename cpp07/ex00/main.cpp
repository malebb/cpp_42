#include "whatever.hpp"

int	main(void)
{
	int a = 2;
	int b = 3;

	std::cout << "------------Basic tests------------" << std::endl;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::cout << std::endl;

	std::cout << "------------Test other types------------" << std::endl;

	float e = 500;
	float f = 600;

	::swap(e, f);
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
	std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;

	std::cout << std::endl;

	double g = 200;
	double h = 100;

	::swap(g, h);
	std::cout << "g = " << g << ", h = " << h << std::endl;
	std::cout << "min( g, h ) = " << ::min( g, h ) << std::endl;
	std::cout << "max( g, h ) = " << ::max( g, h ) << std::endl;

	std::cout << std::endl;

	std::cout << "------------Test equals values------------" << std::endl;
	int		i = 2;
	int		j = 2;
	int		&ret_min = min(i, j);
	int		&ret_max = max(i, j);

	std::cout << "addr i = " << &i << std::endl;
	std::cout << "addr j = " << &j << std::endl;
	std::cout << "min( i, j ) = " << &ret_min << std::endl;
	std::cout << "max( i, j ) = " << &ret_max << std::endl;
	return 0;
}
