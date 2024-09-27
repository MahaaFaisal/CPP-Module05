#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm ("ShrubberyCreationForm", 145, 137), _target("default")
{
	Utils::printMsg("ShrubberyCreationForm default constructor\n", "green");
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm ("ShrubberyCreationForm", 145, 137), _target(target)
{
	Utils::printMsg("ShrubberyCreationForm parameterized constructor\n", "green");
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &other) : AForm ("ShrubberyCreationForm", 145, 137), _target(other._target)
{
	Utils::printMsg("ShrubberyCreationForm copy constructor\n", "green");
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &rhs)
{
	Utils::printMsg("ShrubberyCreationForm copy assignment operator\n", "green");
	_target = rhs._target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	Utils::printMsg("ShrubberyCreationForm destructorr\n", "red");
}

void		ShrubberyCreationForm::execute(Bureaucrat const & executor) const

{
	if (!(this->isExecutable(executor)))
		std::cout << "not executable\n";
	else
	{
		std::string tree = "      /\\      \n     /  \\     \n    /    \\    \n   /      \\   \n  /        \\  \n /          \\ \n/            \\\n      ||      \n      ||      ";
		std::ofstream treeLocation(_target +"_shrubbery");
		treeLocation << tree;
	}
}