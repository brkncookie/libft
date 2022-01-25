#include "libft.h"
char 	*ft_strnstr(const char *big, const char *lil, size_t len)
{
	char *rpt;

	rpt = NULL;
	if(!*lil)
		return(char *)(big);
	while(*big && len)
	{
		if(*big == *lil)
		{
			rpt = (char *)big;
			while(*big && len && *lil)
			{
				if(*big != *lil)
					return(NULL);
				lil++;
				big++;
				len--;
			}
			if(*lil)
				rpt = NULL;
			break;
		}
		big++;
		len--;
	}
	return(rpt);
}

