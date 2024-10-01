/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:56:01 by mbah              #+#    #+#             */
/*   Updated: 2024/10/01 16:03:46 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

 /**
  * @brief cette fonction verifie si 
  * le caractere passer est un white space (blank)
  * @param c le caractere 
  * @return return un boolean 0 ou 1
  */
int     ft_isspace(int c)
{
    return ((c >= 9 && c <= 13) || c == 32);
}