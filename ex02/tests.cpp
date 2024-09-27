# include "tests.hpp"

void	executeTest(AForm *form, int sgrade, int xgrade)
{
	Bureaucrat s("Maha", sgrade);
	Bureaucrat x("Ola", xgrade);

	try
	{ form->beSigned(s); }
	catch(const std::exception& e)
	{
		std::cerr << s.getName() << " cannot sign because: ";
		std::cerr << e.what() << '\n';
	}
	form->execute(x);
}

void	shrubberyCreationTest()
{
	Utils::printMsg("\n|||||||||- ShrubberyCreationTest -|||||||||\n", "white");
	AForm *treeRequest = new ShrubberyCreationForm("here");

	std::cout << std::endl;
	executeTest(treeRequest, 146, 137);
	std::cout << std::endl;
	executeTest(treeRequest, 145, 138);
	std::cout << std::endl;
	executeTest(treeRequest, 145, 137);
	std::cout << std::endl;

	delete treeRequest;
}

void	RobotomyRequestTest()
{
	Utils::printMsg("\n|||||||||- RobotomyRequestTest -|||||||||\n", "white");
	AForm *robotomyRequest = new RobotomyRequestForm("here");

	std::cout << std::endl;
	executeTest(robotomyRequest, 73, 45);
	std::cout << std::endl;
	executeTest(robotomyRequest, 72, 46);
	std::cout << std::endl;
	executeTest(robotomyRequest, 72, 45);
	std::cout << std::endl;

	delete robotomyRequest;
}

void	presidentialPardonTest()
{
	Utils::printMsg("\n|||||||||- PresidentialPardonTest -|||||||||\n", "white");
	AForm *pardonRequest = new PresidentialPardonForm("here");

	std::cout << std::endl;
	executeTest(pardonRequest, 26, 5);
	std::cout << std::endl;
	executeTest(pardonRequest, 25, 6);
	std::cout << std::endl;
	executeTest(pardonRequest, 25, 5);
	std::cout << std::endl;

	delete pardonRequest;
}