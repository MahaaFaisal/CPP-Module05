#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Exceptions.hpp"
# include "Bureaucrat.hpp"
class Bureaucrat;
class Form
{
	private:
		std::string const _name;
		bool	_isSigned;
		int const	_gradeToSign;
		int const	_gradeToExecute;

	public:
		Form ();
		Form (std::string name, int gradeToSign, int gradeToExecute);

		Form (Form &other);
		Form &operator=(Form &rhs);
		~Form ();

		std::string	getName () const;
		bool	getIsSigned () const;
		int			getGradeToSign () const;
		int			getGradeToExecute () const;
		void		beSigned(Bureaucrat &signer);
};
std::ostream &operator<<(std::ostream &outStream, Form &form);

#endif