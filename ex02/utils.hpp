/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 18:09:37 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/10/19 19:57:14 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

# include "Base.hpp"
# include <cstdlib>
# include <ctime>

Base*   generate(void);
void    identify(Base* p);
void    identify(Base& p);

#endif
