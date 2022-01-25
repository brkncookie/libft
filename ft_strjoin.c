#include "libft.h"

char 	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	len;
	char	*str;

	if(!s1 || !s2)
		return(NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;

	str = malloc(len * sizeof(char));
	if(!str)
		return(NULL);

	ft_strlcpy(str, s1, len);
	ft_strlcat(str, s2, len);
	return(str);
}

