#ifndef LIBFT_H
# define LIBFT_H
#include <string.h>
#include <bsd/string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
	int	ft_isalpha(int c);
	int	ft_isdigit(int c);
	int	ft_isalnum(int c);
	int	ft_isascii(int c);
	int	ft_isprint(int c);
	size_t	ft_strlen(const char *s);
	void 	*ft_memset(void *s, int c, size_t n);
	void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n);
	void	*ft_memmove(void *dest, const void *src, size_t n);
	void	ft_bzero(void *s, size_t n);
	size_t	ft_strlcpy(char *dst, const char *src, size_t size);
	size_t	ft_strlcat(char *dst, const char *src, size_t size);
	size_t ft_strnlen(const char *s, size_t size);
	int	tolower(int c);
	int	toupper(int c);
	char	*ft_strchr(const char *s, int c);
	char	*ft_strrchr(const char *s, int c);
	int	ft_strncmp(const char *s1, const char *s2, size_t n);
	void	*ft_memchr(const void *s, int c, size_t n);
	int	ft_memcmp(const void *s1, const void *s2, size_t n);
	int	ft_isspace(int c);
	int	ft_atoi(const char *nptr);
	char 	*ft_strnstr(const char *big, const char *lil, size_t len);
	char	*ft_strdup(const char *s);
	void	*ft_calloc(size_t nelm, size_t selm);
	char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif

