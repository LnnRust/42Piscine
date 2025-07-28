/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandreo <aandreo@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:14:22 by mterrier          #+#    #+#             */
/*   Updated: 2025/07/20 23:09:03 by aandreo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
void	ft_print_tab(int tab[6][6]);
int		solved(int tab[6][6]);
int		ft_recursive(int tab[6][6], int x, int y);;
int		grid_error(int argc, char **argv);

void	grid_init(char **argv, int tab[6][6])
{
	tab[0][1] = argv[1][0];
	tab[0][2] = argv[1][2];
	tab[0][3] = argv[1][4];
	tab[0][4] = argv[1][6];
	tab[1][0] = argv[1][16];
	tab[1][5] = argv[1][24];
	tab[2][0] = argv[1][18];
	tab[2][5] = argv[1][26];
	tab[3][0] = argv[1][20];
	tab[3][5] = argv[1][28];
	tab[4][0] = argv[1][22];
	tab[4][5] = argv[1][30];
	tab[5][1] = argv[1][8];
	tab[5][2] = argv[1][10];
	tab[5][3] = argv[1][12];
	tab[5][4] = argv[1][14];
}

int	main(int argc, char **argv)
{
	int	tab[6][6];

	if (argc != 2)
	{
		ft_putstr("Error\n");
		return (1);
	}
	if (!(grid_error(argc, argv)))
	{
		ft_putstr("Error\n");
		return (1);
	}
	grid_init(argv, tab);
	if (ft_recursive(tab, 1, 1))
		ft_print_tab(tab);
	else
		ft_putstr("Error\n");
	return (0);
}
