/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandreo <aandreo@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 20:55:45 by aandreo           #+#    #+#             */
/*   Updated: 2025/07/26 00:22:33 by aandreo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (range == NULL)
		return (-1);
	if ((min - max) >= 0)
	{
		*range = NULL;
		return (0);
	}
	return (max - min);
}

// int main(void)
// {
// 	int size;
// 	int min;
// 	int *range;
// 	int max;

// 	min = 7;
// 	max = 15;
// 	size = ft_ultimate_range(&range, min, max);
// 	printf("la taille du tab est %d\n", size);
// 	if(range != 0)
// 		free(range);
// 	range = (NULL);
// 	return (0);
// }
