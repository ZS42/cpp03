/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 22:48:55 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/21 00:54:32 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap default constructor called" <<std::endl;
}
 
DiamondTrap::DiamondTrap(std::string name): ScavTrap(name), FragTrap(name)
{
    std::cout << "DiamondTrap constructor that takes a parameter called " << name << std::endl;
    this->Name = name;
    ClapTrap::name = name + "_clap_name";
    FragTrap::hitPoints = 100; 
    ScavTrap::energyPoints = 50; 
    FragTrap::attackDamage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &object)
{
    std::cout << "DiamondTrap copy constructor called" <<std::endl;
    *this = object;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &object)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &object)
    {
        this->hitPoints =object.hitPoints;
        this->energyPoints = object.energyPoints;
        this->attackDamage = object.attackDamage;
    }
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called" <<std::endl;
}

void DiamondTrap::whoAmI(void)
{
	std::cout <<"I am a DiamondTrap. My name is  " << this->Name << ". My ClapTrap name is "<< ClapTrap::name << std::endl;
}