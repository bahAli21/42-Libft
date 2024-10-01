/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:19:40 by mbah              #+#    #+#             */
/*   Updated: 2024/10/01 16:04:14 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/// @brief verifie si un caractere est une majuscule
/// @param c le caractere
/// @return 1 si oui et 0 sinon

int     ft_isupper(int c)
{
    return (c >= 65 && c <= 90);
}