/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 23:12:38 by jholl             #+#    #+#             */
/*   Updated: 2022/05/20 10:42:33 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.h"

int main(void)
{
	DiamondTrap berny("Berny");
	berny.whoAmI();
	DiamondTrap toto;
	toto.whoAmI();

	toto = berny;
	toto.whoAmI();

	std::cout << toto.getHitPoints() << std::endl;
	std::cout << toto.getEnergyPoints() << std::endl;
	std::cout << toto.getAttackDamage() << std::endl;

	DiamondTrap jojo(berny);

	std::cout << jojo.getHitPoints() << std::endl;
	std::cout << jojo.getEnergyPoints() << std::endl;
	std::cout << jojo.getAttackDamage() << std::endl;

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
	toto.beRepaired(1);
	toto.beRepaired(0);

	std::cout << std::endl;
	toto.setEnergyPoints(0);
	toto.attack("a poor little cat");

	std::cout << std::endl;
	toto.guardGate();
	toto.highFivesGuys();
	return (0);
}
