/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:05:39 by mbah              #+#    #+#             */
/*   Updated: 2024/10/01 19:23:22 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int     ft_intlen(int n)
{
    int     size;

    if (n <= 0)
        size = 1;
    else
        size = 0;
    while (n != 0)
    {
        n = n / 10;
        size++;
    }
    return (size);
}
char    *ft_isneg(int n)
{
    int len = ft_intlen(n);
    char *res = malloc(sizeof(char) * (len + 1));
    if (!res)
        return (NULL);
    res[len--] = '\0';
    if (n == 0)
        res[0] = '0';
    else
    {
        if (n == -2147483648)
            return (ft_strdup("-2147483648"));
        n = -n;
        res[0] = '-';
        while (n > 0)
        {
            res[len--] = (n % 10) + '0';
            n /= 10;
        }
    }
    return (res);
}

char    *ft_ispos(int n)
{
    int len = ft_intlen(n);
    char *res = malloc(sizeof(char) * (len + 1));
    if (!res)
        return (NULL);
    res[len--] = '\0';
    if (n == 0)
        res[0] = '0';
    else
    {
        while (n > 0)
        {
            res[len--] = (n % 10) + '0';
            n /= 10;
        }
    }
    return (res);
}

char    *ft_itoa(int n)
{
    if (n == 0)
    {
        char *res = malloc(2);
        if (!res)
            return (NULL);
        res[0] = '0';
        res[1] = '\0';
        return res;
    }
    if (n < 0)
        return (ft_isneg(n));
    return (ft_ispos(n));
}
