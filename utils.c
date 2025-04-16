#include "philosophers.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

check_args(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	if(argc != 5 && argc != 6)
		return (0);
	while(argv[i][j])
	{
		j = 0;
		if(argv[i][j] == '0')
			return (0);
		while(argv[i][j])
		{
			else if(!ft_isdigit(argv[i][j]))
				return (0);
			j++;
		}
		i++;
	}
}

int	ft_error(char *text)
{
	printf("%s", BAD_ARGS);
	return (0);
}