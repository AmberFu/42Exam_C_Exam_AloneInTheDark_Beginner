/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 09:22:15 by exam              #+#    #+#             */
/*   Updated: 2019/09/17 09:34:30 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
        write(1, &c, 1);
}

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}

int		main(int ac, char **av)
{
	size_t	len;
	char	*s;

	if (ac == 2)
	{
		s = av[1];
		len = ft_strlen(s);
		while (len > 0)
		{
			ft_putchar(s[len - 1]);
			len--;
		}
	}
	ft_putchar('\n');
	return (0);
}
