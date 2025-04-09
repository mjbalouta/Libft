/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjoao-fr <mjoao-fr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:43:53 by mjoao-fr          #+#    #+#             */
/*   Updated: 2025/04/09 17:27:03 by mjoao-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Allocates memory (using malloc(3)) and returns an
array of strings obtained by splitting ’s’ using
the character ’c’ as a delimiter. The array must
end with a NULL pointer.
 * 
 */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	word;
	int	count;

	i = 0;
	count = 0;
	word = 1;
	while (s[i])
	{
		if (word == 1 && s[i] != c)
			count++;
		word = 0;
		if (s[i] == c)
			word = 1;
		i++;		
	}
	return (count);
}	
char	*ft_fill_array(char const *s)
{
	int		i;
	char	*ptr;
	int		size;

	i = 0;
	size = ft_strlen(s);
	ptr = (char *)malloc(sizeof(char) * (size + 1));
	if (ptr == NULL)
		return (NULL);
	while (s[i])
	{
			ptr[i] = s[i];
			i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		count_words;
	int		i;
	int		isword;
	int		j;

	i = 0;
	count_words = ft_count_words(s, c);
	array = (char **)malloc(sizeof(char) * (count_words + 1));
	isword = 1;
	if (array == NULL)
		return (NULL);
	while (i < count_words)
	{
		if (isword == 1 && s[i] != c)
		{
			j = 0;
			while(s[i++] != c)
				array[j] = ft_fill_array(s); //aqui esta a copiar a string toda e nao palavra a palavra
		}
		isword = 0;
		if (s[i] == c)
			isword = 1;
		i++;		
	}
	return (array);
}

int	main(void)
{
	char	s[] = " a+maria";
	char	c = '+';
	int		i = 0;
	char **result = ft_split(s, c);
	while (result[i])
		printf("%s\n", result[i++]);
	while (result[i])
		free(result[i++]);
	return (0);
}