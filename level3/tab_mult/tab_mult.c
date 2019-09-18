/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 10:56:05 by exam              #+#    #+#             */
/*   Updated: 2019/09/03 11:19:06 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		is_blank(char c)
{
        if (c == ' ' || c == '\t' || c == '\r')
                return (1);
        else if (c == '\n' || c == '\v' || c == '\f')
                return (1);
        else
                return (0);
}

int     is_digit(char c)
{
        if (c >= '0' && c <= '9')
                return (1);
        else
                return (0);
}

int     count_values(char *s, int sign)
{
        int             ans;

        ans = 0;
        while (*s != '\0' && is_digit(*s))
        {
                ans = (ans * 10) + ((*s - '0') * sign);
                s++;
        }
        return (ans);
}

int     ft_atoi(const char *str)
{
        int             sign;

        sign = 1;
        while (is_blank(*str) == 1)
                str++;
        if (is_digit(*str) == 0)
        {
                if (*str == '-')
                        sign = -1;
                else if (*str == '+')
                        sign = 1;
                else
                        return (0);
                str++;
        }
        return (count_values((char *)str, sign));
}

void	ft_putstr(char *s)
{
	while (*s != '\0')
	{
		ft_putchar(*s);
		s++;
	}
}

/*
 * Only put positive int number:
 * */
void	ft_putnbr(int n)
{
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putchar((n % 10) + '0');
	}
	else
		ft_putchar(n + '0');
}

void	print_table(char *numstr)
{
	int	num;
	int	i;

	i = 0;
	num = ft_atoi(numstr);
	while (i++ < 9)
	{
		ft_putnbr(i);
		ft_putstr(" x ");
		ft_putnbr(num);
		ft_putstr(" = ");
		ft_putnbr(i * num);
		ft_putchar('\n');
	}
}

int		main(int ac, char **ag)
{
	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	print_table(ag[1]);
	return (0);
}
