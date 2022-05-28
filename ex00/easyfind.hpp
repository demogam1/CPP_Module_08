/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 15:35:05 by misaev            #+#    #+#             */
/*   Updated: 2022/05/22 16:23:22 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <vector>
#include <iostream>

class error : public std::exception
{
    const char *what() const throw()
    {
        return "Erreur element not found !";
    }
};

template<typename T>

void easyfind(std::vector<T> nbr, int b)
{
    typename std::vector<T>::iterator it;
    typename std::vector<T>::iterator ed;
    it = nbr.begin();
    ed = nbr.end();
    int i = 0;
    while(it != ed)
    {
        if (*it == b)
        {
            std::cout << "element found at index " << i << std::endl;
            return;   
        }
        it++;
        i++;
    }
    throw error();
}