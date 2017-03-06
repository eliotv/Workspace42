/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evanheum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 17:29:52 by evanheum          #+#    #+#             */
/*   Updated: 2017/03/02 15:42:09 by evanheum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int ft_isalnum(int c);
int ft_isdigit(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isprint(int c);
void ft_putchar(char c);
size_t ft_strlen(char *str);
void ft_putstr(char *str);
int ft_strcmp(char *s1, char *s2);
void ft_swap(int *a, int *b);
void *ft_memcpy(void *dst, const void *src, size_t n);
void ft_bzero(void *s, size_t n);

#endif
