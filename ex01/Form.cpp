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

Form::Form (Form &other) : _name(other._name), _isSigned(other._isSigned), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
	if (_gradeToSign < 1 || _gradeToExecute < 1)
		throw (GradeTooHighException());
	if (_gradeToSign > 150 || _gradeToExecute > 150)
		throw (GradeTooLowException());
	Utils::printMsg("Form copy constructor\n", "green");
}

Form &Form::operator=(Form &rhs)
{
	Utils::printMsg("Form copy assignmen operator\n", "green");
	this->_isSigned = rhs._isSigned;
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

void		Form::beSigned(Bureaucrat &signer)
{
	if (signer.getGrade() > _gradeToSign)
		throw(GradeTooLowException());
	_isSigned = 1;
}

std::ostream &operator<<(std::ostream &outStream, Form &form)
{
	outStream << "Form name: "<< form.getName() << " | ";
	outStream <<"is signed ? ";
	outStream << (form.getIsSigned() ? "YES" : "NO") << " | ";
	outStream << "Grade to sign: "<< form.getGradeToSign()  << " | ";
	outStream << "Grade to Execute: "<< form.getGradeToExecute() << std::endl;
	return (outStream);
}
