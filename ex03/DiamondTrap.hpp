/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 12:06:11 by jholl             #+#    #+#             */
/*   Updated: 2022/05/19 10:57:15 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "FlagTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap:
public ScavTrap, public FlagTrap 
{
	public:
		DiamondTrap(void);
		DiamondTrap(const std::string & name);
		DiamondTrap(DiamondTrap const & to_cpy);
		~DiamondTrap(void);
		DiamondTrap & operator=(DiamondTrap const & equal);

		void whoAmI(void);
		
	private:
		std::string _name;
};

#endif
