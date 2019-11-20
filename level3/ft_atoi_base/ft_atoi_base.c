/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 09:58:30 by exam              #+#    #+#             */
/*   Updated: 2019/11/19 11:03:12 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_strlen(char *s)
{
        int     i;

        i = 0;
        while (*s++ != '\0')
                i++;
        return (i);
}

int	exp_base(int base, int exp)
{
	int	ans;

	ans = base;
	if (exp == 0)
		return (1);
	while (--exp > 0)
		ans *= base;
	return (ans);
}

int	ft_ctoi(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'a' && c <= 'f')
		return ((c - 'a') + 10);
	else if (c >= 'A' && c <= 'F')
		return ((c - 'A') + 10);
	else
		return (0);
}

int ft_atoi_base(const char *str, int str_base)
{
	int		ans;
	int		flag;
	int		strlen;

	ans = 0;
	flag = 1;
	if (*str == '-')
	{
		str++;
		flag = -1;
	}
	strlen = ft_strlen((char *)str);
	while (*str != '\0' && strlen > 0)
	{
		ans += ft_ctoi(*str) * exp_base(str_base, strlen - 1);
		strlen--;
		str++;
	}
	return (ans * flag);
}
