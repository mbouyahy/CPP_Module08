/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyahy <mbouyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 13:26:16 by mbouyahy          #+#    #+#             */
/*   Updated: 2023/12/03 17:42:06 by mbouyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <iterator>

template <typename T>
void easyfind(T Arr, int Occurence)
{
    typename T::iterator iter;
    iter = std::find(Arr.begin(), Arr.end(), Occurence);
    if (iter != Arr.end())
    {
        std::cout << "The first occurrence is : " << *iter << std::endl;
        return ;
    }
    throw std::out_of_range("No occurrence is found");
}

#endif