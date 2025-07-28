/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandreo <aandreo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 18:34:45 by aandreo           #+#    #+#             */
/*   Updated: 2025/07/13 14:53:48 by aandreo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	char	*c;

	while (*str != 0)
	{
		c = str;
		if (*c < 48 || *c > 57)
		{
			return (0);
		}
		if (*c == '\0')
			return (1);
		str++;
	}
	return (1);
}

// int	main(void)
// {
// 	int		c;
// 	char	str[] = "";
// 	c = ft_str_is_numeric(str);
// 	printf("%d", c);
// 	return (0);
// }