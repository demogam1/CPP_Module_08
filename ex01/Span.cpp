/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 16:38:55 by misaev            #+#    #+#             */
/*   Updated: 2022/05/23 16:30:05 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/* */ 
Span::Span()
{
    this->max = 0;
}
Span::Span(const Span  &p)
{
    this->max = p.max;
    this->tab = p.tab;
}
Span &Span::operator=(const Span &p)
{
    this->max = p.max;
    this->tab = p.tab;
    return *this;
}
Span::~Span()
{
    std::cout << "Destructor called\n";
}
/**/

Span::Span(unsigned int N)
{
    this->max = N;
}

void Span::addNumber(unsigned int nbr)
{
    if (tab.size() < this->max)
        tab.push_back(nbr);
    else
        throw error_size();
}

int Span::shortestSpan()
{
    if (tab.empty() || tab.size() == 1 || this->max == 0)
        throw error();
    else
    {
        std::vector<int>::iterator start;
        std::vector<int>::iterator end;
        
        start = tab.begin();
        end = tab.end();
        int result = 0;
        int i  = 0;
        int frst = 0;
        while(start != end)
        {
            frst = *start;
            start++;
            if (i == 0)
                result = abs(frst - *start);
            else if (result > abs(frst - *start) && start != end)
                result = abs(frst - *start);
            i++;
            
        }
        return result;
    }
}

int Span::longestSpan()
{
    std::vector<int>::iterator Max;
    std::vector<int>::iterator Min;
    Max = std::max_element(tab.begin(), tab.end());
    Min = std::min_element(tab.begin(), tab.end());
    return abs(*Max - *Min);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (end - begin >= this->max)
        throw error_size();
    else
        this->tab.insert(tab.begin(), begin, end);
}