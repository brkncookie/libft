#include <stddef.h>
size_t	ft_strlen(const char *s)
{
	const char *ss = s;
	while(*s)
		s++;
	return((size_t)(s-ss));
}

