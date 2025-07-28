/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandreo <aandreo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 11:44:15 by aandreo           #+#    #+#             */
/*   Updated: 2025/07/10 15:51:12 by aandreo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	result;
	int	rest;

	result = a / b;
	rest = a % b;
	*div = result;
	*mod = rest;
}

// int	main(void)
// {
// 	int a;
// 	int b;
// 	int div;
// 	int mod;

// 	a = 10;
// 	b = 15;
// ft_div_mod( a, b, &div, &mod);
// printf("%d, %d", div, mod);
// }