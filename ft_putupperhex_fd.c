/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putupperhex_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfoo <rfoo@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:48:49 by rfoo              #+#    #+#             */
/*   Updated: 2026/01/14 19:26:05 by rfoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putupperhex_fd(unsigned long n, int fd)
{
	char	*hex;
	char	buffer[17];
	int		i;

	hex = "0123456789ABCDEF";
	i = 16;
	buffer[i] = '\0';
	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	while (n > 0)
	{
		buffer[--i] = hex[n % 16];
		n /= 16;
	}
	ft_putstr_fd(&buffer[i], fd);
}
