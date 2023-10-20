/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:22:57 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/21 00:44:05 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap default constructor called" <<std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) 
{
    std::cout << "ScavTrap constructor that takes a parameter called " << name << std::endl;
    this->hitPoints = 100; 
    this->energyPoints = 50; 
    this->attackDamage = 20;
    // ScavTrap(unsigned int hp, unsigned int ep, unsigned int damage) : ClapTrap("", 100, 50, 20)
}

ScavTrap::ScavTrap(const ScavTrap &object) : ClapTrap(object)
{
    std::cout << "ScavTrap copy constructor called" <<std::endl;
    *this = object;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &object)
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

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" <<std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (hitPoints == 0 && energyPoints == 0)
    {
        std::cout << "ClapTrap " << name << " can't do anything." << std::endl;
        return ;
    }
    if (hitPoints == 0 || energyPoints == 0)
    {
        std::cout << "ClapTrap " << name << " can't attack." << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << name << " attacks " << target << " causing " << attackDamage << " points of damage!" << std::endl;
        hitPoints = hitPoints - attackDamage;
    }
    energyPoints--;
    return ;
}   
  
void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " is now in Gatekeeper mode." << std::endl;
}
