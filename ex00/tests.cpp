# include "tests.hpp"

void	properConstructor()
{
	try
	{
		Bureaucrat b;
		Utils::printMsg("<< operator: ", "magenta");
		std::cout << b;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat named("Maha", 140);
		Utils::printMsg("<< operator: ", "magenta");
		std::cout << named;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	properIncrement()
{
	Bureaucrat named("Maha", 140);
	Utils::printMsg("<< operator: ", "magenta");
	std::cout << named;
	try{ named.incrementGrade(); }
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
void	properDecrement()
{
	Bureaucrat named("Maha", 140);
	Utils::printMsg("<< operator: ", "magenta");
	std::cout << named;
	try{ named.decrementGrade(); }
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	improperConstructor()
{
	try
	{
		Bureaucrat named("Maha", 160);
		Utils::printMsg("<< operator: ", "magenta");
		std::cout << named;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
void	improperIncrement()
{
	Bureaucrat named("Maha", 1);
	Utils::printMsg("<< operator: ", "magenta");
	std::cout << named;
	try{ named.incrementGrade(); }
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
void	improperDecrement()
{
	Bureaucrat b;
	Utils::printMsg("<< operator: ", "magenta");
	std::cout << b;
	try{ b.decrementGrade(); }
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}