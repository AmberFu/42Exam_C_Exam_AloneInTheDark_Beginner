/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 09:15:16 by exam              #+#    #+#             */
/*   Updated: 2019/11/19 09:55:35 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (*s++ != '\0')
		i++;
	return (i);
}

char    *ft_strpbrk(const char *s1, const char *s2)
{
	int		len_s2;
	int		i;

	len_s2 = ft_strlen((char *)s2);
	while (*s1 != '\0')
	{
		i = 0;
		while (i < len_s2)
		{
			if (*s1 == s2[i])
				return ((char *)s1);
			i++;
		}
		s1++;
	}
	return (NULL);
}
