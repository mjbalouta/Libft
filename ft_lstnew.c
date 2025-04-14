/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjoao-fr <mjoao-fr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:37:21 by mjoao-fr          #+#    #+#             */
/*   Updated: 2025/04/14 15:46:32 by mjoao-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ptr;

	ptr = malloc(sizeof(t_list));
	if (!ptr)
		return (NULL);
	
	ptr->content = content;
	ptr->next = NULL;

	return (ptr);
}

/*int	main(void)
{
	int	*content;
	int	a = 42;
	content = &a;
	t_list	*result = ft_lstnew(content); 
	printf("%d\n", *(int *)result->content); //dereferencing *result and cast it to (int *)
}*/