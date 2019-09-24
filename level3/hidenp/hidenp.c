/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 12:13:10 by exam              #+#    #+#             */
/*   Updated: 2019/09/24 12:42:18 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
        write(1, &c, 1);
}

size_t  ft_strlen(char *s)
{
        size_t  i;

        i = 0;
        while (s[i] != '\0')
                i++;
        return (i);
}

void	hidenp(char *s1, char *s2)
{
	unsigned int	s1_len;
	unsigned int	i;

	if ((s1_len = ft_strlen(s1)) == 0)
	{
		ft_putchar('1');
		return ;
	}
	i = 0;
	while (*s1 != '\0')
	{
		while (*s2 != '\0')
		{
			if (*s1 == *s2)
			{
				i++;
				s2++;
				break;
			}
			s2++;
		}
		s1++;
	}
	if (i == s1_len)
		ft_putchar('1');
	else
		ft_putchar('0');
}

int		main(int ac, char **av)
{
	if (ac == 3)
		hidenp(av[1], av[2]);
	ft_putchar('\n');
	return (0);
}
