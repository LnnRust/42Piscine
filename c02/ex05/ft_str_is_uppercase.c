/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandreo <aandreo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 19:23:04 by aandreo           #+#    #+#             */
/*   Updated: 2025/07/13 14:54:29 by aandreo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	char	*c;

	while (*str != 0)
	{
		c = str;
		if (*c < 65 || *c > 90)
			return (0);
		if (*c == '\0')
			return (1);
		str++;
	}
	return (1);
}

// int	main(void)
// {
// 	int		c;
// 	char	str[] = "AWDADH";
// 	c = ft_str_is_uppercase(str);
// 	printf("%d", c);
// 	return (0);
// }