/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoran <lmoran@students.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 10:24:09 by lmoran            #+#    #+#             */
/*   Updated: 2024/05/14 14:22:22 by lmoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    std::string  no_arg = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    if (ac == 1)
    {
        std::cout << no_arg << std::endl;
        return 0;
    }
    std::string curr;
    for (int i = 1; i < ac; i++)
    {
        curr = av[i];
        for (int j = 0; j < (int)curr.length() ; j++)
            std::cout << (char)toupper(av[i][j]);
        std::cout << " ";
    }
    std::cout << std::endl;
    return 0;
}
