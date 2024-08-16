/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyahy <mbouyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 13:26:06 by mbouyahy          #+#    #+#             */
/*   Updated: 2023/12/03 17:50:26 by mbouyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    {
        try
        {
            std::vector<int> a;
            std::vector<int>::iterator ptr;
            for (int i = 0; i < 5; i++)
            {
                a.push_back(i * 3);
            }
            for (ptr = a.begin(); ptr < a.end(); ptr++)
                std::cout << *ptr << std::endl;
            easyfind< std::vector<int> >(a, 6);
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    {
        try
        {
            std::vector<char> a;
            std::vector<char>::iterator ptr;

            for (int i = 0; i < 5; i++)
                a.push_back(65 + i);
            for (ptr = a.begin(); ptr != a.end(); ptr++)
                std::cout << *ptr << std::endl;
            easyfind< std::vector<char> >(a, 'B');
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    return (0);
}