/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matisgutierreztw3nny <matisgutierreztw3    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 23:43:46 by matisgutier       #+#    #+#             */
/*   Updated: 2026/06/28 17:17:51 by matisgutier      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <pthread.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_philo	t_philo;

typedef struct s_sim
{
	int				time_to_eat;
	int				time_to_die;
	int				time_to_sleep;
	int				amount_philos;
	int				meals_required; // optionnal
	int				simulation_over;
	t_philo			*philos;
	pthread_mutex_t	*forks;
	pthread_mutex_t	print_mutex;
	pthread_mutex_t	sim_mutex;
}	t_sim;

typedef struct s_philo
{
	int				id;
	int				meals_eaten;
	long			last_time_eat;
	t_sim			*sim;
	pthread_mutex_t	*fork_left;
	pthread_mutex_t	*fork_right;
	pthread_t		thread;
}	t_philo;

int	ft_isdigit(char *str);
int	ft_atoi(const char *str);
int	parse_args(t_sim *sim, int argc, char **argv);

#endif