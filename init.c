#include "philosphers.h"



void	init_args(int ac, char **av, t_data *data)
{
	int	i;

	i = 0;
	data->args.philos = ft_atoi(av[++i]);
	data->args.ttd = ft_atoi(av[++i]);
	data->args.tte = ft_atoi(av[++i]);
	data->args.tts = ft_atoi(av[++i]);
	if (ac == 5)
		data->args.repeat_cycles = 0;
	else
		data->args.repeat_cycles = ft_atoi(av[++i]);
}