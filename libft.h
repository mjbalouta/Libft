/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjoao-fr <mjoao-fr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:31:38 by mjoao-fr          #+#    #+#             */
/*   Updated: 2025/04/11 14:21:18 by mjoao-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H //this structure prevents multiple inclusions of this file
# define LIBFT_H

//including libraries for all the .c files
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include <unistd.h>

//function prototypes

int	ft_isalpha(int c);

int	ft_isdigit(int c);

int	ft_isalnum(int c);

int	ft_isascii(int c);

int	ft_isprint(int c);

size_t	ft_strlen(const char *s);

void    *ft_memset(void *s, int c, size_t n);

void	ft_bzero(void *s, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

size_t  ft_strlcat(char *dst, const char *src, size_t size);

int ft_toupper(int c);

int	ft_tolower(int c);

char	*ft_strchr(const char *s, int c);

char	*ft_strrchr(const char *s, int c);

int	ft_strncmp(const char *s1, const char *s2, size_t n);

void	*ft_memchr(const void *s, int c, size_t n);

int	ft_memcmp(const void *s1, const void *s2, size_t n);

char	*ft_strnstr(const char *big, const char *little, size_t len);

int	ft_atoi(const char *nptr);

void	*ft_calloc(size_t nmemb, size_t size);

char	*ft_strdup(const char *s);

#endif
