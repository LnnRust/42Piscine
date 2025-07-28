/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandreo <aandreo@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 17:56:41 by aandreo           #+#    #+#             */
/*   Updated: 2025/07/14 17:26:11 by aandreo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	a;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] != s2[i] && s1[i] != 0 && s2[j] != 0)
	{
		a = s1[i] - s2[i];
		i++;
		j++;
	}
	if (s1[i] == 0 && s2[i] == 0)
		a = 0;
	return (a);
}

int main(void)
	{
		int i;
		char s1[] = "4wdadwad";
		char s2[] = "4SWDFR";
		i = ft_strcmp(s1, s2);
		printf("%d", i);
		return(0);
	} 