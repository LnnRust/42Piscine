/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandreo <aandreo@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 19:32:55 by aandreo           #+#    #+#             */
/*   Updated: 2025/07/18 19:58:16 by aandreo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			ft_swap (&tab[i], &tab[i + 1]);
			ft_sort_int_tab (tab, size);
		}
		i++;
	}
}

// int main(void)
// {
// 	int i;
// 	int tab[5] = {8, 5, 4, 6, 1};
// 	ft_sort_int_tab(tab, 5);
// 	printf("%d", tab[0]);
// 	printf("%d", tab[1]);
// 	printf("%d", tab[2]);
// 	printf("%d", tab[3]);
// 	printf("%d", tab[4]);
// 	return (0);
// }