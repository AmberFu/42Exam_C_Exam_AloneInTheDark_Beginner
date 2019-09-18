/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 10:40:15 by exam              #+#    #+#             */
/*   Updated: 2019/09/10 11:06:40 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		hcd(int n1, int n2)
{
	int	i;
	int	hcd;

	i = 1;
	hcd = 1;
	while (i <= n1)
	{
		if ((n1 % i == 0) && (n2 % i) == 0)
			hcd = i;
		i++;
	}
	return (hcd);
}

int		pgcd(char *s1, char *s2)
{
	int		n1;
	int		n2;

	n1 = atoi(s1);
	n2 = atoi(s2);
	if (n1 > n2)
		return hcd(n1, n2);
	else if (n2 > n1)
		return hcd(n2, n1);
	else
		return n1;
}

int		main(int ac,char **av)
{
	if (ac == 3)
	{
		if (atoi(av[1]) > 0 && atoi(av[2]) > 0)
			printf("%d", pgcd(av[1], av[2]));
	}
	printf("\n");
	return (0);
}
