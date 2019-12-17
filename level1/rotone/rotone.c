/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 09:09:47 by exam              #+#    #+#             */
/*   Updated: 2019/12/10 09:22:56 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rotone(char *s)
{
	while (*s != '\0')
	{
		// IF Z (90):
		if (*s == 'Z')
			ft_putchar('A');
		// IF A-Y (65-89):
		else if (*s >= 'A' && *s <= 'Y')
			ft_putchar(*s + 1);
		// if z (122):
		else if (*s == 'z')
			ft_putchar('a');
		// if a-y (97-121):
		else if (*s >= 'a' && *s <= 'y')
			ft_putchar(*s + 1);
		else
			ft_putchar(*s);
		s++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		rotone(av[1]);
	write(1, "\n", 1);
	return (0);
}
