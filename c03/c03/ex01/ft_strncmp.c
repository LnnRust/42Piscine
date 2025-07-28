/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandreo <aandreo@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 23:14:41 by aandreo           #+#    #+#             */
/*   Updated: 2025/07/14 19:10:12 by aandreo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while( i < n && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (n == 0)
		return(0); 
	return (s1[i] - s2[i]);
}

// int main(void)
// 	{
// 		int i;
// 		char s1[] = "awdadwa";
// 		char s2[] = "aaaaaaaa";
// 		i = ft_strncmp(s1, s2, 1);
// 		printf("%d", i);
// 		return(0);
// 	}