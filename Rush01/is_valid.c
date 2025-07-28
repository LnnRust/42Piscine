/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandreo <aandreo@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 20:55:31 by aandreo           #+#    #+#             */
/*   Updated: 2025/07/20 21:02:36 by aandreo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_valid_views_row(int tab[6][6], int x)
{
	int	i;
	int	count;
	int	val_max;

	count = 1;
	i = 1;
	val_max = tab[x][i];
	while (i < 5)
	{
		if (tab[x][i] > val_max)
		{
			val_max = tab[x][i];
			count++;
		}
		i++;
	}
	if (count == tab[x][0])
		return (1);
	else
		return (0);
}

int	is_valid_views_col(int tab[6][6], int y)
{
	int	i;
	int	count;
	int	val_max;

	count = 1;
	i = 1;
	val_max = tab[i][y];
	while (i < 5)
	{
		if (tab[i][y] > val_max)
		{
			val_max = tab[i][y];
			count++;
		}
		i++;
	}
	if (count == tab[0][y])
		return (1);
	else
		return (0);
}

int	rev_valid_views_row(int tab[6][6], int x)
{
	int	i;
	int	count;
	int	val_max;

	count = 1;
	i = 4;
	val_max = tab[x][i];
	while (i > 0)
	{
		if (tab[x][i] > val_max)
		{
			val_max = tab[x][i];
			count++;
		}
		i--;
	}
	if (count == tab[x][5])
		return (1);
	return (0);
}

int	rev_valid_views_col(int tab[6][6], int y)
{
	int	i;
	int	count;
	int	val_max;

	count = 1;
	i = 4;
	val_max = tab[i][y];
	while (i > 0)
	{
		if (tab[i][y] > val_max)
		{
			val_max = tab[i][y];
			count++;
		}
		i--;
	}
	if (count <= tab[5][y])
		return (1);
	else
		return (0);
}

int	is_valid_digits(int tab[6][6], int x, int y)
{
	int	i;

	i = 1;
	while (i < y)
	{
		if (tab[x][i] == tab[x][y])
			return (0);
		i++;
	}
	i = 1;
	while (i < x)
	{
		if (tab[i][y] == tab[x][y])
			return (0);
		i++;
	}
	return (1);
}
