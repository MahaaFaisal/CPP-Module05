#include "Form.hpp"

Form::Form () : _name("default"), _isSigned(0), _gradeToSign(150), _gradeToExecute(150)
{
	Utils::printMsg("Form default constructor\n", "green");
}

Form::Form (std::string name, int gradeToSign, int gradeToExecute) : _name(name), _isSigned(0), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (_gradeToSign < 1 || _gradeToExecute < 1)
		throw (GradeTooHighException());
	if (_gradeToSign > 150 || _gradeToExecute > 150)
		throw (GradeTooLowException());
	Utils::printMsg("Form parameterized constructor\n", "green");
}

Form::Form (Form &other) : _name(other._name), _isSigned(0), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
	if (_gradeToSign < 1 || _gradeToExecute < 1)
		throw (GradeTooHighException());
	if (_gradeToSign > 150 || _gradeToExecute > 150)
		throw (GradeTooLowException());
	Utils::printMsg("Form copy constructor\n", "green");
	*this = other;
}

Form &Form::operator=(Form &rhs)
{
	(void) rhs;
	Utils::printMsg("Form copy assignmen operator\n", "green");
	return (*this);
}

Form::~Form ()
{
	Utils::printMsg("Form destructor\n", "red");
}

std::string	Form::getName () const
{
	return (_name);
}

bool	Form::getIsSigned () const
{
	return (_isSigned);
}

int			Form::getGradeToSign () const
{
	return (_gradeToSign);
}

int			Form::getGradeToExecute () const
{
	return (_gradeToExecute);
}

void		Form::beSigned(Bureaucrat &buru)
{
	if (buru.getGrade() > _gradeToSign)
		throw(GradeTooLowException());
	_isSigned = 1;
}

std::ostream &operator<<(std::ostream &outStream, Form &form)
{
	outStream << form.getName() << " ";
	outStream << form.getIsSigned() << " ";
	outStream << form.getGradeToSign()  << " ";
	outStream << form.getGradeToExecute() << std::endl;
	return (outStream);
}
