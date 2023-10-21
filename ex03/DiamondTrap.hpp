/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student42abudhabi.ae>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 22:49:20 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/21 20:55:37 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
    private:
        std::string Name;
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap &object);
        DiamondTrap& operator=(const DiamondTrap &object);
        ~DiamondTrap();
        // using helps direct to which class to use the function from
		// This is not necessary as compiler will evaluate which of the
		// parents has the function and use that instead of a grandparent function.
		// If both parents have the function it will use the last as it will override the previous
        using ScavTrap::attack;
        // resolves identity
        void whoAmI();
};

#endif
