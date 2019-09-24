/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 09:09:39 by exam              #+#    #+#             */
/*   Updated: 2019/09/24 09:20:40 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	while (*s != '\0')
	{
		ft_putchar(*s);
		s++;
	}
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(-n);
	}
	else if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putchar((n % 10) + '0');
	}
	else
		ft_putchar(n + '0');
}

int		is_multiple_3(int n)
{
	if (n % 3 == 0)
		return (1);
	return (0);
}

int     is_multiple_5(int n)
{
    if (n % 5 == 0)
        return (1);
    return (0);
}

int		main()
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (is_multiple_3(i) && is_multiple_5(i))
			ft_putstr("fizzbuzz\n");
		else if(is_multiple_3(i))
			ft_putstr("fizz\n");
		else if(is_multiple_5(i))
			ft_putstr("buzz\n");
		else
		{
			ft_putnbr(i);
			ft_putchar('\n');
		}
		i++;
	}
	return (0);
}
