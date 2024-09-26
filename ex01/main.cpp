/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafaisal <mafaisal@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:52:56 by mafaisal          #+#    #+#             */
/*   Updated: 2024/09/26 15:05:29 by mafaisal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

#include "tests.hpp"

int main()
{
	properFormConstructor();
	std::cout << '\n';
	improperFormConstructor();
	std::cout << '\n';
	properSign();
	std::cout << '\n';
	improperSign();
	std::cout << '\n';
}