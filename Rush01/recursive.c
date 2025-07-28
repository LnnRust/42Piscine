/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursive.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandreo <aandreo@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 20:45:35 by aandreo           #+#    #+#             */
/*   Updated: 2025/07/20 21:03:46 by aandreo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	solved(int tab[6][6]);
int	is_valid_digits(int tab[6][6], int x, int y);
int	is_valid_views_row(int tab[6][6], int x);
int	is_valid_views_col(int tab[6][6], int y);
int	rev_valid_views_row(int tab[6][6], int x);
int	rev_valid_views_col(int tab[6][6], int y);

int	is_valid(int tab[6][6], int x, int y)
{
	if (is_valid_views_row(tab, x) == 0)
		return (0);
	if (is_valid_views_col(tab, y) == 0)
		return (0);
	if (y == 4)
		if (rev_valid_views_row(tab, x) == 0)
			return (0);
	if (x == 4)
		if (rev_valid_views_col(tab, y) == 0)
			return (0);
	return (1);
}

int	ft_recursive(int tab[6][6], int x, int y)
{
	int	i;

	if (x == 4 && y == 5)
		return (solved(tab));
	i = 1;
	while (i < 5)
	{
		if (!(y == 5))
			tab[x][y] = i;
		if (is_valid_digits(tab, x, y) || y == 5)
		{
			if (y == 5)
			{
				if (ft_recursive(tab, x + 1, y - 4))
					return (1);
			}
			else if (ft_recursive(tab, x, y + 1))
			{
				return (1);
			}
		}
		i++;
	}
	return (0);
}

int	solved(int tab[6][6])
{
	int	j;
	int	i;

	i = 1;
	j = 1;
	while (i < 5)
	{
		while (j < 5)
		{
			if (is_valid(tab, i, j) == 0)
				return (0);
			j++;
		}
		j = 1;
		i++;
	}
	return (1);
}

int	grid_error(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 2)
		return (1);
	while (argv[1][i] >= ' ' && argv[1][i] <= '~')
	{
		if (i % 2 == 0)
		{
			if (!(argv[1][i] >= '1' && argv[1][i] <= '4'))
				return (1);
			else
				argv[1][i] -= 48;
		}
		if (i % 2 != 0)
			if (argv[1][i] != ' ')
				return (1);
		i++;
	}
	if (i != 31)
		return (1);
	return (1);
}
