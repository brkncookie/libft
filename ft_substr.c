#include "libft.h"
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;

	if(!s)
		return(NULL);
	str = malloc(++len * sizeof(char));
	if(!str)
		return(NULL);
	if(start >= ft_strlen(s))
		return(str);
	ft_strlcpy(str, s + start, len);
	return(str);
}
char	*ft_substr_old(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	if (start >= ft_strlen(s))
		return (str);
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

