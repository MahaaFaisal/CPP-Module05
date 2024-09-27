#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <exception>
# include "Utils.hpp"
# include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		std::string const _name;
		int	_grade;
	
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat &other);
		Bureaucrat &operator=(Bureaucrat &rhs);
		~Bureaucrat();

		std::string getName() const;
		int getGrade() const;

		void	incrementGrade();
		void	decrementGrade();
		void	signForm(AForm &form);
		void	executeForm(AForm const & form);
};
std::ostream &operator<<(std::ostream &outstream, Bureaucrat &rhs);

#endif