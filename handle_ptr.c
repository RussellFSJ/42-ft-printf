/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russ1337 <russ1337@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 19:08:17 by rfoo              #+#    #+#             */
/*   Updated: 2026/01/16 07:00:39 by russ1337         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_ptr(void *ptr)
{
	int	bytes;

	bytes = 0;
	if (ptr == NULL)
	{
		bytes += handle_str("(nil)");
		return (bytes);
	}
	bytes += handle_str("0x");
	bytes += handle_lowerhex((unsigned long) ptr);
	return (bytes);
}
