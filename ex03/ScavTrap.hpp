/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:23:46 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/21 00:00:00 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

// adding virtual so that compiler knows that more than one class is inheriting from it
// and avoid the Diamond problem of diamond class inheriting base class twice
class ScavTrap: virtual public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &object);
        ScavTrap& operator=(const ScavTrap &object);
        ~ScavTrap();
        void attack(const std::string& target);   
        void guardGate();
};

#endif
