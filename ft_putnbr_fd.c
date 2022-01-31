#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char *nm;

	nm = ft_itoa(n);
	write(fd, nm, ft_strlen(nm));
}

