/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 12:15:28 by jholl             #+#    #+#             */
/*   Updated: 2022/05/17 13:39:09 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"

// Constructors

FlagTrap::FlagTrap(void)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FlagTrap Default constructor called" << std::endl;
}

FlagTrap::FlagTrap(const std::string & name):
ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FlagTrap String constructor called" << std::endl;
}

FlagTrap::FlagTrap(FlagTrap const & to_cpy)
{
	std::cout << "FlagTrap Copy constructor called" << std::endl;
	*this = to_cpy;
}

//Destructor

FlagTrap::~FlagTrap(void)
{
	std::cout << "FlagTrap Destructor called" << std::endl;
	return ;
}

//Operator assignement

FlagTrap & FlagTrap::operator=(FlagTrap const & equal)
{
	ClapTrap::operator=(equal);
	std::cout << "FlagTrap Copy assignement operator called" << std::endl;
	return (*this);
}

//Others member functions

void	FlagTrap::highFivesGuys(void)
{
	std::string string_highFive;

	std::cout << "Do you accept this highFive? Type: \"Y\" for yes or \"N\" for no."
	<< std::endl;
	while (std::getline(std::cin, string_highFive))
	{
		if (string_highFive.length() == 1 && 
		(!string_highFive.compare("Y") || !string_highFive.compare("y")))
		{
			std::cout << "HighFive success." << std::endl;
			return ;
		}
		else if (string_highFive.length() == 1 && 
		(!string_highFive.compare("N") || !string_highFive.compare("n")))
		{
			std::cout << "HighFive failed." << std::endl;
			return ;
		}
		else
		{
			std::cout << "Here we go again." << std::endl;
			std::cout << "Do you accept this highFive? Type: \"Y\" for yes or \"N\" for no."
			<< std::endl;
		}
	}
} 
