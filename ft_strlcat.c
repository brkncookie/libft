#include "libft.h"
size_t ft_strnlen(const char *s, size_t size)
{
	size_t l;

	l = 0;

	while(l < size)
	{
		if(!*s)
			break;
		s++;
		l++;
	}
	return(l);
}

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	const	size_t slen = ft_strlen(src);
	const	size_t dlen = ft_strnlen(dst, size);
	if(dlen == size) return(dlen + slen);
	if(slen < size - dlen )
		ft_memcpy(dst+dlen, src, slen + 1);
	else
	{
		ft_memcpy(dst+dlen, src, size - dlen - 1);
		dst[size-1] = 0;
	}
	return dlen + slen;
}
/* see https://opensource.apple.com/source/OpenSSH/OpenSSH-7.1/openssh/bsd-strlcat.c.auto.html && https://opensource.apple.com/source/Libc/Libc-825.25/string/strlcat.c.auto.html */
/* size_t ft_rstrlcat(char *dst, const char *src, size_t siz) */
/* { */
/* 	char *d = dst; */
/* 	const char *s = src; */
/* 	size_t n = siz; */
/* 	size_t dlen; */

/* 	/1* Find the end of dst and adjust bytes left but don't go past end *1/ */
/* 	while (*d != '\0' && n-- != 0) */
/* 		d++; */
/* 	dlen = d - dst; */
/* 	n = siz - dlen; */

/* 	if (n == 0) */
/* 		return(dlen + strlen(s)); */
/* 	while (*s != '\0') { */
/* 		if (n != 1) { */
/* 			*d++ = *s; */
/* 			n--; */
/* 		} */
/* 		s++; */
/* 	} */
/* 	*d = '\0'; */

/* 	return(dlen + (s - src));	/1* count does not include NUL *1/ */
/* } */

