/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_process.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandreo <aandreo@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 19:50:51 by aandreo           #+#    #+#             */
/*   Updated: 2025/07/27 21:16:41 by aandreo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

char	*process_single_triplet(char *number, int len, int i, t_dict *dict)
{
	char	buffer[4];
	char	*processed;

	extract_triplet(number, len, i, buffer);
	if (ft_strcmp(buffer, "000") == 0)
		return (NULL);
	processed = process_triplet(buffer, i, dict);
	return (processed);
}

char	*append_triplet(char *result, char *processed)
{
	char	*tmp;

	if (!result)
		return (processed);
	tmp = join_with_space(result, processed);
	free(result);
	free(processed);
	return (tmp);
}

char	*gestion_triplets(char *number, int num_triplets, int len, t_dict *dict)
{
	int		i;
	char	*result;
	char	*processed;

	result = NULL;
	i = num_triplets - 1;
	while (i >= 0)
	{
		processed = process_single_triplet(number, len, i, dict);
		if (processed)
			result = append_triplet(result, processed);
		i--;
	}
	if (!result)
		return (ft_strdup("zero"));
	return (result);
}

char	*convert_large_number(char *number, t_dict *dict)
{
	int		len;
	int		num_triplets;

	len = ft_strlen(number);
	if (len == 1 && number[0] == '0')
		return (ft_strdup("zero"));
	num_triplets = (len + 2) / 3;
	return (gestion_triplets(number, num_triplets, len, dict));
}

char	*process_triplet(char *buffer, int index, t_dict *dict)
{
	char	*triplet_result;
	char	*power_chiff;
	char	*power_word;
	char	*tmp;

	triplet_result = convert_triplet(buffer, dict);
	if (!triplet_result)
		return (NULL);
	power_chiff = power_chiffre(index);
	if (power_chiff)
	{
		power_word = find_in_dict(dict, power_chiff);
		free(power_chiff);
		if (power_word)
		{
			tmp = join_with_space(triplet_result, power_word);
			free(triplet_result);
			triplet_result = tmp;
		}
	}
	return (triplet_result);
}
