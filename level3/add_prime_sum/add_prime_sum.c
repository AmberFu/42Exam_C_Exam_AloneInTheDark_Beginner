/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 10:28:29 by exam              #+#    #+#             */
/*   Updated: 2019/08/13 12:05:19 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int		ft_atoi_positive(char *s)
{
	int		len;
	int		values;
	int		tentimes;

	len = ft_strlen(s);
	values = 0;
	tentimes = 1;
	while (len > 0)
	{
		values += ((s[len - 1] - '0') * tentimes);
		len--;
		tentimes *= 10;
	}
	return (values);
}

void	ft_putnbr_positive(int n)
{
	char	c;

	if (n >= 10)
	{
		ft_putnbr_positive(n / 10);
		c = n % 10 + '0';
		ft_putchar(c);
	}
	else
	{
		c = n + '0';
		ft_putchar(c);
	}
}

int		ispositive_number(char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (i == 0 && (s[i] <= '0' || s[i] > '9'))
			return (0);
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int		is_prime(int n)
{
	int i;

	i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		prime_sum(char *s)
{
	int	n;
	int	value;

	value = 0;
	n = ft_atoi_positive(s);
	if (n == 2)
		return (2);
	while (n > 1)
	{
		if (is_prime(n))
			value += n;
		n--;
	}
	return (value);
}

int		main(int argc, char **argv)
{
	if (argc != 2 || !ispositive_number(argv[1]) || ft_atoi_positive(argv[1]) == 1)
	{
		ft_putnbr_positive(0);
		ft_putchar('\n');
		return (0);
	}
	ft_putnbr_positive(prime_sum(argv[1]));
	ft_putchar('\n');
	return (0);
}
