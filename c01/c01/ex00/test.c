/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandreo <aandreo@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 03:16:10 by aandreo           #+#    #+#             */
/*   Updated: 2025/07/20 03:38:47 by aandreo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int swap_cases(char *str)
{
	int i = 0;

	while(str[i] != 0)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			i++;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
			i++;
		}
		else
			i++;
	}
	i = 0;
	while (str[i] != 0)
		{
			write (1, &str[i], 1);
			i++;
		}
	if (str == 0)
		write(1, "\n", 1);
	return (0);
}

int main(void)
{
	char str[] = "coucou";
	swap_cases(str);
	return(0);
	
}