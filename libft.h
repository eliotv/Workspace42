/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evanheum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 17:29:52 by evanheum          #+#    #+#             */
/*   Updated: 2017/03/11 14:49:41 by evanheum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIBFT_H
# define LIBFT_H
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int ft_atoi(const char *str);
void ft_bzero(void *s, size_t n);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
void *ft_memalloc(size_t size);
void *ft_memccpy(void *dst, const void *src, int c, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t n);
void ft_memdel(void **ap);
void *ft_memmove(void *dst, const void *src, size_t len);
void *ft_memset(void *b, int c, size_t len);
void ft_putchar(char c);
void ft_putendl(char const *s);
void ft_putnbr(int n);
void ft_putstr(char *str);
char *ft_strcat(char *s1, const char *s2);
char *strchr(const char *s, int c);
void ft_strclr(char *s);
int ft_strcmp(const char *s1, const char *s2);
char *ft_strcpy(char *s1, const char *s2);
void ft_strdel(char **as);
char *ft_strdup(const char *s1);
int ft_strequ(char const *s1, char const *s2);
int ft_strnequ(char const *s1, char const *s2, size_t n);
void ft_striter(char *s, void (*f) (char*));
void ft_striteri(char *s, void (*f) (unsigned int, char*));
char *ft_strjoin(char const *s1, char const *s2);
size_t ft_strlcat(char *dst, const char *src, size_t size);
size_t ft_strlen(const char *str);
char *ft_strmap(const char *s, char (*f)(char));
char *ft_strmapi(const char *s, char (*f)(unsigned int, char));
char *ft_strncat(char *dst, const char *src, size_t n);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strncpy(char *dst, const char *src, size_t len);
char *ft_strnew(size_t size);
char *ft_strnstr(const char *big, const char *little, size_t len);
char *ft_strrchr(const char *s, int c);
char *ft_strstr(const char *big, const char *little);
char *ft_strsub(char const *s, unsigned int start, size_t len);
char *ft_strtrim(char const *s);
void ft_swap(int *a, int *b);
int ft_tolower(int c);
int ft_toupper(int c);

#endif
