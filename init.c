#include "philosphers.h"



void	init_args(int ac, char **av, t_data *data)
{
	int	i;

	i = 0;
	data->args.qty_of_philos = ft_atoi(av[++i]);
	data->args.time_to_die = ft_atoi(av[++i]);
	data->args.time_to_eat = ft_atoi(av[++i]);
	data->args.time_to_sleep = ft_atoi(av[++i]);
	if (ac == 5)
		data->args.number_of_eat = FALSE;
	else
		data->args.number_of_eat = ft_atoi(av[++i]);
}