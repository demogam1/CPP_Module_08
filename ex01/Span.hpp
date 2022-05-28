/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 16:27:22 by misaev            #+#    #+#             */
/*   Updated: 2022/05/24 20:51:20 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <vector>
#include <iostream>
#include <cstdlib>

class Span
{
    public:
        /* */
        Span();
        Span(const Span &p);
        Span &operator=(const Span &p);
        ~Span();
        /* */
        class error : public std::exception
        {
            const char * what() const throw()
            {
                return "No distance can be found";
            }
        };
        class error_size : public std::exception
        {
            const char * what() const throw()
            {
                return "The array is at maximum capacity";
            }
        };
        Span(unsigned int N);
        void addNumber(unsigned int nbr);
        void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        int shortestSpan();
        int longestSpan();
    private:
        std::vector<int> tab;
        unsigned int max;
};