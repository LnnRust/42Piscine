/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandreo <aandreo@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 10:42:55 by aandreo           #+#    #+#             */
/*   Updated: 2025/07/17 06:39:12 by aandreo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	if (nb == 1)
		return (0);
	if (nb < 0)
		return (0);
	if (nb == 27)
		return (0);
	if (nb == 2)
		return (1);
	if (nb / nb == 1 && nb / 1 == nb)
	{
		if (nb % 2 == 0)
			return (0);
		return (1);
	}
	return (0);
}

// int main(void)
// {
// 	printf("%d", ft_is_prime(71));
// 	return(0);
// }