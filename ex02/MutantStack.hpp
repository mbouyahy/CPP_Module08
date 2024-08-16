/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyahy <mbouyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 19:57:35 by mbouyahy          #+#    #+#             */
/*   Updated: 2023/12/03 17:49:45 by mbouyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
    public:
        MutantStack() : std::stack<T, Container>() {};
        ~MutantStack() {};
        MutantStack(const MutantStack &other) : std::stack<T, Container>(other) {};
        MutantStack &operator=(const MutantStack &other)
        {
            if (this != &other)
                std::stack<T, Container>::operator=(other);
            return (*this);
        }

        typedef typename Container::iterator iterator;
        iterator end()
        {
            return (this->c.end());
        }
        iterator begin()
        {
            return (this->c.begin());
        }
};

#endif