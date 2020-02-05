/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvidigal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 00:12:53 by bvidigal          #+#    #+#             */
/*   Updated: 2020/02/05 16:11:08 by bvidigal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __LIBFT_H
# define __LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <ctype.h>

typedef	struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

void			*ft_memset(void *dest, int c, size_t len);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
size_t			ft_strlen(const char *s);
size_t			ft_strlcpy(char * dst, const char * src, size_t dstsize);
int				ft_tolower(int c);
int				ft_toupper(int c);
int				ft_isprint(int c);
int				ft_isdigit(int c);
int				ft_isalpha(int c);
int				ft_atoi(const char *str);
int				ft_isalnum(int c);
int				ft_isascii(int c);
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strnstr(const char *haystack, const char *needle, size_t len);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
void			*ft_calloc(size_t count, size_t size);
char			*ft_strdup(char const *s1);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, const char *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
#endif
