/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandreo <aandreo@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 11:43:53 by aandreo           #+#    #+#             */
/*   Updated: 2025/07/17 15:07:27 by aandreo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_result(int nbr1, int nbr2)
{
	char	result;

	result = '0' + (nbr1 / 10);
	write(1, &result, 1);
	result = '0' + (nbr1 % 10);
	write(1, &result, 1);
	write(1, " ", 1);
	result = '0' + (nbr2 / 10);
	write(1, &result, 1);
	result = '0' + (nbr2 % 10);
	write(1, &result, 1);
	if (nbr1 != 98 || nbr2 != 99)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int		nbr1;
	int		nbr2;
	char	result;

	result = '0';
	nbr1 = 0;
	nbr2 = 1;
	while (nbr1 <= 98)
	{
		while (nbr2 <= 99)
		{
			ft_print_result(nbr1, nbr2);
			nbr2++;
		}
		nbr1++;
		nbr2 = nbr1 + 1;
		nbr1 = nbr2 - 1;
	}
}

// int main(void)
// {
// 	ft_print_comb2();
// 	return(0);
// }