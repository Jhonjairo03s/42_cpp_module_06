/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 18:52:45 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/10/06 19:54:29 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void    ScalarConverter::NaN(void)
{
    std::cout << "char: impossible" << '\n';
    std::cout << "int: impossible" << '\n';
    std::cout << "float: nanf" << '\n';
    std::cout << "double: nan" << '\n';
}

void    ScalarConverter::infinito_negativo(void)
{
    std::cout << "char: impossible" << '\n';
    std::cout << "int: impossible" << '\n';
    std::cout << "float: -inff" << '\n';
    std::cout << "double: -inf" << '\n';
}

void    ScalarConverter::infinito_positivo(void)
{
    std::cout << "char: impossible" << '\n';
    std::cout << "int: impossible" << '\n';
    std::cout << "float: +inff" << '\n';
    std::cout << "double: +inf" << '\n';
}

void ScalarConverter::convert(const std::string& literal)
{
    int index;

    std::string literals[6] = {
        "-inff", "+inff", "nanf", "-inf", "+inf", "nan"
    };

    void (*funt_literals[3])(void) =
    {
        &ScalarConverter::NaN,
        &ScalarConverter::infinito_negativo,
        &ScalarConverter::infinito_positivo
    };

    index = 0;
    while (index < 6)
    {
        if (literal == literals[index])
        {
            if (literal == "nanf" || literal == "nan")
                return ((funt_literals[0])());
            if (literal == "-inf" || literal == "-inff")
                return ((funt_literals[1])());
            if (literal == "+inf" || literal == "+inff")
                return ((funt_literals[2])());
        }
        index++;
    }
}
