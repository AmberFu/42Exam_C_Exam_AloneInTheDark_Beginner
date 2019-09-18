/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 10:16:41 by exam              #+#    #+#             */
/*   Updated: 2019/08/20 10:40:45 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_p(int n)
{
	while (n >= 10)
	{
		ft_putnbr_p(n / 10);
		n = n % 10;
	}
	ft_putchar(n + '0');
}

int		main(int argc, char **argv)
{
	if (argc == 1)
	{
		ft_putchar('0');
		ft_putchar('\n');
		return (0);
	}
	else if (argc > 1 && argv)
	{
		ft_putnbr_p(argc - 1);
		ft_putchar('\n');
		return (0);
	}
	return (0);
}
