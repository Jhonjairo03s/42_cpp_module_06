/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 18:52:45 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/10/07 13:33:43 by jhvalenc         ###   ########.fr       */
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

/*
 * 1 = char
 * 2 = float
 * 3 = double
 * 4 = int
*/
int ScalarConverter::tipo_real(const std::string& str)
{
    unsigned char   c;
    std::size_t     pos;
    size_t          index;

    if (str.length() == 1)
    {
        c = static_cast<unsigned char>(str[0]);
        if (c >= 32 && c <= 126)
            return (1);
    }

    pos = str.find('.');
    if (pos != std::string::npos)
    {
        index = 0;
        while (index < str.length())
        {
            if (str[index] >= '0' && str[index] <= '9')
                index++;
            if (str[index] == '.')
                index++;
            if (index == str.length() - 1 && str[index] == 'f')
                return (2);
            else
                return (-1);
        }
        return (3);
    }

    index = 0;
    if (str[index] == '+' || str[index] == '-')
        index++;
    // Si la cadena era solo "+" o "-", no es un int válido
    if (index == str.length())
        return (-1);
    while (index < str.length())
    {
        if (str[index] >= '0' && str[index] <= '9')
            index++;
        else
            return (-1);
    }
    return (4);
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
