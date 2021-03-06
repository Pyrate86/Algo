/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfts.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghilbert <ghilbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/09 03:12:58 by ghilbert          #+#    #+#             */
/*   Updated: 2015/07/01 19:53:59 by ghilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LIBFTASM_H
# define _LIBFTASM_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <sys/wait.h>
# include <fcntl.h>
# include <ctype.h>
# include <unistd.h>
# include <signal.h>
# include <string.h>
# include <strings.h>

# define BUFF_SIZE 4096

typedef struct		s_gnl
{
	int				size;
	int				index;
	int				fd;
	char			*str;
	struct s_gnl	*next;
}					t_gnl;


// int		ft_strbcmp(const char *s1, const char *s2);

void	ft_bzero(void *s, size_t n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_islower(int c);
int		ft_isprint(int c);
int		ft_isupper(int c);
char	*ft_strcat(char *s1, const char *s2);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_isspace(char c);

void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memset(void *b, int c, size_t len);
// char	*ft_strcpy(char *dst, const char *src);
// char	*ft_strdup(const char *s1);
int		ft_strlen(char *str);
// char	*ft_strncpy(char *dst, const char *src, size_t n);
// char	*ft_strnew(size_t size);
// void	*ft_memalloc(size_t size);

// void	ft_cat(int fd);
// int		ft_puts(const char *s);

#endif
