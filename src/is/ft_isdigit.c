/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:38:17 by mbah              #+#    #+#             */
/*   Updated: 2024/10/01 16:05:37 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * @brief cette fonction verifie si un caractere est un chiffre
 * @param c le caractere 
 * @return return une valeur booleenne 0 ou 1
 */
int     ft_isdigit(int c)
{
    return (c >= 48 && c <= 57);
}