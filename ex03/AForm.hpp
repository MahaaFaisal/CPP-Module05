#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Exceptions.hpp"
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		std::string const _name;
		bool	_isSigned;
		int const	_gradeToSign;
		int const	_gradeToExecute;

	public:
		AForm ();
		AForm (std::string name, int gradeToSign, int gradeToExecute);

		AForm (AForm &other);
		AForm &operator=(AForm &rhs);
		virtual ~AForm ();

		std::string	getName () const;
		bool	getIsSigned () const;
		int			getGradeToSign () const;
		int			getGradeToExecute () const;
		void		beSigned(Bureaucrat &signer);
		bool		isExecutable(Bureaucrat const &signer) const;
		virtual void		execute(Bureaucrat const & executor) const = 0;
};
std::ostream &operator<<(std::ostream &outStream, AForm &form);

#endif