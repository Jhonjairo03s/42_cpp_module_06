/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarUtils.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 19:55:34 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/10/08 14:05:06 by jhvalenc         ###   ########.fr       */
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
        if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
            return (1);
    }

    pos = str.find('.');
    if (pos != std::string::npos)
    {
        index = 0;
        while (index < str.length())
        {
            if (str[index] == '+' || str[index] == '-')
                index++;
            if (index == str.length() || (index == str.length() - 1 && str[index] == '.'))
                return (-1);
            if (str[index] >= '0' && str[index] <= '9')
                index++;
            else if (str[index] == '.')
                index++;
            else if (index == str.length() - 1 && str[index] == 'f')
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
    std::cout << std::fixed << std::setprecision(1);
    f = static_cast<float>(c);
    std::cout << "float: " << f << 'f' << '\n';
    d = static_cast<double>(c);
    std::cout << "double: " << d << '\n';
}

void    cast_int(const std::string& str)
{
    std::stringstream   ss(str);
    long long           ll;
    int                 n;
    unsigned char       c;
    float               f;
    double              d;

    ss >> ll;
    if (ss.fail() || ll < -2147483648LL || ll > 2147483647LL)
    {
        std::cout << "char: impossible" << '\n';
        std::cout << "int: impossible" << '\n';
        std::cout << "float: impossible" << '\n';
        std::cout << "double: impossible" << '\n';
        return ;
    }
    n = static_cast<int>(ll);

    c = static_cast<unsigned char>(n);
    if (n >= 32 && n <= 126)
        std::cout << "char: " << c << '\n';
    else if (n < 0 || n > 255)
        std::cout << "char: impossible" << '\n';
    else
        std::cout << "char: Non displayable" << '\n';

    std::cout << "int: " << n << '\n';

    std::cout << std::fixed << std::setprecision(1);
    f = static_cast<float>(n);
    std::cout << "float: " << f << 'f' << '\n';
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

    ss >> d;
    if (ss.fail())
    {
        std::cout << "char: impossible" << '\n';
        std::cout << "int: impossible" << '\n';
        std::cout << "float: impossible" << '\n';
        std::cout << "double: impossible" << '\n';
        return ;
    }
    f = static_cast<float>(d);

    /*
    c = static_cast<unsigned char>(f);
    if (f >= 32 && f <= 126)
        std::cout << "char: " << c << '\n';
    else if (f < 0 || f > 255)
        std::cout << "char: impossible" << '\n';
    else
        std::cout << "char: Non displayable" << '\n';
    if (f < -2147483648.0 || f > 2147483647.0)
        std::cout << "int: impossible" << '\n';
    else
    {
        n = static_cast<int>(f);
        std::cout << "int: " << n << '\n';
    }
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "float: " << f << 'f' << '\n';
    d = static_cast<double>(f);
    std::cout << "double: " << d << '\n';
    */
    if (d < 0 || d > 255 || d != d) // d != d se comprueba si es NaN
        std::cout << "char: impossible" << '\n' ;
    else
    {
        c = static_cast<unsigned char>(d);
        if (c >= 32 && c <= 126)
            std::cout << "char: " << c << '\n';
        else
            std::cout << "char: Non displayable" << '\n';
    }

    if (d < -2147483648.0 || d > 2147483647.0 || d != d)
        std::cout << "int: impossible" << '\n';
    else
    {
        n = static_cast<int>(d);
        std::cout << "int: " << n << '\n';
    }

    std::cout << std::fixed << std::setprecision(1);
    std::cout << "float: " << f << 'f' << '\n';
    std::cout << "double: " << d << '\n';
}

void    cast_double(const std::string& str)
{
    /*
    std::stringstream   ss(str);
    int                 n;
    unsigned char       c;
    float               f;
    double              d;

    ss >> d;
    c = static_cast<unsigned char>(d);
    if (d >= 32 && d <= 126)
        std::cout << "char: " << c << '\n';
    else if (d < 0 || d > 255)
        std::cout << "char: impossible" << '\n';
    else
        std::cout << "char: Non displayable" << '\n';
    if (d < -2147483648.0 || d > 2147483647.0)
        std::cout << "int: impossible" << '\n';
    else
    {
        n = static_cast<int>(d);
        std::cout << "int: " << n << '\n';
    }
    std::cout << std::fixed << std::setprecision(1);
    f = static_cast<float>(d);
    std::cout << "float: " << f << 'f' << '\n';
    std::cout << "double: " << d << '\n';
    */

    cast_float(str);
}
