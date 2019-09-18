/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 12:09:00 by exam              #+#    #+#             */
/*   Updated: 2019/08/13 12:38:53 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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

void	print_factors(int n)
{
	int	i;
	int	first;

	first = 1;
	i = 2;
	while (i < n)
	{
		while (n % i == 0)
		{
			if (first)
			{
				printf("%d", i);
				first = 0;
			}
			else
				printf("*%d", i);
			n /= i;
		}
		i++;
	}
	printf("*%d\n", n);
}

void	fprime(char *s)
{
	int		n;

	n = atoi(s);
	if (n == 2)
	{
		printf("%d\n", n);
		return ;
	}
	if (is_prime(n))
	{
		printf("%d\n", n);
		return ;
	}
	else
	{
		print_factors(n);
		return ;
	}
}

int		main(int argc, char **argv)
{
	if (argc != 2 || !ispositive_number(argv[1]))
	{
		printf("\n");
		return (0);
	}
	if (atoi(argv[1]) == 1)
	{
		printf("1\n");
		return (0);
	}
	fprime(argv[1]);
	return (0);
}
