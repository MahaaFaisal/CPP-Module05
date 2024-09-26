/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafaisal <mafaisal@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:52:56 by mafaisal          #+#    #+#             */
/*   Updated: 2024/09/26 10:17:01 by mafaisal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat b;
	Utils::printMsg("<< operator: ", "magenta");
	std::cout << b;
	Utils::printMsg("b name: ", "magenta");
	std::cout << b.getName() << std::endl;
	Utils::printMsg("b grade: ", "magenta");
	std::cout << b.getGrade() << std::endl;

	Bureaucrat named("Maha", 140);
	Utils::printMsg("<< operator: ", "magenta");
	std::cout << named;
	Utils::printMsg("named name: ", "magenta");
	std::cout << named.getName() << std::endl;
	Utils::printMsg("named grade: ", "magenta");
	std::cout << named.getGrade() << "\n\n";
	
	Bureaucrat *named2;
	try
	{
		named2 = new Bureaucrat("Ola", 160);
		Utils::printMsg("<< operator: ", "magenta");
		std::cout << *named2;
		Utils::printMsg("named name: ", "magenta");
		std::cout << named2->getName() << std::endl;
		Utils::printMsg("named grade: ", "magenta");
		std::cout << named2->getGrade() << "\n\n";
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{	
		Bureaucrat named3("Dina", 0);
		Utils::printMsg("<< operator: ", "magenta");
		std::cout << named3;
		Utils::printMsg("named name: ", "magenta");
		std::cout << named3.getName() << std::endl;
		Utils::printMsg("named grade: ", "magenta");
		std::cout << named3.getGrade() << "\n\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	
}