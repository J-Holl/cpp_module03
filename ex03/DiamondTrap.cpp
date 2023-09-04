/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 12:15:28 by jholl             #+#    #+#             */
/*   Updated: 2022/05/19 10:57:36 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// Constructors

DiamondTrap::DiamondTrap(void):
ClapTrap("Default_clap_name"), _name("Default")
{
	_hitPoints = 100; // FlagTrap
	_attackDamage = 30; // FlagTrap
	_energyPoints = 50; // ScavTrap
	std::cout << "DiamondTrap Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string & name):
ClapTrap(name + "_clap_name"), ScavTrap(name), FlagTrap(name), _name(name)
{
	_hitPoints = 100; // FlagTrap
	_attackDamage = 30; // FlagTrap
	_energyPoints = 50; // ScavTrap
	std::cout << "DiamondTrap String constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & to_cpy):
ClapTrap(to_cpy), ScavTrap(to_cpy), FlagTrap(to_cpy)
{
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
	*this = to_cpy;
}

//Destructor

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
	return ;
}

//Operator assignement

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & equal)
{
	ClapTrap::operator=(equal);
	_name = equal._name;
	std::cout << "DiamondTrap Copy assignement operator called" << std::endl;
	return (*this);
}

//Others member functions

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My diamond trap name is: " << _name << " and my Clap Trap name is: "
	<< ClapTrap::_name << "." << std::endl;
}
