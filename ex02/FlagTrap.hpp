/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholl <jholl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 12:06:11 by jholl             #+#    #+#             */
/*   Updated: 2022/04/19 19:38:35 by jholl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FlagTrap: public ClapTrap
{
	public:
		FlagTrap(void);
		FlagTrap(const std::string & name);
		FlagTrap(FlagTrap const & to_cpy);
		~FlagTrap(void);
		FlagTrap & operator=(FlagTrap const & equal);

		void	highFivesGuys(void);
};

#endif
