/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 18:03:56 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/10/19 18:31:49 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>

class   Base
{
    public:
        virtual ~Base();
};

class   A : public Base
{
};

class   B : public Base
{
};

class   C : public Base
{
};

#endif
