/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfoo <rfoo@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 14:34:24 by rfoo              #+#    #+#             */
/*   Updated: 2025/12/12 16:53:09 by rfoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_dict dict_init(int dict_size, );

int dict_size(char *conversions)
{
	return ft_strlen(conversions);
}

void	*dict_get(t_dict dict, char conversion)
{
	int	i;

	i = 0;
	while (i < dict.size)
	{
		if (dict->entries[i]->key == conversion)
			return (dict.entries->value);
		i++;
	}
}

static void dict_set(t_dict dict, t_entry entry)
{
	
}