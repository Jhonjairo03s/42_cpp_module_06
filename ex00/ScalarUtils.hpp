/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarUtils.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 19:48:24 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/10/07 22:33:27 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARUTILS_HPP
# define SCALARUTILS_HPP

# include <iostream>
# include <string>
# include <sstream>

void    NaN(void);
void    infinito_negativo(void);
void    infinito_positivo(void);
int     tipo_real(const std::string& str);
void    cast_char(const std::string& str);
void    cast_int(const std::string& str);
void    cast_float(const std::string& str);
void    cast_double(const std::string& str);

#endif
