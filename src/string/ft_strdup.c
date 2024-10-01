/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 19:12:17 by mbah              #+#    #+#             */
/*   Updated: 2024/10/01 19:20:10 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_strdup(char *str)
{
    int         len;
    char    *res;
    int         i;

    len = ft_strlen(str);
    i = 0;
    if(!(res = malloc(sizeof(char) * (len + 1))))
        return (NULL);
    while (str[i])
    {
        res[i] = str[i];
        i++;
    }
    res[i + 1] = '\0';
    return (res);
}
