/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_extract.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandreo <aandreo@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 19:50:47 by aandreo           #+#    #+#             */
/*   Updated: 2025/07/27 20:49:32 by aandreo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

char	*power_chiffre(int index)
{
	int		i;
	char	*power;

	if (index == 0)
		return (NULL);
	power = malloc(index * 3 + 2);
	if (!power)
		return (NULL);
	power[0] = '1';
	i = 1;
	while (i <= index * 3)
		power[i++] = '0';
	power[i] = '\0';
	return (power);
}

void	extract_triplet(char *number, int len, int index, char *buffer)
{
	int	start;
	int	i;

	start = len - (index + 1) * 3;
	if (start < 0)
		start = 0;
	i = 0;
	while (start + i < len && i < 3)
	{
		buffer[i] = number[start + i];
		i++;
	}
	add_zeros(buffer, i);
}

void	add_zeros(char *buffer, int current_len)
{
	int	i;
	int	j;

	i = current_len;
	while (i < 3)
	{
		j = i;
		while (j > 0)
		{
			buffer[j] = buffer[j - 1];
			j--;
		}
		buffer[0] = '0';
		i++;
	}
	buffer[3] = '\0';
}
