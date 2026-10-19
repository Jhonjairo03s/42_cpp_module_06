/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 20:00:36 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/10/19 20:37:57 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"
#include <iostream>

int main(void)
{
    std::srand(std::time(NULL));

    std::cout << "--- Generando 3 clases aleatorias ---" << '\n';
    
    for (int i = 0; i < 3; i++)
    {
        Base* obj = generate();
        
        std::cout << "\nTest " << i + 1 << ":" << '\n';
        std::cout << "Identificación por puntero  (*): ";
        identify(obj);
        
        std::cout << "Identificación por referencia (&): ";
        identify(*obj);
        
        delete obj;
    }

    return (0);
}
