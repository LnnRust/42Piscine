/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandreo <aandreo@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 03:45:29 by aandreo           #+#    #+#             */
/*   Updated: 2025/07/30 04:26:37 by aandreo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	int	taille;

	taille = 0;
	while (str[taille] != '\0')
	{
		taille++;
	}
	write(1, str, taille);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/* int	ft_strlen(char *str)
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
} */

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

/* struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			total_size;
	int			i;

	total_size = 0;
	i = 0;
	if (ac == 1)
		return (NULL);
	tab = malloc((ac + 1) * sizeof(t_stock_str));
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
} */

void	ft_show_tab(struct s_stock_str *par)
{
	t_stock_str	*tab;
	int			i;

	i = 0;
	tab = par;
	while (tab[i].str != 0)
	{
		ft_putstr(tab[i].str);
		write(1, "\n", 1);
		ft_putnbr(tab[i].size);
		write(1, "\n", 1);
		ft_putstr(tab[i].copy);
		write(1, "\n", 1);
		i++;
	}
}

/* int main(void)
{
	char *str[] = {
		"chaine1", "chaine2", "chaine3", "chaine4"
	};
	t_stock_str *test = ft_strs_to_tab(4, str);
	ft_show_tab(test);
	return (0);
} */
