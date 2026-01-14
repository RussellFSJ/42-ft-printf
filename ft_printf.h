/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfoo <rfoo@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 19:52:43 by rfoo              #+#    #+#             */
/*   Updated: 2026/01/14 20:09:53 by rfoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

typedef void	(*t_handler)(void *);
typedef struct entry
{
	char		key;
	t_handler	handler;
}			t_entry;

typedef struct dict
{
	int		size;
	int		count;
	t_entry	*entries;
}			t_dict;

int			ft_printf(const char *format, ...);
size_t		ft_strlen(const char *s);
void		*ft_memset(void *s, int c, size_t n);
void		ft_bzero(void *s, size_t n);
void		*ft_calloc(size_t nmemb, size_t size);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
void		ft_putlowerhex_fd(unsigned long n, int fd);
void		ft_putupperhex_fd(unsigned long n, int fd);
void		ft_putptr_fd(void *ptr, int fd);
void		handle_char(char c);
void		handle_str(char *s);
void		handle_int(int n);
void		handle_ptr(void *ptr);
void		handle_lowerhex(unsigned long n);
void		handle_upperhex(unsigned long n);
void		handle_percent(void);
t_dict		*dict_init(int dict_size);
t_handler	dict_get(t_dict *dict, char key);

#endif
