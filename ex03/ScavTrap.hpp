/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 12:06:11 by jholl             #+#    #+#             */
/*   Updated: 2022/05/11 17:06:03 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(const std::string & name);
		ScavTrap(ScavTrap const & to_cpy);
		~ScavTrap(void);
		ScavTrap & operator=(ScavTrap const & equal);

		void attack(const std::string& target);
		void guardGate(void);
};

#endif
