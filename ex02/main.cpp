/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyahy <mbouyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 19:57:05 by mbouyahy          #+#    #+#             */
/*   Updated: 2023/12/03 17:48:01 by mbouyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

/*
    To implement an iterator for the underlying container of a 
    std::stack and support ++it and --it operations, 
    you can use the iterator provided by the underlying container itself.
    Since the std::stack is a container adapter and not a container itself,
    you need to access the underlying 
    container (e.g., std::vector, std::deque, etc.) and then use its iterator.
*/

int main()
{

    {
        std::cout << "<------ Check => (POP | PUSH | TOP) ------->\n" << std::endl;

        MutantStack<int> S_Stack;

        S_Stack.push(13);
        S_Stack.push(37);
        std::cout << "Size of stack : " << S_Stack.size() << std::endl;
        std::cout << "Top : " << S_Stack.top() << std::endl;
        S_Stack.pop();//Remove the Top element
        std::cout << "Size of stack : " << S_Stack.size() << std::endl;
        S_Stack.push(42);

        MutantStack<int>::iterator it = S_Stack.begin();
        MutantStack<int>::iterator ite = S_Stack.end();
        ++it;
        --it;
        std::cout << std::endl;
        while (it != ite)
        {
            std::cout << "S_Stack Content : " << *it << std::endl;
            ++it;
        }
    }
    {
        std::cout << "\n<------ Check => Copy Constructor and Assignment ------->\n" << std::endl;
        MutantStack<int> FirstStack;

        FirstStack.push(1337);
        FirstStack.push(42);
        MutantStack<int> SecondStack(FirstStack);

        // SecondStack = FirstStack;
        std::cout << "Size of SecondStack : " << SecondStack.size() << std::endl << std::endl;
        
        MutantStack<int>::iterator it = SecondStack.begin();
        MutantStack<int>::iterator ite = SecondStack.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << "SecondStack Content : " << *it << std::endl;
            ++it;
        }
    }
    return 0;
}