/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:20:15 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/20 16:14:33 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{

    ClapTrap ct("Clappy");
    
    ct.PrintStats();
    ct.attack("farfaraway");
    ct.PrintStats();
    ct.beRepaired(8);
    ct.PrintStats();
    ct.attack("closeTarget");
    ct.PrintStats();
    ct.takeDamage(5);
    ct.PrintStats();
    ct.takeDamage(1);
    ct.PrintStats();
    ct.attack("closeTarget");
    ct.PrintStats();
    ct.beRepaired(8);
    ct.PrintStats();
    ct.attack("closeTarget");
    ct.PrintStats();
    ct.takeDamage(3);
    ct.PrintStats();
    ct.attack("farTarget");
    ct.PrintStats();
    ct.takeDamage(10);
    ct.PrintStats();
    ct.attack("farTarget");
    ct.PrintStats();
    ct.takeDamage(3);
    ct.PrintStats();
    ct.attack("farTarget");
    ct.PrintStats();
    ct.takeDamage(10);
    ct.PrintStats();
    ct.attack("farfaraway");
    ct.PrintStats();
    ct.attack("farTarget");
    ct.PrintStats();
    ct.attack("closeTarget");
    ct.PrintStats();
}