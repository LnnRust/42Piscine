/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandreo <aandreo@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 19:48:26 by aandreo           #+#    #+#             */
/*   Updated: 2025/07/22 02:38:20 by aandreo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	tab = malloc(sizeof(int) * (max - min));
	if (min >= max)
		return (NULL);
	while (i < (max - min))
	{
		tab[i] = i + min;
		i++;
	}
	return (tab);
}

// int main(void)
// {
// 	int min = 20;
// 	int max = 30;
// 	int *tab = ft_range(min, max);
// 	int i = 0;
// 	while(i < (max - min))
// 	{
// 		printf("%d ", tab[i]);
// 		i++; 
// 	}
// 	free(tab);
// 	return(0);
// }