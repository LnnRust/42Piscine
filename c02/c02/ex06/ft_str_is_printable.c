/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandreo <aandreo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 19:25:51 by aandreo           #+#    #+#             */
/*   Updated: 2025/07/13 18:40:24 by aandreo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] < ' ' || str[i] > '~')
			return (0);
		if (str[i] == '\0')
			return (1);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	int		c;
// 	char	str[] = "awhduŠadhawd";
// 	c = ft_str_is_printable(str);
// 	printf("%d", c);
// 	return (0);
// }