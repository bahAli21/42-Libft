/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:36:23 by mbah              #+#    #+#             */
/*   Updated: 2024/10/01 17:33:07 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * @brief Met à zéro une portion de mémoire.
 * 
 * Cette fonction remplace par des zéros `n` octets à partir de l'adresse mémoire `s`.
 * Le pointeur `s`, de type `void *`, est converti en `unsigned char *` afin de pouvoir 
 * manipuler chaque octet de manière directe. Les modifications appliquées à `s2` affectent 
 * ainsi directement la mémoire pointée par `s`.
 * 
 * @param s Pointeur vers la zone mémoire à modifier.
 * @param n Nombre d'octets à mettre à zéro.
 */
void    ft_bzero(void *s, size_t n)
{
    size_t  i;
    unsigned char   *s2;

    i = 0;
    s2 = (unsigned char *) s;
    while (i < n)
    {
        s2[i] = 0;
        i++;
    }
}