/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 11:07:18 by exam              #+#    #+#             */
/*   Updated: 2019/11/19 11:26:53 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_abs(int start, int end)
{
	if (start >= end)
		return (start - end + 1);
	else
		return (end - start + 1);
}

int		plus_minus(int start, int end)
{
	if (start >= end)
		return (-1);
	else
		return (1);
}

int     *ft_range(int start, int end)
{
	int	i = -1;
	int	flag;
	int	size;
	int	*int_arr;

	flag = plus_minus(start, end);
	size = ft_abs(start, end);
	int_arr = (int *)malloc(sizeof(int) * size);
	while (++i < size)
		int_arr[i] = start + (i * flag);
	return (int_arr);
}
