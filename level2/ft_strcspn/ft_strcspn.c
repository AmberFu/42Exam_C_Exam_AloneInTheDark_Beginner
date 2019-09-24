/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 09:22:28 by exam              #+#    #+#             */
/*   Updated: 2019/09/24 15:40:56 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** if c in s: return index,
** if c not in s: return '\0' index;
*/

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

size_t	is_instr(char *s, char c)
{
	size_t	i;

	i = 0;
	while (*s != '\0')
	{
		if (*s == c)
			return (i);
		i++;
		s++;
	}
	return (i);
}

size_t  ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	i_min;
	size_t	s_len;

	s_len = ft_strlen((char *)s);
	i_min = s_len;
	while (*reject != '\0')
	{
		i = is_instr((char *)s, *reject);
		if (i < s_len && i < i_min)
			i_min = i;
		reject++;
	}
	return (i_min);
}
