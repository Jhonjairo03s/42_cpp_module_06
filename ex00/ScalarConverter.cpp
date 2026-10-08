/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 18:52:45 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/10/08 12:20:13 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "ScalarUtils.hpp"


void    ScalarConverter::convert(const std::string& literal)
{
    int index;

    std::string literals[6] = {
        "-inff", "+inff", "nanf", "-inf", "+inf", "nan"
    };

    void (*funt_literals[3])(void) =
    {
        &NaN,
        &infinito_negativo,
        &infinito_positivo
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

    void (*funt_utils[4])(const std::string&) = 
    {
        &cast_char,
        &cast_float,
        &cast_double,
        &cast_int
    };

    if (tipo_real(literal) == 1)
        return ((funt_utils[0])(literal));
    if (tipo_real(literal) == 2)
        return ((funt_utils[1])(literal));
    if (tipo_real(literal) == 3)
        return ((funt_utils[2])(literal));
    if (tipo_real(literal) == 4)
        return ((funt_utils[3])(literal));
    if (tipo_real(literal) == -1)
        std::cerr << "Invalid value entered" << '\n';

}
