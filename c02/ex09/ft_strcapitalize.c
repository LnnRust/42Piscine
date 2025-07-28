/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandreo <aandreo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 21:27:17 by aandreo           #+#    #+#             */
/*   Updated: 2025/07/13 17:40:24 by aandreo          ###   ########.fr       */
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

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	ft_strlowcase(str);
	while (str[i])
	{
		if (j == 1 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
			j = 0;
		}
		else if (j == 1 && str[i] >= 'A' && str[i] <= 'Z')
			j = 0;
		else if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z'))
			&& !(str[i] >= '0' && str[i] <= '9'))
			j = 1;
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str[] = "Hi, how are you? 42wZrds forty-two; fifty+and+one";
// 	ft_strcapitalize(str);
// 	printf("%s", str);
// 	return(0);
// }