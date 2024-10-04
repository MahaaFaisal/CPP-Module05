/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafaisal <mafaisal@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:52:56 by mafaisal          #+#    #+#             */
/*   Updated: 2024/10/04 12:22:58 by mafaisal         ###   ########.fr       */
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
	AForm *wrong;
	
	std::cout << '\n';
	Bureaucrat y ("name", 1);
	
	Utils::printMsg(" Intern's Robotomy Form ---\n", "magenta");
	robo->beSigned(y);
	robo->execute(y);
	std::cout << '\n';
	
	Utils::printMsg(" Intern's Shrubbery Form ---\n", "magenta");
	shrub->beSigned(y);
	shrub->execute(y);
	std::cout << '\n';
	
	Utils::printMsg(" Intern's Pardon Form ---\n", "magenta");
	pres->beSigned(y);
	pres->execute(y);
	std::cout << '\n';
	
	try
	{
		wrong = x.makeForm("presidential", "Raghda");
		Utils::printMsg(" Intern's Wrong Form ---\n", "magenta");
		wrong->beSigned(y);
		wrong->execute(y);
		std::cout << '\n';
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	delete robo;
	delete shrub;
	delete pres;

}