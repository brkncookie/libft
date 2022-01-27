#include "libft.h"

size_t ft_numptr(char const *s, char c)
{
	size_t n;
	long long inx;


	n = 0;
	inx = 0;
	while(s[inx])
	{
		while(s[inx] == c && s[inx])
			inx++;
		if(s[inx])
			n++;
		while(s[inx] != c && s[inx])
			inx++;
	}
	return(n);
}
char **ft_strput(char const *s, char c, char **strs, size_t nptr)
{
	long long inx;
	long long sinx;
	long long pinx;
	size_t	  l;

	l = 0;
	inx = 0;
	pinx = 0;
	sinx = 0;
	while(s[inx] && pinx < nptr)
	{
		while(s[inx] == c && s[inx])
			inx++;
		sinx = inx;
		while(s[inx] != c && s[inx])
			l++;
			inx++;
		strs[pinx] = ft_calloc(l, sizeof(char) + 1);
		ft_strlcpy(strs[pinx], &s[sinx], l + 1);
		l = 0;
		sinx = 0;
		pinx++;
		inx++;
	}
	strs[pinx] = 0;
	return(strs);
}
char	**ft_split(char const *s, char c)
{
	size_t	nptr;
	char	**strs;

	/* allocat nptr of pointer variables */
	nptr = ft_numptr(s, c);
	strs = ft_calloc(nptr, sizeof(char *) + 1);

	/* get the strings to their final destination */
	strs = ft_strput(s, c, strs, nptr);
	return(strs);
}
/* calculate how many strings we have in `s` to allocate the right amount of pointer variables */
/* for earch string in `s` we allocate the appropriate memory size for it and copy it there */
/* null the last pointer */

