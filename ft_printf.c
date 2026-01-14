/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfoo <rfoo@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 11:58:48 by rfoo              #+#    #+#             */
/*   Updated: 2026/01/14 20:22:32 by rfoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	int		count;
	t_dict	*dict;

	va_start(args, s);
	i = 0;
	count = 0;
	dict = dict_init("cspdiuxX%");
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			dict_get(dict, s[i])(s[i]);
		}

		i++;
	}
	va_end(args);
	return (count);
}
