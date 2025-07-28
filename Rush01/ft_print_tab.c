/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandreo <aandreo@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 21:45:36 by mterrier          #+#    #+#             */
/*   Updated: 2025/07/20 21:52:19 by aandreo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_tab(int tab[6][6])
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (i < 5)
	{
		while (j < 5)
		{
			ft_putchar(tab[i][j] + 48);
			j++;
		}
		ft_putchar('\n');
		j = 1;
		i++;
	}
}
