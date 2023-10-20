/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:22:25 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/20 16:26:13 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name(""), hitPoints(10), energyPoints(10), attackDamage(0)
{
   std::cout << "ClapTrap default constructor called" <<std::endl;
}

ClapTrap::ClapTrap(std::string name): name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap constructor that takes a parameter called " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &object)
{
    std::cout << "ClapTrap copy constructor called" <<std::endl;
    *this = object;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &object)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &object)
    {
    	this->name = object.name;
        this->hitPoints =object.hitPoints;
        this->energyPoints = object.energyPoints;
        this->attackDamage = object.attackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" <<std::endl;
}

void ClapTrap::attack(const std::string& target)
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
void ClapTrap::takeDamage(unsigned int amount)
{
    if (hitPoints == 0 && energyPoints == 0)
    {
        std::cout << "ClapTrap " << name << " can't do anything." << std::endl;
        return ;
    }
    if(hitPoints < amount)
    {
        hitPoints = 0;
        std::cout << "ClapTrap " << name << " can't take this damage " << std::endl;
    }
    else
    {   
        std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;   
        hitPoints = hitPoints - amount;
    }
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if (hitPoints == 0 && energyPoints == 0)
    {
        std::cout << "ClapTrap " << name << " can't do anything." << std::endl;
        return ;
    }
    if (energyPoints > 0)
    {
        std::cout << "ClapTrap " << name << " repaired." << std::endl;
        energyPoints--;
        hitPoints = hitPoints + amount;
    }
    else
    {
        std::cout << "ClapTrap " << name << " can't be repaired" << std::endl;
    }
}

void ClapTrap::PrintStats()
{
    std::cout << "ClapTrap " << name << " has HitPoints " << hitPoints << " has energyPoints " << energyPoints << std::endl;
}

