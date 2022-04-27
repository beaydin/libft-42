#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

int ft_isalpha(int a);
int ft_isdigit(int a);
int ft_isalnum(int a);
int ft_isascii(int a);
int ft_isprint(int a);
int ft_strlen(const char *array);
void*   ft_memset(void *dest, int c, size_t len);
void    ft_bzero(void *s, size_t n);
void*   ft_memcpy(void *dest, const void *src, size_t n);
void*   ft_memmove(void *dest, const void *src, size_t n);
size_t  ft_strlcpy(char *dst, const char *src, size_t n);
size_t  ft_strlcat(char *dst, const char *src, size_t dstsize);
int ft_toupper(int ch);
int ft_tolower(int ch);
char		*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *str, int ch);
int ft_strncmp(const char *s1, const char *s2, size_t n);
void* ft_memchr(const void *str, int c, size_t n);
int ft_memcmp(const void *str1, const void *str2, size_t n);
char *ft_strnstr(const char	*big, const char *little, size_t len);
int ft_atoi(const char *nptr);
void* ft_calloc(size_t num, size_t size);
char* ft_strdup(const char *str);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);
char **ft_split(char const *s, char c);
char *ft_itoa(int n);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void    ft_putnbr_fd(int n, int fd);

#endif