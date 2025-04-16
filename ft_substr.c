/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjoao-fr <mjoao-fr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:30:00 by mjoao-fr          #+#    #+#             */
/*   Updated: 2025/04/16 16:38:12 by mjoao-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief  allocates memory (using malloc(3)) and returns a
substring from the string ’s’.
The substring starts at index ’start’ and has a
maximum length of ’len’.
 */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size;
	char	*src;
	
	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if ((size_t)start >= size)
		return ('\0');
	src = (char *)s + start;
	if (len > size)
		
		
		

	
	
}

// int main(void)
// {
//     char const s[]= "maria";
//     char *result = ft_substr(s, 2, 10);
//     printf("%s\n", result);
//     return(0);
// }




// size_t	i;
	// char	*ptr;
	// size_t	size;
	
	// if (!s)
	// 	return (NULL);
	// size = ft_strlen(s);
	// i = 0;
	// if ((size_t)start >= size)
	// 	return (ft_strdup(""));
	// ptr = (char *)malloc((sizeof(char)) * (len + 1));
	// if (ptr == NULL)
	// 	return (NULL);
	// while (i < len)
	// 	ptr[i++] = s[start++];
	// ptr[i] = '\0';
	// return (ptr);