/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 18:23:19 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/10/06 18:26:50 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>

class   ScalarConverter
{
    private:
        // Como lo indica el subject, para evitar instanciar la clase.
        ScalarConverter();
        ScalarConverter(const ScalarConverter& other);
        ScalarConverter&    operator=(const ScalarConverter& other);
        ~ScalarConverter();
    public:
        static void convert(const std::string& literal);
};

#endif
