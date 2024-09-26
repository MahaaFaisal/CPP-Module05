/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafaisal <mafaisal@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:52:56 by mafaisal          #+#    #+#             */
/*   Updated: 2024/09/26 11:02:57 by mafaisal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "tests.hpp"

int main()
{

	std::cout << "\n";
	properConstructor();
	std::cout << "\n";
	properIncrement();
	std::cout << "\n";
	properDecrement();
	std::cout << "\n";
	improperConstructor();
	std::cout << "\n";
	improperIncrement();
	std::cout << "\n";
	improperDecrement();
	std::cout << "\n";
}