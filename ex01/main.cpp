/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 23:12:38 by jholl             #+#    #+#             */
/*   Updated: 2022/05/17 13:09:15 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.h"

int main(void)
{
	ScavTrap berny("Berny");
	ScavTrap toto;

	toto = berny;
	toto.setName("Toto");

	std::cout << std::endl;
	toto.attack("a poor little cat");
	toto.setAttackDamage(4);
	toto.attack("a poor little cat");

	std::cout << std::endl;
	toto.takeDamage(5);
	toto.takeDamage(5);
	toto.takeDamage(0);
	toto.setHitPoints(10);

	std::cout << std::endl;
	toto.beRepaired(1);
	toto.setHitPoints(10);
	toto.beRepaired(1);
	toto.beRepaired(0);

	std::cout << std::endl;
	toto.setEnergyPoints(0);
	toto.attack("a poor little cat");

	std::cout << std::endl;
	toto.guardGate();
	return (0);
}
