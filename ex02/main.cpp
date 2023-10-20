/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:22:48 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/20 20:52:21 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    FragTrap ft("Fraggy");

    ft.PrintStats();
    ft.attack("farfaraway");
    ft.PrintStats();
    ft.beRepaired(8);
    ft.PrintStats();
    ft.attack("closeTarget");
    ft.PrintStats();
    ft.takeDamage(5);
    ft.PrintStats();
    ft.takeDamage(1);
    ft.PrintStats();
    ft.attack("closeTarget");
    ft.PrintStats();
    ft.beRepaired(8);
    ft.PrintStats();
    ft.attack("closeTarget");
    ft.PrintStats();
    ft.takeDamage(3);
    ft.PrintStats();
    ft.attack("farTarget");
    ft.PrintStats();
    ft.takeDamage(10);
    ft.PrintStats();
    ft.attack("farTarget");
    ft.PrintStats();
    ft.takeDamage(3);
    ft.PrintStats();
    ft.attack("farTarget");
    ft.PrintStats();
    ft.takeDamage(10);
    ft.PrintStats();
    ft.attack("farfaraway");
    ft.PrintStats();
    ft.attack("farTarget");
    ft.PrintStats();
    ft.attack("closeTarget");
    ft.PrintStats();
    ft.highFiveGuys();
}

