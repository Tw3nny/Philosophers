/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matisgutierreztw3nny <matisgutierreztw3    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 17:16:00 by matisgutier       #+#    #+#             */
/*   Updated: 2026/06/29 23:23:17 by matisgutier      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "includes/philo.h"

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