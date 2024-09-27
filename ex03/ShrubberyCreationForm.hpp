#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <fstream>

class ShrubberyCreationForm : public AForm
{
	private:
		std::string _target;

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm &other);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm &rhs);
		~ShrubberyCreationForm();

		void		execute(Bureaucrat const & executor) const;
};
#endif