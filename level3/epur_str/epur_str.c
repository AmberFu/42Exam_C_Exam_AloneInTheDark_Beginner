/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 10:42:43 by exam              #+#    #+#             */
/*   Updated: 2019/09/17 11:10:54 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_blank(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	if (c == '\r' || c == '\v')
		return (1);
	return (0);
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

int		strend_blank_index(char *str)
{
	size_t	len;

	len = ft_strlen(str);
	while (is_blank(str[len - 1]))
		len--;
	return (len);
}

void    ft_putchar(char c)
{
        write(1, &c, 1);
}

void	epur_str(char *s)
{
	size_t	len;
	int		isb;

	isb = 0;
	while (*s != '\0' && is_blank(*s))
		s++;
	len = strend_blank_index(s);
	while (*s != '\0' && len > 0)
	{
		if (is_blank(*s))
			isb = 1;
		else if (!is_blank(*s))
		{
			if (isb == 0)
				ft_putchar(*s);
			else if (isb == 1)
			{
				ft_putchar(' ');
				ft_putchar(*s);
				isb = 0;
			}
		}
		s++;
		len--;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		epur_str(av[1]);
	}
	ft_putchar('\n');
	return (0);
}
