/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russ1337 <russ1337@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 11:58:48 by rfoo              #+#    #+#             */
/*   Updated: 2026/01/19 02:38:04 by russ1337         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list		args;
	int			i;
	int			bytes;
	t_dict		*dict;
	t_handler	handler;

	va_start(args, s);
	i = 0;
	bytes = 0;
	dict = dict_init("cspdiuxX%");
	handler = NULL;
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			handler = dict_get(dict, s[i]);
		}
		if (handler)
			bytes += handler(&args);
		i++;
	}
	va_end(args);
	return (bytes);
}
