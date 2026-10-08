/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 19:55:53 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/10/08 12:53:03 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int argc, char **argv)
{
	std::string	str;

    if (argc != 2)
    {
        std::cerr << "./convert + value" << '\n';
        return (1);
    }
    str = argv[1];
	ScalarConverter::convert(str);
	return (0);
}
