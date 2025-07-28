/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandreo <aandreo@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 06:19:24 by aandreo           #+#    #+#             */
/*   Updated: 2025/07/17 06:30:36 by aandreo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	temp;

	temp = nb;
	if (power < 0)
		return (0);
	if ((power == 0 && nb == 0) || (power == 0 || nb == 0))
		return (1);
	while (power != 1)
	{
		nb *= temp;
		power--;
	}
	return (nb);
}

// int main(void)
// {
// 	int nb = 5;
// 	int power = 2;
// 	printf("%d", ft_iterative_power(nb, power));
// 	return(0);
// }