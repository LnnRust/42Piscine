/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandreo <aandreo@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 03:14:23 by aandreo           #+#    #+#             */
/*   Updated: 2025/07/26 18:32:27 by aandreo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int ft_total_len(int size, char **strs, char *sep)
{
	int len;
	int i;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	return (len + ft_strlen(sep) * (size - 1));
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int i;
	char *res;
	int tab_size;

	tab_size = sizeof(strs);
	if (size == 0 || size > tab_size)
	{
		res = malloc();
		return (res);
	}
	res = malloc(sizeof(char) * (ft_total_len(size, strs, sep) + 1));
	if (!res)
		return (NULL);
	res[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(res, strs[i]);
		if (i++ < size - 1)
			ft_strcat(res, sep);
	}
	return (res);
}

int	main(void)
{
	char	*tab[] = {"awdwd", "wadwad"};
	char	*sep = "oooooo";
	char	*result;

	result = ft_strjoin(5, tab, sep);
	if (result != NULL)
	{
		printf("Resultat : %s\n", result);
		free(result);
	}
	else
	{
		printf("Erreur allocation");
	}
	return (0);
}