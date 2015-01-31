/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/15 18:18:07 by sebgoret          #+#    #+#             */
/*   Updated: 2015/01/20 16:36:23 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

int			ft_atoi(char const *nbr);
void		ft_bzero(void *s, size_t n);
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
char		*ft_itoa(int n);
void		*ft_memalloc(size_t size);
void		*ft_memccpy(void *dst, void const *src, int c, size_t n);
void		*ft_memchr(void const *s, int c, size_t n);
int			ft_memcmp(void const *s1, void const *s2, size_t n);
void		*ft_memcpy(void *dst, void const *src, size_t n);
void		ft_memdel(void **ap);
void		*ft_memmove(void *dst, void const *src, size_t n);
void		*ft_memset(void *s, int c, size_t n);
int			ft_putchar(char c);
int			ft_putchar_fd(char c, int fd);
int			ft_putendl(char const *s);
int			ft_putendl_fd(char const *s, int fd);
int			ft_putnbr(int n);
int			ft_putnbr_fd(int n, int fd);
int			ft_putstr(char const *s);
int			ft_putstr_fd(char const *s, int fd);
char		*ft_strcat(char *s1, char const *s2);
char		*ft_strchr(char const *s, int c);
void		ft_strclr(char *s);
int			ft_strcmp(char const *s1, char const *s2);
char		*ft_strcpy(char *dst, char const *src);
void		ft_strdel(char **as);
char		*ft_strdup(char const *src);
int			ft_strequ(char const *s1, char const *s2);
void		ft_striter(char *s, void (*f)(char *));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
char		*ft_strjoin(char const *s1, char const *s2);
size_t		ft_strlcat(char *dst, char const *src, size_t size);
size_t		ft_strlen(char const *s);
char		*ft_strmap(char const *s, char (*f)(char));
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char		*ft_strncat(char *s1, const char *s2, size_t n);
int			ft_strncmp(char const *s1, char const *s2, size_t n);
char		*ft_strncpy(char *dst, char const *src, size_t n);
int			ft_strnequ(char const *s1, char const *s2, size_t n);
char		*ft_strnew(size_t size);
char		*ft_strnstr(char const *s1, char const *s2, size_t n);
char		*ft_strrchr(char const *s, int c);
char		**ft_strsplit(char const *s, char c);
char		*ft_strstr(char const *s1, char const *s2);
char		*ft_strsub(char const *s, unsigned int start, size_t len);
char		*ft_strtrim(char const *s);
int			ft_tolower(int c);
int			ft_toupper(int c);
void		ft_destroy_split(char **split);
void		ft_fatal_error(char *msg, int status);
int			ft_count_tab(char **tab);
char		*ft_epur_str(char *str);
int			ft_error(char *cmd, char *error);
int			ft_syscall_error(char *syscall);

#endif
