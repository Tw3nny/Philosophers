/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tw3nny <tw3nny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 17:16:00 by matisgutier       #+#    #+#             */
/*   Updated: 2026/06/29 23:51:00 by tw3nny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/philo.h"

int	main(int argc, char **argv)
{
	t_sim	sim;

	if (parse_args(&sim, argc, argv))
		return (1);
	if (init_sim(&sim))
		return (1);
	if (start_simulation(&sim))
		return (1);
	return (0);
}
