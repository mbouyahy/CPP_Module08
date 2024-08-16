/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyahy <mbouyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:42:16 by mbouyahy          #+#    #+#             */
/*   Updated: 2023/12/03 17:43:13 by mbouyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    this->max = 0;
}

Span::~Span()
{
    
}

Span::Span(const Span &other)
{
    *this = other;
}

Span &Span::operator=(const Span &other)
{
    if (this != &other)
    {
        this->max = other.max;
        this->Arr = other.Arr;
    }
    return (*this);
}

Span::Span(unsigned int max)
{
    this->max = max;
}

void Span::addNumber(unsigned int nbr)
{
    if (Arr.size() < max)
        Arr.push_back(nbr);
    else
        throw std::out_of_range("There are already N elements stored");
}

void Span::addNumbers(std::vector<int>::iterator FirstIter, std::vector<int>::iterator SecondIter)
{
    for (; FirstIter < SecondIter; FirstIter++)
        addNumber(*FirstIter);
}

void Span::PrintArr()
{
    std::vector<int>::iterator iter;
    for (iter = Arr.begin(); iter != Arr.end(); iter++)
    {
        std::cout << *iter << std::endl;
    }
}

unsigned int Span::shortestSpan()
{
    int shortest;

    if (Arr.size() <= 1 || Arr.empty())
        throw std::out_of_range("Error!");

    std::vector<int>::iterator FirstIter = Arr.begin();
    std::vector<int>::iterator SecondIter = Arr.begin();
    SecondIter++;

    shortest = std::abs(*FirstIter - *SecondIter);
    for (FirstIter = Arr.begin(); FirstIter != Arr.end(); FirstIter++)
    {
        for (SecondIter = Arr.begin(); SecondIter != Arr.end(); SecondIter++)
        {
            if ((int)abs(*FirstIter - *SecondIter) < shortest && *FirstIter != *SecondIter)
                shortest = abs(*FirstIter - *SecondIter);
        }
    }
    return (shortest);
}

unsigned int Span::longestSpan()
{
    int maximum;
    int minimum;

    if (Arr.size() <= 1 || Arr.empty())
        throw std::out_of_range("Error!");

    maximum = (*Arr.begin());
    minimum = (*Arr.begin());

    std::vector<int>::iterator iter;

    for (iter = Arr.begin(); iter != Arr.end(); iter++)
        maximum = std::max(static_cast<int>(*iter), maximum);
    for (iter = Arr.begin(); iter != Arr.end(); iter++)
        minimum = std::min(static_cast<int>(*iter), minimum);
    return (std::abs(static_cast<int>(maximum - minimum)));
}