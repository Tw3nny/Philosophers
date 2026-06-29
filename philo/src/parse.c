/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tw3nny <tw3nny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 16:51:06 by matisgutier       #+#    #+#             */
/*   Updated: 2026/06/29 23:52:19 by tw3nny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/philo.h"

static int	set_value(int *dst, char *arg)
{
	long	n;

	n = ft_atol(arg);
	if (n <= 0)
		return (1);
	*dst = (int)n;
	return (0);
}

int	parse_args(t_sim *sim, int argc, char **argv)
{
	int	i;

	if (argc != 5 && argc != 6)
		return (1);
	i = 1;
	while (argv[i])
	{
		if (!ft_isdigit(argv[i]))
			return (1);
		i++;
	}
	sim->meals_required = -1;
	if (set_value(&sim->amount_philos, argv[1])
		|| set_value(&sim->time_to_die, argv[2])
		|| set_value(&sim->time_to_eat, argv[3])
		|| set_value(&sim->time_to_sleep, argv[4]))
		return (1);
	if (argc == 6 && set_value(&sim->meals_required, argv[5]))
		return (1);
	return (0);
}
