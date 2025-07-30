/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandreo <aandreo@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 03:45:21 by aandreo           #+#    #+#             */
/*   Updated: 2025/07/30 04:18:24 by aandreo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	taille;

	taille = 0;
	while (str[taille] != '\0')
	{
		taille++;
	}
	return (taille);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	tsrc;
	int	i;

	i = 0;
	tsrc = ft_strlen(src);
	while (i <= tsrc)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

char	*ft_strdup(char *sr)
{
	char	*copy;
	int		size_sr;

	size_sr = ft_strlen(sr);
	copy = malloc(size_sr + 1 * sizeof(char));
	ft_strcpy(copy, sr);
	return (copy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;

	tab = malloc((ac + 1) * sizeof(t_stock_str));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}

/* int main(void)
{
	char *str[] = {
		"chaine1", "chaine2", "chaine3", "chaine4"
	};
	t_stock_str *test = ft_strs_to_tab(4, str);
	int i = 0;
	while (test[i].str)
	{
		printf("%d\n", test[i].size);
		printf("%s\n", test[i].str);
		printf("%s\n", test[i].copy);
		i++;
	}
	return (0);
} */
