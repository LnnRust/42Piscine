/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandreo <aandreo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 16:41:21 by aandreo           #+#    #+#             */
/*   Updated: 2025/07/13 18:39:36 by aandreo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = (str[i] -32);
		i++;
	}
	return (str);
}

// int main(void)
// {
// 	char	*c;
// 	char	str[] = "AawawdwaH";
// 	c = ft_strupcase(str);
// 	puts(c);
// 	return (0);
// }