/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 18:32:36 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/10/19 20:29:15 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

Base*   generate(void)
{
    int     n;
    int     min;
    int     max;

    min = 0;
    max = 2;
    n = min + (std::rand() % (max - min + 1));
    if (n == 0)
        return (new A);
    else if (n == 1)
        return (new B);
    else
        return (new C);
}

void    identify(Base* p)
{
    A* a = dynamic_cast<A*>(p);
    if (a != NULL)
    {
        std::cout << 'A' << '\n';
        return ;
    }
    B* b = dynamic_cast<B*>(p);
    if (b != NULL)
    {
        std::cout << 'B' << '\n';
        return ;
    }
    C* c = dynamic_cast<C*>(p);
    if (c != NULL)
    {
        std::cout << 'C' << '\n';
        return ;
    }
    std::cerr << "Puntero" << '\n';
    return ;
}

void    identify(Base& p)
{
    /*
    try
    {
        A& a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << 'A' << '\n';
    }
    catch (const std::bad_cast& e)
    {
        std::cerr << "A: " << e.what() << '\n';
    }
    try
    {
        B& b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << 'B' << '\n';
    }
    catch (const std::bad_cast& e)
    {
        std::cerr << "B: " << e.what() << '\n';
    }
    try
    {
        C& c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << 'C' << '\n';
    }
    catch (const std::bad_cast& e)
    {
        std::cerr << "C: " << e.what() << '\n';
    }
    */
    try
    {
        A& a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << 'A' << '\n';
        return;
    }
    catch (const std::exception& e)
    {
    }

    try
    {
        B& b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << 'B' << '\n';
        return;
    }
    catch (const std::exception& e)
    {
    }

    try
    {
        C& c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << 'C' << '\n';
        return;
    }
    catch (const std::exception& e)
    {
    }
}
