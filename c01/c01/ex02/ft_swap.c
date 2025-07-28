/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandreo <aandreo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 23:22:19 by aandreo           #+#    #+#             */
/*   Updated: 2025/07/10 15:54:22 by aandreo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}

// int	main(void)
// {
// 	int	a;

// 	int	b;

// 	a = 10;
// 	b = 5;

// 	printf("%d %d",b , a);
// 	ft_swap(&a, &b);
// 	printf(" %d %d",b , a);
// 	return (0);
// }
