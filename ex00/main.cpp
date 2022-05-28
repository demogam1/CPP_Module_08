/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 15:34:42 by misaev            #+#    #+#             */
/*   Updated: 2022/05/22 16:19:45 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <iostream>
#include <vector>

int main ()
{
    std::vector<int> toto;

    for (size_t i = 10; i < 20; i++)
    {
        toto.push_back(i);
    }
    try
    {
        easyfind(toto, 5);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }   
}