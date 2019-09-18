/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 09:40:13 by exam              #+#    #+#             */
/*   Updated: 2019/09/03 10:51:53 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_blank(char c)
{
	if (c == ' ' || c == '\t' || c == '\r')
		return (1);
	else if (c == '\n' || c == '\v' || c == '\f')
		return (1);
	else
		return (0);
}

int		is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int		count_values(char *s, int sign)
{
	int		ans;

	ans = 0;
	while (*s != '\0' && is_digit(*s))
	{
		ans = (ans * 10) + ((*s - '0') * sign);
		s++;
	}
	return (ans);
}

int		ft_atoi(const char *str)
{
	int		sign;

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
