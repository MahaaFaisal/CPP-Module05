#include "Intern.hpp"

Intern::Intern()
{
	Utils::printMsg("Intern default constructor\n", "green");
}

Intern::Intern(Intern &other)
{
	(void)other;
	Utils::printMsg("Intern copy constructor\n", "green");
}

Intern &Intern::operator=(Intern &rhs)
{
	(void)rhs;
	Utils::printMsg("Intern copy assignment operator\n", "green");
	return *this;
}

Intern::~Intern ()
{
	Utils::printMsg("Intern destructor\n", "red");
}

AForm *Intern::makeForm(std::string name, std::string target)
{
	std::string arr[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
	int i;
	for (i = 0; arr[i] != name && i < 3; i++);
	switch (i)
	{
		case (0):
			return (new RobotomyRequestForm(target));
		case (1):
			return (new ShrubberyCreationForm(target));
		case (2):
			return (new PresidentialPardonForm(target));
		case (3):
			std::cerr << "I don't know how to make this one\n";
	}
	return (NULL);
}