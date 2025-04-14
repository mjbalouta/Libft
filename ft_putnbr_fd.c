/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjoao-fr <mjoao-fr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:23:34 by mjoao-fr          #+#    #+#             */
/*   Updated: 2025/04/14 14:47:35 by mjoao-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;
	char	array[10];
	int		i;

	num = n;
	i = 0;
	if (num == 0)
		write (fd, "0", 1);
	if (num < 0)
	{
		num = -num;
		write(fd, "-", 1);
	}
	while (num > 0)
	{
		array[i++] = (num % 10) + '0';
		num = num / 10;
	}
	while (i >= 0)
		write(fd, &array[i--], 1);
}

/*int main(void)
{
    int n = 123;
    ft_putnbr_fd(n, 1);
    printf("\n%d\n", INT_MIN);
    return (0);
}*/