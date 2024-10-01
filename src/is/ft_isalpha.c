/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:19:40 by mbah              #+#    #+#             */
/*   Updated: 2024/10/01 15:22:04 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/// @brief verifie si un caractere est alphabetique
/// @param c le caractere
/// @return 1 si oui et 0 sinon

int     ft_isalpha(int c)
{
    return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}