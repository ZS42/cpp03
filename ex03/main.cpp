/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:22:48 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/21 00:22:03 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap dt("Diamondy");

    dt.PrintStats();
    dt.attack("farfaraway");
    dt.PrintStats();
    // dt.beRepaired(8);
    // dt.PrintStats();
    // dt.attack("closeTarget");
    // dt.PrintStats();
    // dt.takeDamage(5);
    // dt.PrintStats();
    // dt.takeDamage(1);
    // dt.PrintStats();
    // dt.attack("closeTarget");
    // dt.PrintStats();
    // dt.beRepaired(8);
    // dt.PrintStats();
    // dt.attack("closeTarget");
    // dt.PrintStats();
    // dt.takeDamage(3);
    // dt.PrintStats();
    // dt.attack("farTarget");
    // dt.PrintStats();
    // dt.takeDamage(10);
    // dt.PrintStats();
    // dt.attack("farTarget");
    // dt.PrintStats();
    // dt.takeDamage(3);
    // dt.PrintStats();
    // dt.attack("farTarget");
    // dt.PrintStats();
    // dt.takeDamage(10);
    // dt.PrintStats();
    // dt.attack("farfaraway");
    // dt.PrintStats();
    // dt.attack("farTarget");
    // dt.PrintStats();
    // dt.attack("closeTarget");
    // dt.PrintStats();
    dt.whoAmI();
}

