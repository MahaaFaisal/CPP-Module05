#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>    
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class	Intern
{
	private:
		class formDoesntExist : public std::exception
		{
			const char* what() const throw();
		};

	public:
		Intern();
		Intern(Intern &other);
		Intern &operator=(Intern &rhs);
		~Intern ();

		AForm *makeForm(std::string name, std::string target);
};

#endif