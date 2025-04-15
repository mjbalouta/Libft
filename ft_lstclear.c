/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjoao-fr <mjoao-fr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:09:35 by mjoao-fr          #+#    #+#             */
/*   Updated: 2025/04/15 16:06:06 by mjoao-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	while (*lst)
	{
		temp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = temp;
	}
}

/*int	main(void)
{
	t_list	*lst;
	t_list	*ptr;
	int *a = malloc(sizeof(int));
	int *b = malloc(sizeof(int));
	
	*a = 1;
	*b = 2;
	lst = ft_lstnew(a);
	ptr = ft_lstnew(b);
	lst->next = ptr;
	ptr->next = NULL;
	ft_lstclear(&lst, free);
	return (0);
}*/