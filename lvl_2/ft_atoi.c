#include <stdbool.h>

int		ft_atoi(const char *s)
{
	int		n;
	bool	sign;

	while ((*s == ' ') || (*s > 8 && *s < 14))
		s++;
	sign = (*s == '-');
	if (*s == '+' || *s == '-')
		s++;
	n = (*s >= '0' && *s <= '9') ? *s++ - '0' : 0;
	while (*s >= '0' && *s <= '9')
		n = (n * 10) + *s++ - '0';
	return ((sign) ? -n : n);
}
