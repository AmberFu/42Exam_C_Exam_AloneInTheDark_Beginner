/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 09:45:51 by exam              #+#    #+#             */
/*   Updated: 2019/08/13 10:24:53 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *s)
{
	while (*s != '\0')
	{
		write(1, s, 1);
		s++;
	}
}

int		is_match(char *s1, char *s2)
{
	size_t	j;
	int		match;

	j = 0;
	while (*s1 != '\0')
	{
		match = 0;
		while (s2[j] != '\0')
		{
			if (*s1 == s2[j])
			{
				match = 1;
				break;
			}
			j++;
		}
		if (match != 1)
			return (0);
		s1++;
	}
	return (1);
}

void	wdmatch(char *s1, char *s2)
{
	int	match_s1;

	match_s1 = is_match(s1, s2);
	if (match_s1 == 1)
	{
		ft_putstr(s1);
		ft_putstr("\n");
	}
	else
		ft_putstr("\n");
}

int		main(int argc, char **argv)
{
	if (argc != 3)
	{
		ft_putstr("\n");
		return (0);
	}
	wdmatch(argv[1], argv[2]);
	return (0);
}
