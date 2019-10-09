/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 11:16:35 by exam              #+#    #+#             */
/*   Updated: 2019/10/08 11:42:55 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	to_upper(char c)
{
	if (c >= 'a' && c <= 'z')
		ft_putchar(c - ('a' - 'A'));
	else
		ft_putchar(c);
}

void	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		ft_putchar(c + ('a' - 'A'));
	else
		ft_putchar(c);
}

int		is_blank(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	else
		return (0);
}

void	str_capitalizer(char *s)
{
	int		is_1st;

	is_1st = 1;
	while (*s != '\0')
	{
		if (is_blank(*s))
		{
			ft_putchar(*s);
			is_1st = 1;
		}
		else if (is_1st)
		{
			to_upper(*s);
			is_1st = 0;
		}
		else
			to_lower(*s);
		s++;
	}
	ft_putchar('\n');
}

int		main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac == 1)
	{
		ft_putchar('\n');
		return (0);
	}
	while (i < ac)
	{
		str_capitalizer(av[i]);
		i++;
	}
	return (0);
}
