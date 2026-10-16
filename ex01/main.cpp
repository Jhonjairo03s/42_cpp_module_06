/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhvalenc <jhvalenc@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 00:32:07 by jhvalenc          #+#    #+#             */
/*   Updated: 2026/10/17 00:44:36 by jhvalenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
    Data        data;
    uintptr_t   se;
    Data*       des;

    data.name = "Hello world";
    data.id = 42;

    se = Serializer::serialize(&data);
    std::cout << "Converting a pointer to an unsigned integer: " << se << '\n';

    des = Serializer::deserialize(se);
    std::cout << "name recovered: " << des->name << '\n';
    std::cout << "id recovered: " << des->id << '\n';

    return (0);
}
