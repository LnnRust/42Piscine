/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_manage.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandreo <aandreo@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 19:50:57 by aandreo           #+#    #+#             */
/*   Updated: 2025/07/27 21:46:17 by aandreo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

t_dict	*parse_dict(char *filename)
{
	t_dict	*dict;

	dict = malloc(sizeof(t_dict));
	if (!dict)
		return (NULL);
	dict->entries = NULL;
	dict->size = 0;
	dict->capacity = 0;
	if (!read_dict(filename, dict))
	{
		free_dict(dict);
		return (NULL);
	}
	return (dict);
}

void	free_dict(t_dict *dict)
{
	int	i;

	i = 0;
	if (!dict || !dict->entries)
		return ;
	while (i < dict->size)
	{
		free(dict->entries[i].chiffre);
		free(dict->entries[i].valeur);
		i++;
	}
	free(dict->entries);
	free(dict);
}

int	add_to_dict(t_dict *dict, char *key, char *value)
{
	if (dict->size >= dict->capacity)
		if (!resize_dict(dict))
			return (0);
	dict->entries[dict->size].chiffre = ft_strdup(key);
	if (!dict->entries[dict->size].chiffre)
		return (0);
	dict->entries[dict->size].valeur = ft_strdup(value);
	if (!dict->entries[dict->size].valeur)
	{
		free(dict->entries[dict->size].chiffre);
		return (0);
	}
	dict->size++;
	return (1);
}

char	*find_in_dict(t_dict *dict, char *key)
{
	int	i;

	if (!dict || !key)
		return (NULL);
	i = 0;
	while (i < dict->size)
	{
		if (ft_strcmp(dict->entries[i].chiffre, key) == 0)
			return (dict->entries[i].valeur);
		i++;
	}
	return (NULL);
}

int	resize_dict(t_dict *dict)
{
	int		new_capacity;
	int		i;
	t_entry	*new_entries;

	i = -1;
	if (dict->capacity == 0)
		new_capacity = 4;
	else
		new_capacity = dict->capacity * 2;
	new_entries = malloc(sizeof(t_entry) * new_capacity);
	if (!new_entries)
		return (0);
	while (++i < dict->size)
		new_entries[i] = dict->entries[i];
	free(dict->entries);
	dict->entries = new_entries;
	dict->capacity = new_capacity;
	return (1);
}
