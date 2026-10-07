/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarUtils.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 19:55:34 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/10/07 22:37:39 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarUtils.hpp"

void    NaN(void)
{
    std::cout << "char: impossible" << '\n';
    std::cout << "int: impossible" << '\n';
    std::cout << "float: nanf" << '\n';
    std::cout << "double: nan" << '\n';
}

void    infinito_negativo(void)
{
    std::cout << "char: impossible" << '\n';
    std::cout << "int: impossible" << '\n';
    std::cout << "float: -inff" << '\n';
    std::cout << "double: -inf" << '\n';
}

void    infinito_positivo(void)
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
int tipo_real(const std::string& str)
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

void    cast_char(const std::string& str)
{
    unsigned char   c;
    int             n;
    float           f;
    double          d;

    c = static_cast<unsigned char>(str[0]);
    std::cout << "char: " << c << '\n';
    n = static_cast<int>(c);
    std::cout << "int: " << n << '\n';
    f = static_cast<float>(c);
    std::cout << "float: " << f << '\n';
    d = static_cast<double>(c);
    std::cout << "double: " << d << '\n';
}

void    cast_int(const std::string& str)
{
    std::stringstream   ss(str);
    int                 n;
    unsigned char       c;
    float               f;
    double              d;

    ss >> n;
    c = static_cast<unsigned char>(n);
    std::cout << "char: " << c << '\n';
    std::cout << "int: " << n << '\n';
    f = static_cast<float>(n);
    std::cout << "float: " << f << '\n';
    d = static_cast<double>(n);
    std::cout << "double: " << d << '\n';
}

void    cast_float(const std::string& str)
{
    std::stringstream   ss(str);
    int                 n;
    unsigned char       c;
    float               f;
    double              d;

    ss >> f;
    c = static_cast<unsigned char>(f);
    std::cout << "char: " << c << '\n';
    n = static_cast<int>(f);
    std::cout << "int: " << n << '\n';
    std::cout << "float: " << f << '\n';
    d = static_cast<double>(f);
    std::cout << "double: " << d << '\n';
}

void    cast_double(const std::string& str)
{
    std::stringstream   ss(str);
    int                 n;
    unsigned char       c;
    float               f;
    double              d;

    ss >> d;
    c = static_cast<unsigned char>(d);
    std::cout << "char: " << c << '\n';
    n = static_cast<int>(d);
    std::cout << "int: " << n << '\n';
    f = static_cast<float>(d);
    std::cout << "float: " << f << '\n';
    std::cout << "double: " << d << '\n';
}
