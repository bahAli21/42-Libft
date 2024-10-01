/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:09:41 by mbah              #+#    #+#             */
/*   Updated: 2024/10/01 16:13:44 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/// @brief cetteb fonction verifie si un caractere est imprimable
/// @param c le caractere non signé
/// @return retourne une valeur booleenne 1 ou 0
int     ft_isprint(int c)
{
    return (c >= 32 && c <= 126);
}
