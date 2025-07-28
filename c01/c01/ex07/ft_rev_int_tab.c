/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandreo <aandreo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:58:02 by aandreo           #+#    #+#             */
/*   Updated: 2025/07/10 20:35:29 by aandreo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	a;
	int	j;

	j = size - 1;
	i = 0;
	while (i < size / 2)
	{
		a = tab[i];
		tab[i] = tab[j];
		tab[j] = a;
		i++;
		j--;
	}
}

// int	main(void)
// {
// 	int	i;
// 	int	tab[6] = {1, 2, 3, 4, 5, 6};

// 	ft_rev_int_tab(tab, 6);
// 	while (i < 6)
// 	{
// 		printf("%d", tab[i]);
// 		i++;
// 	}
// } 
