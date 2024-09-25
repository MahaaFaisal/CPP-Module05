#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <exception>
# include "Utils.hpp"

class Bureaucrat
{
	private:
		std::string const _name;
		int	_grade;
		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};
	
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat &other);
		Bureaucrat &operator=(Bureaucrat &rhs);
		~Bureaucrat();

		std::string getName();
		int getGrade();

		void	incrementGrade();
		void	decrementGrade();
};
std::ostream &operator<<(std::ostream &outstream, Bureaucrat &rhs);

#endif