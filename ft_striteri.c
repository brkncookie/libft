#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int inx;

	inx = 0;
	if(!s || !f)
		return;
	while(*s)
		f(inx++, s++);
}

/* void myf(unsigned int i, char *c) */
/* { */
/* 	*c = i + *c; */
/* } */

