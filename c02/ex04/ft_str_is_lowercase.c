/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandreo <aandreo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 19:19:56 by aandreo           #+#    #+#             */
/*   Updated: 2025/07/13 14:54:07 by aandreo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	char	*c;

	while (*str != 0)
	{
		c = str;
		if (*c < 97 || *c > 122)
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
// 	char	str[] = "wdawdwa";
// 	c = ft_str_is_lowercase(str);
// 	printf("%d", c);
// 	return (0);
// }