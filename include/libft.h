/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbah <mbah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:05:07 by mbah              #+#    #+#             */
/*   Updated: 2024/10/01 19:18:34 by mbah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

int         ft_atoi(char *str);
int         ft_isalnum(char c);
int         ft_isalpha(int c);
int         ft_isascii(int c);
int         ft_isdigit(int c);
int         ft_islower(int c);
int         ft_isupper(int c);
int         ft_isspace(int c);
int         ft_isprint(int c);
void    ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
char    *ft_itoa(int n);
char    *ft_strdup(char *str);

#endif