/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjoao-fr <mjoao-fr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:30:39 by mjoao-fr          #+#    #+#             */
/*   Updated: 2025/04/07 16:39:22 by mjoao-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t					i;
	const unsigned char		*str1;
	const unsigned char		*str2;

	i = 0;
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (i < (n - 1) && str1[i] == str2[i]
		&& str1[i] && str2[i])
		i++;
	return (str1[i] - str2[i]);
}

/*int	main(void)
{
	printf("%d\n", ft_strncmp("abc", "abc", 2));    // 0 (iguais)
	printf("%d\n", ft_strncmp("abc", "abd", 3));    // -1 ('c' - 'd')
	printf("%d\n", ft_strncmp("hello", "hellz", 4)); 
	// 0 (iguais até o 4º caractere)
	printf("%d\n", ft_strncmp("hello", "hellz", 5)); // -11 ('o' - 'z')
	printf("%d\n", ft_strncmp("abc", "abcd", 5));  // -100 ('\0' - 'd')
	printf("%d\n", ft_strncmp("abcd", "abc", 5));  // 100 ('d' - '\0')
	printf("%d\n", ft_strncmp("a", "abc", 1));     // 0 (comparou só 'a')
	printf("%d\n", ft_strncmp("abc", "a", 2));     
	// positivo ('b' - '\0')
	printf("%d\n", ft_strncmp("abc", "abc", 0));  
	// 0 (n == 0, sem comparação)	
}*/
