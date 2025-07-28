/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandreo <aandreo@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 05:08:45 by aandreo           #+#    #+#             */
/*   Updated: 2025/07/17 06:39:31 by aandreo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	if (nb / nb == 1 && nb / 1 == nb)
	{
		if (nb % 5 == 0 || nb % 3 == 0 || nb % 2 == 0)
			return (0);
		return (1);
	}
	return (0);
}

int	ft_find_next_prime(int nb)
{
	if (nb == 2)
		return (nb);
	if (nb == 0)
		return (2);
	if (nb == 1)
		return (2);
	if (nb < 0)
		return (2);
	nb = nb + 1;
	while (ft_is_prime(nb) == 0)
	{
		nb++;
	}
	return (nb);
}

// int main(void)
// {
// 	printf("%d", ft_find_next_prime(83));
// 	return(0);
// }
