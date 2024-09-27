#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :
	AForm ("RobotomyRequestForm", 72, 45), _target("default")
{
	Utils::printMsg("RobotomyRequestForm default constructor\n", "green");
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
	AForm ("RobotomyRequestForm", 72, 45), _target(target)
{
	Utils::printMsg("RobotomyRequestForm parameterized constructor\n", "green");
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &other) :
	AForm ("RobotomyRequestForm", 72, 45), _target(other._target)
{
	Utils::printMsg("RobotomyRequestForm copy constructor\n", "green");
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &rhs)
{
	Utils::printMsg("RobotomyRequestForm copy assignment operator\n", "green");
	_target = rhs._target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	Utils::printMsg("RobotomyRequestForm destructorr\n", "red");
}

void		RobotomyRequestForm::execute(Bureaucrat const & executor) const

{
	if (!(this->isExecutable(executor)))
		std::cout << "not executable\n";
	else
	{
		std::cout << "RRRRRRRRRRRRRR\n";
		srand(time(NULL));
		if (rand() % 2 == 0)
			std::cout << _target << " has been robotomized successfully\n";
		else
			std::cout << "robotomy failed.\n";
	}
}