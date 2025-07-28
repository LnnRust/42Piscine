/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandreo <aandreo@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 17:56:41 by aandreo           #+#    #+#             */
/*   Updated: 2025/07/14 19:10:16 by aandreo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while(s1[i] != 0 && s2[i] != 0 && s1[i] == s2[i])
	{	
		i++;
	}	
	return (s1[i] - s2[i]);
}

// int main(void)
// 	{
// 		int i;
// 		char s1[] = "Cbc";
// 		char s2[] = "abc";
// 		i = ft_strcmp(s1, s2);
// 		printf("%d", i);
// 		return(0);
// 	} 