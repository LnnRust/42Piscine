/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandreo <aandreo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 00:33:43 by aandreo           #+#    #+#             */
/*   Updated: 2025/07/13 14:53:30 by aandreo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	char	*c;

	while (*str != 0)
	{
		c = str;
		if (*c < 65 || *c > 122 || (*c > 90 && *c < 97))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// int	main(void)
// {
// 	int		c;
// 	char	str[] = "wa/adawdw";
// 	c = ft_str_is_alpha(str);
// 	printf("%d", c);
// 	return (0);
// }
