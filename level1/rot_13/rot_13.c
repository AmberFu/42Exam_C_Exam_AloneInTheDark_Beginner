/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 09:07:01 by exam              #+#    #+#             */
/*   Updated: 2019/10/22 09:34:24 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int		is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

void	rot_13_ahead(char *s)
{
	int		tmp;

	tmp = 0;
	while (*s != '\0')
	{
		if (is_uppercase(*s))
		{
			if ((*s - 13) < 'A')
			{
				tmp = 'A' - (*s - 13);
				ft_putchar('Z' - (tmp - 1));
			}
			else
				ft_putchar(*s - 13);
		}
		else if (is_lowercase(*s))
		{
			if ((*s -13) < 'a')
			{
				tmp = 'a' - (*s - 13);
				ft_putchar('z' - (tmp - 1));
			}
			else
				ft_putchar(*s - 13);
		}
		else
			ft_putchar(*s);
		s++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		rot_13_ahead(av[1]);
	ft_putchar('\n');
	return (0);
}
