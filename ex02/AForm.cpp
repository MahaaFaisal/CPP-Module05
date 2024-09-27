#include "AForm.hpp"

AForm::AForm () : _name("default"), _isSigned(0), _gradeToSign(150), _gradeToExecute(150)
{
	Utils::printMsg("AForm default constructor\n", "green");
}

AForm::AForm (std::string name, int gradeToSign, int gradeToExecute) : _name(name), _isSigned(0), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (_gradeToSign < 1 || _gradeToExecute < 1)
		throw (GradeTooHighException());
	if (_gradeToSign > 150 || _gradeToExecute > 150)
		throw (GradeTooLowException());
	Utils::printMsg("AForm parameterized constructor\n", "green");
}

AForm::AForm (AForm &other) : _name(other._name), _isSigned(other._isSigned), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
	if (_gradeToSign < 1 || _gradeToExecute < 1)
		throw (GradeTooHighException());
	if (_gradeToSign > 150 || _gradeToExecute > 150)
		throw (GradeTooLowException());
	Utils::printMsg("AForm copy constructor\n", "green");
}

AForm &AForm::operator=(AForm &rhs)
{
	Utils::printMsg("AForm copy assignmen operator\n", "green");
	this->_isSigned = rhs._isSigned;
	return (*this);
}

AForm::~AForm ()
{
	Utils::printMsg("AForm destructor\n", "red");
}

std::string	AForm::getName () const
{
	return (_name);
}

bool	AForm::getIsSigned () const
{
	return (_isSigned);
}

int			AForm::getGradeToSign () const
{
	return (_gradeToSign);
}

int			AForm::getGradeToExecute () const
{
	return (_gradeToExecute);
}

void		AForm::beSigned(Bureaucrat &signer)
{
	if (signer.getGrade() > _gradeToSign)
		throw(GradeTooLowException());
	std::cout << "form " << _name << " is signed by " << signer.getName() << std::endl;
	_isSigned = 1;
}

bool		AForm::isExecutable(Bureaucrat const &signer) const
{
	if (!_isSigned)
		throw(FormNotSignedExepction());
	if (signer.getGrade() > _gradeToExecute)
		throw (GradeTooLowException());
	return (1);
}

std::ostream &operator<<(std::ostream &outStream, AForm &form)
{
	outStream << "AForm name: "<< form.getName() << " | ";
	outStream <<"is signed ? ";
	outStream << (form.getIsSigned() ? "YES" : "NO") << " | ";
	outStream << "Grade to sign: "<< form.getGradeToSign()  << " | ";
	outStream << "Grade to Execute: "<< form.getGradeToExecute() << std::endl;
	return (outStream);
}
