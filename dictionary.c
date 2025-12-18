/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfoo <rfoo@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 14:34:24 by rfoo              #+#    #+#             */
/*   Updated: 2025/12/18 19:39:23 by rfoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_dict	*dict_init(int dict_size)
{
	t_dict	*printf_dict;
	t_entry	*entries;

	printf_dict->size = dict_size;
	entries = malloc(dict_size * sizeof(t_entry));
	if (!entries)
		return (NULL);
	dict_fill(printf_dict);
	return (printf_dict);
}

static int	dict_size(char *conversions)
{
	return ft_strlen(conversions);
}

static void dict_set(t_dict *dict, char conversion, void (*handler)(void*))
{
	int		index;
	t_entry	*entry;

	index = 0;
	entry->key = conversion;
	entry->value = handler;

	while (index < dict->size)
	{
		if (!dict->entries[index].key)
		{
			dict->entries[index] = *entry;
			return ;
		}
		index++;
	}
}
static void dict_fill(t_dict *dict)
{
	dict_set(dict, 'c', handle_char);
	dict_set(dict, 's', handle_str);
	dict_set(dict, 'p', handle_ptr);
	dict_set(dict, 'd', handle_int);
	dict_set(dict, 'i', handle_int);
	// dict_set(dict, 'u', handle_uint)

	// dict_set('c', handle_char);
	// dict_set('c', handle_char);
}
void	*dict_get(t_dict *dict, char conversion)
{
	int	index;

	index = 0;
	while (index < dict->size)
	{
		if (dict->entries[index].key == conversion)
			return (dict->entries->value);
		index++;
	}
}
