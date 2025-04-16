/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjoao-fr <mjoao-fr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:17:34 by mjoao-fr          #+#    #+#             */
/*   Updated: 2025/04/16 11:13:35 by mjoao-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	t_list	*ptr;
	
	ptr = lst;
	while (ptr->next)
	{
		ptr = ptr->next;
	}
	return (ptr);
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