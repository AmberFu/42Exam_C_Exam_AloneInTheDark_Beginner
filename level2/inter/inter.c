/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 10:44:50 by exam              #+#    #+#             */
/*   Updated: 2019/09/24 11:12:14 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
        write(1, &c, 1);
}

int		is_repeat(char *s1, unsigned int index, char c)
{
	unsigned int	i;

	i = 0;
	while (i < index)
	{
		if (s1[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		is_instr2(char *s2, char c)
{
	while (*s2 != '\0')
	{
		if (*s2 == c)
			return (1);
		s2++;
	}
	return (0);
}

void	inter(char *s1, char *s2)
{
	unsigned int    i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (is_repeat(s1, i, s1[i]) == 0)
			if (is_instr2(s2, s1[i]) == 1)
				ft_putchar(s1[i]);
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 3)
		inter(av[1], av[2]);
	ft_putchar('\n');
	return (0);
}
