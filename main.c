#include "libft.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	if(argc < 2)
		return(-1);
	char *str;
	char *initchar(void)
	{
		char *s = malloc(11*sizeof(char));
		ft_memcpy(s, "sunrise", 7);
		s[7] = 0;
		return(s);
	}
	/* printf("ft_argv[1]len says %d\n", ft_argv[1]len(argv[1])); */
	/* printf("argv[1]len says %d\n", argv[1]len(argv[1])); */
	/* printf("ft_memset says %s\n", ft_memset(argv[1], 'n', 3)); */
	/* printf("memset says %s\n", memset(argv[2], 'n', 3)); */
	/* printf("ft_memcpy says %s\n", ft_memcpy(NULL, NULL, 3)); */
	/* printf("memcpy says %s\n", memcpy(NULL, NULL, 3)); */
	/* printf("ft_memmove says %s\n", ft_memmove(str, argv[1], 3)); */
	/* printf("memmove says %s\n", memmove(str, argv[2], 3)); */
	/* str = initchar(); */
	/* printf("ft_strlcpy says %d:%s\n", ft_strlcpy(str, argv[1], 8), str); */
	/* free(str); */
	/* str = initchar(); */
	/* printf("strlcpy says %d:%s\n", strlcpy(str, argv[2], 8), str); */
	/* free(str); */
	/* str = initchar(); */
	/* printf("ft_strlcat says %d:%s\n", ft_strlcat(str, argv[1], 11), str); */
	/* free(str); */
	/* str = initchar(); */
	/* printf("strlcat says %d:%s\n", strlcat(str, argv[1], 11), str); */
	/* free(str); */
	/* while(*argv[1]) */
	/* { */
	/* 	/1* printf("ft_isalpha says %d\n", ft_isalpha(*argv[1])); *1/ */
	/* 	/1* printf("ft_isdigit says %d\n", ft_isdigit(*argv[1])); *1/ */
	/* 	/1* printf("ft_isalnum says %d\n", ft_isalnum(*argv[1])); *1/ */
	/* 	/1* printf("ft_isascii says %d\n", ft_isascii(*argv[1])); *1/ */
	/* 	/1* printf("ft_isprint says %d\n", ft_isprint(*argv[1])); *1/ */
	/* 	/1* argv[1]++; *1/ */
	/* } */
	/* printf("ft_strchr says %p\n", ft_strchr(argv[1], 0)); */
	/* printf("   strchr says %p\n", strchr(argv[1], 0)); */
	/* printf("ft_strrchr says %p\n", ft_strrchr(argv[1], 0)); */
	/* printf("   strrchr says %p\n", strrchr(argv[1], 0)); */
//	printf("ft_strncmp says %d\n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
//	printf("   strncmp says %d\n", strncmp(argv[1], argv[2], atoi(argv[3])));
	//printf("ft_memchr says %p\n", ft_memchr(argv[1], *argv[2], atoi(argv[3])));
	//printf("   memchr says %p\n", memchr(argv[1], *argv[2], atoi(argv[3])));
	/* printf("ft_atoi says %d\n", ft_atoi(argv[1])); */
	/* printf("   atoi says %d\n", atoi(argv[1])); */
	/* printf("ft_strnstr says %s\n", ft_strnstr(argv[1], argv[2], ft_atoi(argv[3]))); */
	/* printf("   strnstr says %s\n", strnstr(argv[1], argv[2], ft_atoi(argv[3]))); */
	/* printf("ft_strdup says %s\n", ft_strdup(argv[1])); */
	/* printf("   strdup says %s\n", strdup(argv[1])); */
	/* printf("ft_calloc says %p\n", ft_calloc(ft_atoi(argv[1]), ft_atoi(argv[2]))); */
	/* printf("   calloc says %p\n", calloc(ft_atoi(argv[1]), ft_atoi(argv[2]))); */
	 str = ft_substr(argv[1], ft_atoi(argv[2]), ft_atoi(argv[3]));
	printf("ft_substr says %s\n", str);
	free(str);

	return(0);
}

