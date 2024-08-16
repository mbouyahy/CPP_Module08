/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyahy <mbouyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:41:43 by mbouyahy          #+#    #+#             */
/*   Updated: 2023/12/03 17:43:34 by mbouyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    {
        try
        {
            std::cout << "\n<------------ Test N1 : Distance ------------>\n" << std::endl;
            Span sp = Span(5);

            sp.addNumber(6);
            sp.addNumber(3);
            sp.addNumber(17);
            sp.addNumber(9);
            sp.addNumber(11);

            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    {
        try
        {
            std::cout << "\n<------------ Test N3 : Exception ---------->\n" << std::endl;
            Span sp = Span(5);

            sp.addNumber(6);
            sp.addNumber(3);
            sp.addNumber(17);
            sp.addNumber(9);
            sp.addNumber(11);
            sp.addNumber(11);
        }
        catch(std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    {
        try
        {
            std::cout << "\n<---------- Test N2 : addNumbers() ---------->\n" << std::endl;
            Span sp = Span(5);
            
            std::vector<int> arr;

            arr.push_back(6);
            arr.push_back(3);
            arr.push_back(17);
            arr.push_back(8);
            arr.push_back(9);

            sp.addNumbers(arr.begin(), arr.end());
            sp.PrintArr();
        }
        catch(std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    {
        try
        {
            std::cout << "\n<---------- Test N2 : Testing Span With 10000 numbers ---------->\n" << std::endl;
            Span sp = Span(10000);
            
            std::vector<int> arr;
            for (int i = 0; i < 10000; i++)
                arr.push_back(i);
            sp.addNumbers(arr.begin(), arr.end());

            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
        }
        catch(std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    return 0;
}