#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm ("PresidentialPardonForm", 25, 5), _target("default")
{
	Utils::printMsg("PresidentialPardonForm default constructor\n", "green");
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm ("PresidentialPardonForm", 25, 5), _target(target)
{
	Utils::printMsg("PresidentialPardonForm parameterized constructor\n", "green");
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &other) : AForm ("PresidentialPardonForm", 25, 5), _target(other._target)
{
	Utils::printMsg("PresidentialPardonForm copy constructor\n", "green");
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &rhs)
{
	Utils::printMsg("PresidentialPardonForm copy assignment operator\n", "green");
	_target = rhs._target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	Utils::printMsg("PresidentialPardonForm destructorr\n", "red");
}

void		PresidentialPardonForm::execute(Bureaucrat const & executor) const

{
	try
	{
		this->isExecutable(executor);
		std::cout << _target << " has been pardoned by Zaphod Beeblebrox.\n";
		std::cout << executor.getName() << " executed " << this->getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << executor.getName() << " cannot execute because: ";
		std::cerr << e.what() << '\n';
	}
}