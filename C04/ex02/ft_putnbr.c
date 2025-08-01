/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandreo <aandreo@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 01:00:52 by aandreo           #+#    #+#             */
/*   Updated: 2025/07/16 01:11:53 by aandreo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar ('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr (nb / 10);
		nb = nb % 10;
	}
	ft_putchar(nb + '0');
}

// int main(void)
// {
// 	ft_putnbr(-2147483648);
// 	return(0);
// }