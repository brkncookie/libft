#include "libft.h"

static long  ft_callen(long nm )
{
	long l;

	l = 0;
	if( nm == 0)
		return(1);
	if( nm < 0)
	{
		nm *= -1;
		l++;
	}
	while( nm > 0)
	{

		nm /= 10;
		l++;
	}
	return(l);
}

char	*ft_itoa(int n)
{
	long 	nm;
	char	*ichr;
	long l;

	nm = n;
	l = ft_callen(nm);
	ichr = malloc(sizeof(char) * (l + 1));
	if(!ichr)
		return(NULL);
	ichr[l--] = 0;
	if(nm == 0)
		ichr[l] = '0';
	if(nm < 0)
	{
		nm *= -1;
		ichr[0] = '-';
	}
	while(nm > 0)
	{
		ichr[l--] = 48 + (nm % 10);
		nm /= 10;
	}
	return(ichr);

}

