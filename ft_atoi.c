#include "libft.h"

int				ft_atoi(const char *str)
{
	int			sign;
	long		total;

	total = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' ||
			*str == '\r' || *str == '\v' || *str == '\f')
		str++;
	if (*str == '+' || *str == '-')
	{
		sign = (*str == '-') * (-1) + (*str == '+') * (1);
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		total *= 10;
		total += *str - '0';
		str++;
	}
	return (total * sign);
}
