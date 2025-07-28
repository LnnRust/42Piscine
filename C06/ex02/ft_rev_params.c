/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_rev_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandreo <aandreo@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 09:10:20 by aandreo           #+#    #+#             */
/*   Updated: 2025/07/21 11:34:33 by aandreo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	argc--;
	while (argc != 0)
	{
		i = 0;
		while (argv[argc][i])
		{
			write (1, &argv[argc][i], 1);
			i++;
		}
		argc--;
		write (1, "\n", 1);
	}
	return (0);
}
