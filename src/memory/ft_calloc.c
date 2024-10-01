/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:36:29 by mbah              #+#    #+#             */
/*   Updated: 2024/10/01 18:04:53 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"


/**
 * La fonction ft_calloc() alloue la mémoire nécessaire pour
 * un tableau de nmemb éléments de size octets, et renvoie un pointeur
 * vers la mémoire allouée qui a été remplie avec des zéros par ft_bzero().
 *
 * \param	nmemb	Le nombre d'élements du tableau.
 * \param	size	La taille des élements du tableau.
 * \return			L'adresse de l'espace mémoire alloué.
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
    void    *res;

    res = malloc(nmemb * size);
    if(!res)
        return (NULL);
    ft_bzero(res, nmemb * size);
    return (res);
}