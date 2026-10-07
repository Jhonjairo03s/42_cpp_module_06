/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 18:23:19 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/10/07 13:36:11 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <cctype>
# include <string>

class   ScalarConverter
{
    private:
        // Como lo indica el subject, para evitar instanciar la clase.
        ScalarConverter();
        ScalarConverter(const ScalarConverter& other);
        ScalarConverter&    operator=(const ScalarConverter& other);
        ~ScalarConverter();
        // Metodos auxiliares
        static void NaN(void);
        static void infinito_negativo(void);
        static void infinito_positivo(void);
        static int  tipo_real(const std::string& str);
    public:
        static void convert(const std::string& literal);
};

#endif
