/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:13:56 by misaev            #+#    #+#             */
/*   Updated: 2022/05/26 19:28:08 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stack>
#include <vector>
#include <iostream>
#include <list>

template<typename T>
class MutantStack : public std::stack<T>
{
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;
        /*Form Canonique*/
        MutantStack(){}
        MutantStack(const MutantStack &p)
        {
            *this = p;  
        };
        MutantStack &operator=(const MutantStack &p)
        {
            if (this != &p)
                this = p;
            return *this;
        };
        virtual ~MutantStack(){}
        /*END*/
        iterator begin()
        {
            return this->c.begin();
        }
        iterator end()
        {
            return this->c.end();
        }
};