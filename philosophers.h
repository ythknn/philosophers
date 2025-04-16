#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <sys/time.h>
# include <pthread.h>

# define BAD_ARGS "Arguments should only contain digits.\n \
Arguments must contain:\n \
Number of philosophers\n \
Time to eat\n \
Time to sleep\n \
(optional) Number of cycles that all philisophers must eat\n \
\n These all must be positive integers.\nExiting.\n"
 

typedef struct s_args
{
	int	qty_of_philos;
	int	ttd;
	int	tte;
	int	tts;
	int	repeat_cycles;
}				t_args;

typedef struct s_philosopher
{
	pthread_t		thread;
	int				ttd;
	int				tte;
	int				tts;
	long long		tbe;
	int				repeat_cycles;
	pthread_mutex_t	*left;
	pthread_mutex_t	*right;
	pthread_mutex_t	*printf;
	int				id;
	long long		start_time;
}				t_philosopher;

typedef struct s_data
{
	t_args			args;
	t_philosophers	*philosopher;
	pthread_mutex_t	*forks;
	pthread_mutex_t	printf;
}				t_data;