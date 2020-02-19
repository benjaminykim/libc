#include "libft.h"

void		putnbr_helper(int n, int fd)
{
	char c;

	if (n == 0)
		return;
	putnbr_helper(n / 10, fd);
	c = n % 10 + '0';
	write(fd, &c, 1);
}

void		ft_putnbr_fd(int n, int fd)
{
	if (n == 0)
		write(fd, "0", 1);
	else if (n == -2147483648)
	{
		write(fd, "-", 1);
		n = n / 10;
		putnbr_helper(-n, fd);
		write(fd, "8", 1);
	}
	else if (n < 0)
	{
		write(fd, "-", 1);
		putnbr_helper(-n, fd);
	}
	else
		putnbr_helper(n, fd);
}
