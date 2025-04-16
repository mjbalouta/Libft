/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:38:49 by mjoao-fr          #+#    #+#             */
/*   Updated: 2025/04/16 21:28:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;
	
	if (!lst || !new)
		return;
	if (!*lst)
	{
		*lst = new;
		return;	
	}
	ptr = *lst;
	while (ptr->next)
	{
		ptr = ptr->next;
	}
	ptr->next = new;
}

/*int	main(void)
{
	t_list *lst;
	t_list *ptr;
	t_list	*new;
	t_list	*temp;

	lst = ft_lstnew((int *)(intptr_t)1);
	ptr = ft_lstnew((int *)(intptr_t)2);
	new = ft_lstnew((int *)(intptr_t)3);
	lst->next = ptr;
	ft_lstadd_back(&lst, new);
	while (lst)
	{
		printf("%d\n", (int)(intptr_t)lst->content);
		lst = lst->next;
	}
	//free memory
	while (lst)
	{
		temp = lst->next;
		free(lst);
		lst = temp;
	}
	return 0;
}*/