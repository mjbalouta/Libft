/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjoao-fr <mjoao-fr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:30:43 by mjoao-fr          #+#    #+#             */
/*   Updated: 2025/04/07 17:25:23 by mjoao-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	count_equals;
	int		position;
	size_t	j;

	i = 0;
	if (!little)
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		count_equals = 0;
		if (big[i] == little[j])
		{
			position = i;
			while (big[i] == little[j++] && (i < len) && big[i++])
				count_equals++;
		}
		if (count_equals == ft_strlen(little))
			return ((char *)big + position);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	const char big[] = "mariajoao";
	const char little[] = "r";
	char *result;
	result = ft_strnstr(big, little, 15);
	if (result == 0)
		printf("0\n");
	else
		printf("%s\n", result);
}*/
