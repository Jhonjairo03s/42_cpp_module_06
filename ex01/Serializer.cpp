/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 00:20:32 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/10/17 01:13:26 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
    std::cout << "Default Constructor Called" << '\n';
}

Serializer::Serializer(const Serializer& other)
{
    (void)other;
    std::cout << "Constructor Copy Called" << '\n';
}

Serializer& Serializer::operator=(const Serializer& other)
{
    (void)other;
    std::cout << "Copy assignment operator called" << '\n';
    return (*this);
}

Serializer::~Serializer()
{
    std::cout << "Destructor called" << '\n';
}

uintptr_t   Serializer::serialize(Data* ptr)
{
    uintptr_t   serialized_ptr;

    serialized_ptr = reinterpret_cast<uintptr_t>(ptr);
    return (serialized_ptr);
}

Data*   Serializer::deserialize(uintptr_t raw)
{
    Data*   deserialized_raw;

    deserialized_raw = reinterpret_cast<Data*>(raw);
    return (deserialized_raw);
}
