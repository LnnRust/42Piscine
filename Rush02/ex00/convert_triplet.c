/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_triplet.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandreo <aandreo@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 19:50:54 by aandreo           #+#    #+#             */
/*   Updated: 2025/07/27 20:48:19 by aandreo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

char	*trim_spaces(char *str)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*result;

	if (!str)
		return (NULL);
	start = 0;
	while (str[start] == ' ')
		start++;
	end = ft_strlen(str);
	if (end == 0)
		return (NULL);
	end--;
	while (end > start && str[end] == ' ')
		end--;
	result = malloc(end - start + 2);
	if (!result)
		return (NULL);
	i = 0;
	while (start <= end)
		result[i++] = str[start++];
	result[i] = '\0';
	return (result);
}

char	*build_two_digit_result(char *first, char *second)
{
	char	*trim1;
	char	*trim2;
	char	*result;

	trim1 = trim_spaces(first);
	trim2 = trim_spaces(second);
	if (!trim1 || !trim2)
	{
		free(trim1);
		free(trim2);
		return (NULL);
	}
	result = join_first_number(trim1, trim2);
	free(trim1);
	free(trim2);
	return (result);
}

char	*handle_two_digits(char *nbr, t_dict *dict)
{
	char	str1[3];
	char	str2[2];
	char	*first;
	char	*second;

	if (nbr[0] == '0')
		return (ft_strdup(find_in_dict(dict, &nbr[1])));
	str1[0] = nbr[0];
	str1[1] = '0';
	str1[2] = '\0';
	str2[0] = nbr[1];
	str2[1] = '\0';
	first = find_in_dict(dict, str1);
	second = find_in_dict(dict, str2);
	if (!first || !second)
		return (NULL);
	return (build_two_digit_result(first, second));
}

char	*convert_number(char *nbr, t_dict *dict)
{
	char	*temp;

	if (!nbr)
		return (NULL);
	if ((ft_strlen(nbr) == 2 && nbr[0] == '0' && nbr[1] == '0')
		|| (ft_strlen(nbr) == 3 && nbr[0] == '0'
			&& nbr[1] == '0' && nbr[2] == '0'))
		return (NULL);
	temp = find_in_dict(dict, nbr);
	if (temp)
		return (ft_strdup(temp));
	if (ft_strlen(nbr) == 2)
		return (handle_two_digits(nbr, dict));
	return (NULL);
}

char	*convert_hundreds(char c, t_dict *dict)
{
	char	chiffre[2];
	char	*hundred_word;
	char	*dup;
	char	*result;

	chiffre[0] = c;
	chiffre[1] = '\0';
	if (c == '0')
		return (NULL);
	hundred_word = find_in_dict(dict, chiffre);
	if (!hundred_word)
		return (NULL);
	dup = ft_strdup(hundred_word);
	if (!dup)
		return (NULL);
	result = ft_strjoin(dup, " hundred");
	free(dup);
	return (result);
}
