/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 13:21:17 by jholl             #+#    #+#             */
/*   Updated: 2022/04/19 11:25:16 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(const std::string & name);
		ClapTrap(ClapTrap const & to_cpy);
		~ClapTrap(void);
		ClapTrap & operator=(ClapTrap const & equal);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
		int	 getAttackDamage(void) const;
		void setAttackDamage(int const attackDamage);
		int	 getEnergyPoints(void) const;
		void setEnergyPoints(int const energyPoints);
		int	 getHitPoints(void) const;
		void setHitPoints(int const hitPoints);
		const std::string	& getName(void) const;
		void setName(const std::string & name);

	private:
		std::string _name;
		unsigned int _hitPoints;
		unsigned int _energyPoints;
		unsigned int _attackDamage;

};

#endif
