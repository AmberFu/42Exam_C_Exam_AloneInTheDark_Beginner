/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 10:26:41 by exam              #+#    #+#             */
/*   Updated: 2019/09/10 10:38:08 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
        write(1, &c, 1);
}

void    ft_putstr(char *s)
{
        if (!s)
                return ;
        while (*s != '\0')
        {
                ft_putchar(*s);
                s++;
        }
}

void	snake_to_camel(char *s)
{
	int	start_capital;
	int	capital;

	start_capital = 0;
	capital = 0;
	while (*s != '\0')
	{
		if (*s == '_')
		{
			start_capital = 1;
			capital = 1;
		}
		else if (start_capital && capital)
		{
			ft_putchar(*s - ('a' - 'A'));
			capital = 0;
		}
		else
			ft_putchar(*s);
		s++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		snake_to_camel(av[1]);
	ft_putchar('\n');
	return (0);
}
