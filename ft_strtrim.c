#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*end;
	char	*str;

	end = (char *)s1 + ft_strlen(s1) - 1;

	while(ft_strchr(set, *s1))
		s1++;
	while(ft_strrchr(set, *end))
		end--;
	str = malloc((end - s1 + 1) * sizeof(char));
	ft_strlcpy(str, s1, end-s1+2);
	return(str);
}
/* char	*ft_strtrim(char const *s1, char const *set) */
/* { */
/* 	ssize_t	i; */
/* 	ssize_t	j; */
/* 	char	*str; */

/* 	if (!s1 || !set) */
/* 		return (NULL); */
/* 	i = 0; */
/* 	j = ft_strlen(s1) - 1; */
/* 	while (ft_strchr((char *)set, s1[i])) */
/* 		i++; */
/* 	while (ft_strrchr((char *)set, s1[j])) */
/* 		j--; */
/* 	if (j < i) */
/* 		return (ft_strdup("")); */
/* 	str = malloc(j - i + 2); */
/* 	if (!str) */
/* 		return (NULL); */
/* 	ft_strlcpy(str, s1 + i, j - i + 2); */
/* 	return (str); */
/* } */

