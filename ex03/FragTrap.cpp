/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:22:33 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/21 00:43:50 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap default constructor called" <<std::endl;
}
 
FragTrap::FragTrap(std::string name): ClapTrap(name) 
{
    std::cout << "FragTrap constructor that takes a parameter called " << name << std::endl;
    this->hitPoints = 100; 
    this->energyPoints = 100; 
    this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &object) : ClapTrap(object)
{
    std::cout << "FragTrap copy constructor called" <<std::endl;
    *this = object;
}

FragTrap& FragTrap::operator=(const FragTrap &object)
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

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" <<std::endl;
}
  
void FragTrap::highFiveGuys()
{
    std::cout << "FragTrap " << this->name << " high fives all the guys!" << std::endl;
}
