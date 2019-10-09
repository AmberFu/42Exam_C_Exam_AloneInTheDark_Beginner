/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 09:24:31 by exam              #+#    #+#             */
/*   Updated: 2019/10/08 09:53:09 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *s)
{
	unsigned int	len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char	*ft_strrev(char *str)
{
	unsigned int	i;
	unsigned int	strlen;
	unsigned int	half;
	char			tmp;

	if (!str)
		return (NULL);
	i = 0;
	strlen = ft_strlen(str);
	half = strlen / 2;
	while (i < half)
	{
		tmp = str[strlen - 1 - i];
		str[strlen - 1 - i] = str[i];
		str[i] = tmp;
		i++;
	}
	return (str);
}
