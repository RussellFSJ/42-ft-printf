/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfoo <rfoo@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:51:06 by rfoo              #+#    #+#             */
/*   Updated: 2026/01/14 19:25:58 by rfoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr_fd(void *ptr, int fd)
{
	if (ptr == NULL)
	{
		ft_putstr_fd("(nil)", fd);
		return ;
	}
	ft_putstr_fd("0x", fd);
	ft_putlowerhex_fd((unsigned long) ptr, fd);
}
