/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyahy <mbouyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:42:00 by mbouyahy          #+#    #+#             */
/*   Updated: 2023/12/02 14:08:41 by mbouyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
    private:
        unsigned int max;
        std::vector<int> Arr;
    public:
        Span();
        ~Span();
        Span(const Span &other);
        Span &operator=(const Span &other);

        Span(unsigned int max);
        void addNumber(unsigned int nbr);
        void addNumbers(std::vector<int>::iterator FirstIter, std::vector<int>::iterator SecondIter);
        unsigned int shortestSpan();
        unsigned int longestSpan();
        void PrintArr();
};

#endif