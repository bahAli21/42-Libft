/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:29:13 by mbah              #+#    #+#             */
/*   Updated: 2024/10/01 15:33:52 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/// @brief verifie si c'est un caractere dans la table ascii
/// @param c le caractere 
/// @return 1 si oui et 0 sinon

int     ft_isascii(int c)
{
    return (c >= 0 && c <= 127);
}
