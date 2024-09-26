# include "tests.hpp"

void	properFormConstructor()
{
	try
	{
		Form form("f1", 1, 150);
		Form form2("f1", 150, 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}
void	improperFormConstructor()
{
	try
	{
		Form form("f1", 0, 150);
		// Form form2("f1", 150, 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	properSign()
{
	try
	{
		Bureaucrat b("b", 4);
		Form form("f1", 6, 4);
		std::cout << "is signed? " << form.getIsSigned() << '\n';
		b.signForm(form);
		std::cout << "is signed? " << form.getIsSigned() << '\n';
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	improperSign()
{
	try
	{
		Bureaucrat b("b", 4);
		Form form("f1", 3, 4);
		std::cout << "is signed? " << form.getIsSigned() << '\n';
		b.signForm(form);
		std::cout << "is signed? " << form.getIsSigned() << '\n';
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

}