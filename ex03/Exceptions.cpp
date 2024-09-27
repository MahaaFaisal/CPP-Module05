# include "Exceptions.hpp"

const char* GradeTooHighException::what() const throw()
{
	return ("GradeTooHigh");
}
const char* GradeTooLowException::what() const throw()
{
	return ("GradeTooLow");
}

const char* FormNotSignedExepction::what() const throw()
{
	return ("FormNotSigned");
}