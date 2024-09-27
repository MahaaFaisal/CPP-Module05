# include "tests.hpp"

void	shrubberyCreationTest()
{
	AForm *treeRequest = new ShrubberyCreationForm("here");

	Bureaucrat x("Maha", 138);
	Bureaucrat y("Maha", 145);
	//executing a not signed form
	try
	{treeRequest->execute(x);}
	catch(const std::exception& e)
	{std::cerr << e.what() << '\n';}
	//executing from a lower grade
	try
	{
		treeRequest->beSigned(y);
		treeRequest->execute(x);
	}
	catch(const std::exception& e)
	{std::cerr << e.what() << '\n';}
	//signing from a lower grade
	try
	{
		Bureaucrat y2("Maha", 147);
		treeRequest->beSigned(y2);
		treeRequest->execute(x);
	}
	catch(const std::exception& e)
	{std::cerr << e.what() << '\n';}
	delete treeRequest;
}

void	RobotomyRequestTest()
{
	std::cout << "|||||||||- RobotomyRequestTest -|||||||||\n";
	AForm *robotomyRequest = new RobotomyRequestForm("here");

	Bureaucrat x("Maha", 45);
	Bureaucrat y("Ola", 72);
	// executing a not signed form
	try
	{robotomyRequest->execute(x);}
	catch(const std::exception& e)
	{std::cerr << e.what() << '\n';}
	// executing from a lower grade
	try
	{
		robotomyRequest->beSigned(y);
		robotomyRequest->execute(x);
	}
	catch(const std::exception& e)
	{std::cerr << e.what() << '\n';}
	//signing from a lower grade
	try
	{
		Bureaucrat y2("Maha", 73);
		robotomyRequest->beSigned(y2);
		robotomyRequest->execute(x);
	}
	catch(const std::exception& e)
	{std::cerr << e.what() << '\n';}

	delete robotomyRequest;
}