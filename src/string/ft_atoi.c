/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:43:18 by mbah              #+#    #+#             */
/*   Updated: 2024/10/01 16:43:39 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/// @brief cette fonction convertit une chaine de caractère en un entier
/// @param str la chaine de caractère a convertire
/// @return retourne l'entier res

int     ft_atoi(char *str)
{
    int     res;
    int     i;
    int     sign;

    i = 0;
    sign = 1;
    res = 0;
    while (ft_isspace(str[i]))
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while (ft_isdigit(str[i]))
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return (res * sign);
}
