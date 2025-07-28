/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandreo <aandreo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 19:51:15 by aandreo           #+#    #+#             */
/*   Updated: 2025/07/13 14:55:26 by aandreo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = (str[i] +32);
		}
		i++;
	}
	return (str);
}

// int main(void)
// {
// 	char	*c;
// 	char	str[] = "AawawdwaH";
// 	c = ft_strlowcase(str);
// 	puts(c);
// 	return (0);
// }