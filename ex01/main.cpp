/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:21:53 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/20 20:51:17 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap st("Scavy");

    st.PrintStats();
    st.attack("farfaraway");
    st.PrintStats();
    st.beRepaired(8);
    st.PrintStats();
    st.attack("closeTarget");
    st.PrintStats();
    st.takeDamage(5);
    st.PrintStats();
    st.takeDamage(1);
    st.PrintStats();
    st.attack("closeTarget");
    st.PrintStats();
    st.beRepaired(8);
    st.PrintStats();
    st.attack("closeTarget");
    st.PrintStats();
    st.takeDamage(3);
    st.PrintStats();
    st.attack("farTarget");
    st.PrintStats();
    st.takeDamage(10);
    st.PrintStats();
    st.attack("farTarget");
    st.PrintStats();
    st.takeDamage(3);
    st.PrintStats();
    st.attack("farTarget");
    st.PrintStats();
    st.takeDamage(10);
    st.PrintStats();
    st.attack("farfaraway");
    st.PrintStats();
    st.attack("farTarget");
    st.PrintStats();
    st.attack("closeTarget");
    st.PrintStats();
    st.guardGate();
}
