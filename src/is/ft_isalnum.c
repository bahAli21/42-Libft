/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:48:54 by mbah              #+#    #+#             */
/*   Updated: 2024/10/01 15:07:56 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/// @brief cette fonction verifie si le caractère est alphanumerique
/// @param c le caractère à verifier
/// @return 1 si c'est un caractere alphanumerique et 0 sinon

int     ft_isalnum(char c)
{
    return ((c >= 48 && c <= 57) || \
    ((c >= 65 && c <= 90) || \
    (c >= 97 && c <= 122)));
}
