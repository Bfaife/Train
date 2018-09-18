#include <unistd.h>

void	ft_putchar(char ltr)
{
	write(1, &ltr, 1);
}

void	ft_putnchar(char ltr)
{
	int i;
	int range;

	i = 0;
	if (ltr >= 'a' && ltr <= 'z')
		range = ltr - 'a' + 1;
	else if (ltr >= 'A' && ltr <= 'Z')
		range = ltr - 'A' + 1;
	else
		range = 1;
	while (i < range)
	{
		ft_putchar(ltr);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			ft_putnchar(argv[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
