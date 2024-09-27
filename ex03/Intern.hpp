#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>    
# include "AForm.hpp"

class	Intern
{
	public:
		Intern();
		Intern(Intern &other);
		Intern &operator=(Intern &rhs);
		~Intern ();

		AForm *makeForm(std::string name, std::string target);
};

#endif