/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:19:40 by mbah              #+#    #+#             */
/*   Updated: 2024/10/01 16:04:03 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/// @brief verifie si un caractere est une minuscule
/// @param c le caractere
/// @return 1 si oui et 0 sinon

int     ft_islower(int c)
{
    return (c >= 97 && c <= 122);
}