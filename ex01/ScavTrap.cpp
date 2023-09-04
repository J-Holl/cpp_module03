/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 12:15:28 by jholl             #+#    #+#             */
/*   Updated: 2022/05/19 00:10:59 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Constructors

ScavTrap::ScavTrap(void)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string & name):
ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap String constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & to_cpy):
ClapTrap(to_cpy)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = to_cpy;
}

//Destructor

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor called" << std::endl;
	return ;
}

//Operator assignement

ScavTrap & ScavTrap::operator=(ScavTrap const & equal)
{
	ClapTrap::operator=(equal);
	std::cout << "ScavTrap Copy assignement operator called" << std::endl;
	return (*this);
}

//Others member functions

void ScavTrap::attack(const std::string& target)
{
	if (_attackDamage <= 0)
	{
		std::cout << "This clap trap dont't deal damage. Ugprade him." << std::endl;
		return ;
	}
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " 
		<< _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	}
	else if (_energyPoints <= 0 && _hitPoints > 0)
	{
		std::cout << "ScavTrap dont have energy points to do this action." <<
		std::endl;
	}
	else
	{
		std::cout << "ScavTrap dont have hit points to do this action. RIP." <<
		std::endl;
	}

}

void ScavTrap::guardGate(void)
{
	std::cout << "Scav Trap mode Gate keeper on." << std::endl;
}
