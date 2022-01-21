#include "libft.h"
char 	*ft_strnstr(const char *big, const char *lil, size_t len)
{
	if(!(*lil))
		return(char *)(big);
	char *bi;
	char *li;
	char *pt;
	char re;

	bi = (char *)big;
	li = (char *)lil;
	pt = bi;

	if(ft_strlen(big) > len)
	{
		re = bi[len];
		bi[len] = 0;
	}
	else
		re = big[len];

	while(*pt && *li)
	{
		if(pt = ft_strchr(pt, *li))
		{
			pt++;
			li++;
		}
		else
			break;
	}
	if(pt)
	if(*(pt-2) != *(li-2))
	{
		bi[len] = re;
		return(NULL);
	}
	if(!(*li))
	{
		pt = ft_strchr(bi, *lil);
		bi[len] = re;
		return(pt);
	}
	else
	{
		bi[len] = re;
		return(NULL);
	}
}

