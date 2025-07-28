/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandreo <aandreo@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 00:58:12 by aandreo           #+#    #+#             */
/*   Updated: 2025/07/17 06:30:54 by aandreo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb -1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i != 0)
	{
		nb *= i;
		i--;
	}
	return (nb);
}

// int main(void)
// {
// 	printf("%d", ft_iterative_factorial(5));
// 	return(0);
// }