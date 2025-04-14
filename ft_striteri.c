/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjoao-fr <mjoao-fr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:21:25 by mjoao-fr          #+#    #+#             */
/*   Updated: 2025/04/14 14:56:21 by mjoao-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*void    f(unsigned int a, char *c)
{
    if (a % 2 == 0 && *c >= 'a' && *c <= 'z')
    {
        *c = *c - 32;
    }
}

int main(void)
{
    char s[] = "maria";
    ft_striteri(s, f);
    printf("%s\n", s);
}*/