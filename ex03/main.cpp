/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafaisal <mafaisal@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:52:56 by mafaisal          #+#    #+#             */
/*   Updated: 2024/09/27 18:46:56 by mafaisal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "AForm.hpp"

int main()
{
	std::cout << '\n';
	Intern x;

	AForm *robo = x.makeForm("robotomy request", "Maha");
	AForm *shrub = x.makeForm("shrubbery creation", "Ola");
	AForm *pres = x.makeForm("presidential pardon", "Raghda");
	AForm *wrong = x.makeForm("presidential", "Raghda");
	
	std::cout << '\n';
	Bureaucrat y;
	robo->(y);
	delete robo;
	delete shrub;
	delete pres;
	delete wrong;

}