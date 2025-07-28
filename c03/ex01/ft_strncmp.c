/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandreo <aandreo@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 23:14:41 by aandreo           #+#    #+#             */
/*   Updated: 2025/07/14 08:02:51 by aandreo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				a;
	int				j;

	i = 0;
	j = 0;
	while (i < n && s1[i] != 0 && s2[j] != 0)
	{
		a = s1[i] - s2[i];
		i++;
		j++;
	}
	if (s1[i] == 0 && s2[i] == 0)
		a = 0;
	return (a);
}

// int main(void)
// 	{
// 		int i;
// 		char s1[] = "aaaaaaa";
// 		char s2[] = "aaaaaaaa";
// 		i = ft_strncmp(s1, s2, 5);
// 		printf("%d", i);
// 		return(0);
// 	}