/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjoao-fr <mjoao-fr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:20:49 by mjoao-fr          #+#    #+#             */
/*   Updated: 2025/04/14 14:56:18 by mjoao-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*ptr;
	int		size;

	size = ft_strlen(s);
	ptr = (char *)malloc(sizeof(char) * (size + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*char    f(unsigned int a, char c)
{
    if (a % 2 == 0 && c >= 'a' && c <= 'z')
    {
        c = c - 32;
    }
    return (c);
}

int main(void)
{
    char s[] = "maria";
    char *result = ft_strmapi(s, f);
    printf("%s\n", result);
    free(result);
}*/