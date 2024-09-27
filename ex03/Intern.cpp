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
	switch (name)
	{
		case ("robotomy request"):
			return (new RobotomyRequestForm(target));
		case ("shrubbery creation"):
			return (new ShrubberyCreationForm(target));
		case ("presidential pardon"):
			return (new PresidentialPardonForm(target));
		case (default):
			std::cerr << "I don't know how to make this one\n";
			return (NULL);
	}
}