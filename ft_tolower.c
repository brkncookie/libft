#include "libft.h"
int	tolower(int c)
{
	if(c > 64 && c < 91)
		return (c + 32);
	return(c);
}

