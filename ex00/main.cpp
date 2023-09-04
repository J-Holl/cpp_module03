/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 23:12:38 by jholl             #+#    #+#             */
/*   Updated: 2022/05/20 13:05:31 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ClapTrap.h"

int main(void)
{
	ClapTrap berny("Berny");
	ClapTrap toto;

	toto = berny;
	toto.setName("Toto");

	std::cout << std::endl;
	std::cout << toto.getEnergyPoints() << std::endl;
	toto.attack("a poor little cat");
	toto.setAttackDamage(4);
	std::cout << toto.getEnergyPoints() << std::endl;
	toto.attack("a poor little cat");

	std::cout << std::endl;
	toto.takeDamage(5);
	std::cout << toto.getEnergyPoints() << std::endl;
	toto.takeDamage(5);
	std::cout << toto.getEnergyPoints() << std::endl;
	toto.takeDamage(0);
	toto.setHitPoints(10);

	std::cout << std::endl;
	toto.beRepaired(1);
	toto.beRepaired(2);
	std::cout << toto.getEnergyPoints() << std::endl;
	toto.beRepaired(0);
	std::cout << toto.getEnergyPoints() << std::endl;

	std::cout << std::endl;
	toto.setEnergyPoints(0);
	toto.attack("a poor little cat");
	toto.beRepaired(1);
	toto.setEnergyPoints(10);
	toto.setHitPoints(0);
	toto.attack("a poor little cat");
	toto.beRepaired(1);

	return (0);
}
