/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 09:11:44 by exam              #+#    #+#             */
/*   Updated: 2019/09/03 09:35:15 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void			ft_putchar(char c)
{
	write(1, &c, 1);
}

void			reverses_case(char *str)
{
	while (*str != 0)
	{
		if (*str >= 'A' && *str <= 'Z')
			ft_putchar(*str + ('a' - 'A'));
		else if (*str >= 'a' && *str <= 'z')
			ft_putchar(*str - ('a' - 'A'));
		else
			ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

int				main(int argc, char **argv)
{
	if (argc != 2)
		ft_putchar('\n');
	else
		reverses_case(argv[1]);
	return (0);
}
