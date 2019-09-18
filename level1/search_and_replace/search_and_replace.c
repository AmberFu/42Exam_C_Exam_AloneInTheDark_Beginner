/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 09:16:14 by exam              #+#    #+#             */
/*   Updated: 2019/09/10 09:47:29 by exam             ###   ########.fr       */
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

int		is_char(char *s)
{
	int	i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
		if (i > 2)
			return (0);
	}
	if (i == 1)
		return (1);
	return (0);
}

int		search_c(char *str, char  c)
{
	while (*str != '\0')
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

void	search_and_replace(char	*str, char	*av2, char *av3)
{
	char	cs;
	char	cr;

	if (!str)
		return ;
	cs = *av2;
	cr = *av3;
	if (search_c(str, cs))
	{
		while (*str != '\0')
		{
			if (*str == cs)
				ft_putchar(cr);
			else
				ft_putchar(*str);
			str++;
		}
		return ;
	}
	ft_putstr(str);
}

int		main(int ac, char **av)
{
	if (ac == 4)
	{
		if (is_char(av[2]) && is_char(av[3]))
			search_and_replace(av[1], av[2], av[3]);
	}
	ft_putchar('\n');
	return (0);
}
