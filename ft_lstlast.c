/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:17:34 by mjoao-fr          #+#    #+#             */
/*   Updated: 2025/04/16 20:57:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

/*int	main(void)
{
	t_list	*lst;
	t_list	*ptr;
	t_list	*ptr1;
	t_list	*result;

	lst = ft_lstnew((int *)(intptr_t)1);
	ptr = ft_lstnew((int *)(intptr_t)2);
	ptr1 = ft_lstnew((int *)(intptr_t)5);
	lst->next = ptr;
	ptr->next = ptr1;
	result = ft_lstlast(lst);
	printf("%d\n", (int)(intptr_t)result->content);
	free(lst);
	free(ptr);
	free(ptr1);
	return (0);
}*/