/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjoao-fr <mjoao-fr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:28:35 by mjoao-fr          #+#    #+#             */
/*   Updated: 2025/04/09 14:43:14 by mjoao-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Allocates memory (using malloc(3)) and returns a
copy of ’s1’ with characters from ’set’ removed
from the beginning and the end.
 * 
 */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		start;
	char	*ptr;
	int		size;
	int		end;

	i = 0;
	j = 0;
	start = 0;
	end = 0;
	while (s1[i])
	{
		while (set[j])
		{
			if (s1[i] == set[j++])
				start++;
		}
		i++;
	}
	size = ft_strlen(s1 + start);
	j = 0;
	while (size > 0)
	{
		while (set[j])
		{
			if (s1[size - 1] == set[j++])
				end++;
		}
		size--;	
	}
	ptr = (char *)malloc(sizeof(char) * (size - end + 1));
	i = 0;
	while (i < (size - end))
	{
		ptr[i] = s1[start];
	}
	ptr[i] = '\0';
	return (ptr);
}

int	main(void)
{
	char	s1[] = "!!maria!!!";
	char	set[] = ",!.";
	char	*result = ft_strtrim(s1, set);
	printf("%s", result);
	return (0);
}