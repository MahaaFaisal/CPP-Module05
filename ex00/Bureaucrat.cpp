/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafaisal <mafaisal@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:19:13 by mafaisal          #+#    #+#             */
/*   Updated: 2024/09/25 19:57:21 by mafaisal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("The one who must not be named"), _grade(150)
{
	Utils::printMsg("Bureaucrat default constructor\n", "green");
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	Utils::printMsg("Bureaucrat parameterized constructor\n", "green");
	if (grade < 1)
		throw(GradeTooHighException());
	if (grade > 150)
		throw(GradeTooLowException());
}

Bureaucrat::Bureaucrat(Bureaucrat &other)
{
	Utils::printMsg("Bureaucrat copy constructor\n", "green");
	*this = other;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &rhs)
{
	Utils::printMsg("Bureaucrat copy assignment operator\n", "yellow");
	_grade = rhs._grade;
	// _name = rhs._name;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	Utils::printMsg("Bureaucrat destructor\n", "red");
}

std::string Bureaucrat::getName()
{
	return (_name);
}

int Bureaucrat::getGrade()
{
	return _grade;
}

void	Bureaucrat::incrementGrade()
{
	if (_grade == 1)
		throw (GradeTooHighException());
	_grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (_grade == 150)
		throw (GradeTooLowException());
	_grade++;
}

std::ostream &operator<<(std::ostream &outstream, Bureaucrat &rhs)
{
	outstream << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return outstream;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("GradeTooHigh");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("GradeTooLow");
}