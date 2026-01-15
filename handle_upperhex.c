/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_upperhex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russ1337 <russ1337@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:49:09 by rfoo              #+#    #+#             */
/*   Updated: 2026/01/16 06:58:59 by russ1337         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_upperhex(unsigned long n)
{
	char	*hex;
	char	buffer[17];
	int		i;
	int		bytes;

	hex = "0123456789ABCDEF";
	i = 16;
	buffer[i] = '\0';
	bytes = 0;
	if (n == 0)
	{
		bytes += handle_char('0');
		return (bytes);
	}
	while (n > 0)
	{
		buffer[--i] = hex[n % 16];
		n /= 16;
	}
	bytes += handle_str(&buffer[i]);
	return (bytes);
}
