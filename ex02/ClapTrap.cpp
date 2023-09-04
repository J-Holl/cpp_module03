/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 13:25:56 by jholl             #+#    #+#             */
/*   Updated: 2022/05/20 13:02:19 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <string>
#include <limits>

// Constructors

ClapTrap::ClapTrap(void):
_name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string & name):
_name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "String constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & to_cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = to_cpy;
}

//Destructor

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

//Operator assignement

ClapTrap & ClapTrap::operator=(ClapTrap const & equal)
{
	std::cout << "Copy assignement operator called" << std::endl;
	_name = equal.getName();
	_hitPoints = equal.getHitPoints();
	_attackDamage = equal.getAttackDamage();
	_energyPoints = equal.getEnergyPoints();
	return (*this);
}

//Accessors

void	ClapTrap::setHitPoints(int const hitPoints)
{
	_hitPoints = hitPoints;
}

int		ClapTrap::getHitPoints(void) const
{
	return (_hitPoints);
}

void	ClapTrap::setEnergyPoints(int const energyPoints)
{
	_energyPoints = energyPoints;
}

int		ClapTrap::getEnergyPoints(void) const
{
	return (_energyPoints);
}

void	ClapTrap::setAttackDamage(int const attackDamage)
{
	_attackDamage = attackDamage;
}

int		ClapTrap::getAttackDamage(void) const
{
	return (_attackDamage);
}

void	ClapTrap::setName(const std::string & name)
{
	_name = name;
}

const std::string &	ClapTrap::getName(void) const
{
	return (_name);
}

//Oters member functions

void ClapTrap::attack(const std::string& target)
{
	if (_attackDamage <= 0 && _energyPoints > 0)
	{
		std::cout << "This clap trap dont't deal damage. Ugprade him."
		<< "You still lost energy point, looser." << std::endl;
		_energyPoints--;
		return ;
	}
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " 
		<< _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	}
	else if (_energyPoints <= 0)
	{
		std::cout << "ClapTrap dont have energy points to do this action." <<
		std::endl;
	}
	else
	{
		std::cout << "ClapTrap dont have hit points to do this action. RIP." <<
		std::endl;
	}

}

void ClapTrap::takeDamage(unsigned int amount)
{

	if (amount == 0)
	{
		std::cout << "0 dommage, you kidding? Magikarp?" << std::endl;
		return ;
	}
	if (_hitPoints > 0)
	{
		if (_hitPoints <= amount)
			_hitPoints = 0;
		else
			_hitPoints -= amount;
		if (_hitPoints <= 0)
		{
			std::cout << "Monster! You killed ClapTrap " << _name 
			<< ", this ammount attack: \"" << amount <<"\" take all his hit points." << std::endl;
		}
		else
		{
			std::cout << "ClapTrap " << _name << " lost " << amount 
			<< " hit points. He now has: " << _hitPoints << " hit points." << std::endl;
		}
	}
	else
	{
		std::cout << "You want attack a dead clap trap? You are repugnant."
		<< std::endl;
	}
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		if (amount == 0)
		{
			std::cout << "0 amount for repair, you kidding right? "
			<< "You still lost energy point, looser." << std::endl;
			_energyPoints--;
			return ;
		}
		unsigned long check_limits(_hitPoints);
		check_limits += amount;
		if (check_limits > std::numeric_limits<unsigned int>::max())
		{
			std::cout << "You reached the maximum value hit point (unsigned int: "
			<< std::numeric_limits<unsigned int>::max() << ") with this amount: "
			<< amount << ". Action cancelled." << std::endl ;
			return ;
		}
		_hitPoints += amount;
		std::cout << "ClapTrap " << _name << " repaired " << amount << ". He now has: " 
		<< _hitPoints << " hit points." << std::endl;
		_energyPoints--;
	}
	else if (_energyPoints <= 0)
	{
		std::cout << "ClapTrap dont have energy points to do this action." <<
		std::endl;
	}
	else
	{
		std::cout << "ClapTrap dont have hit points to do this action. RIP." <<
		std::endl;
	}
}
