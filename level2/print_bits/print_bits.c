/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 09:36:53 by exam              #+#    #+#             */
/*   Updated: 2019/10/22 10:24:35 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	set_array_zero(int	*bit, int n)
{
	while (n > 0)
	{
		bit[n - 1] = 0;
		n--;
	}
}

void	int_to_bit(int in, int	bit[8])
{
	if (in >= 128)
	{
		bit[7] = 1;
		in -= 128;
	}
	if (in >= 64)
	{
		bit[6] = 1;
		in -= 64;
	}
	if (in >= 32)
	{
		bit[5] = 1;
		in -= 32;
	}
	if (in >= 16)
	{
		bit[4] = 1;
		in -= 16;
	}
	if (in >= 8)
	{
		bit[3] = 1;
		in -= 8;
	}
	if (in >= 4)
	{
		bit[2] = 1;
		in -= 4;
	}
	if (in >= 2)
	{
		bit[1] = 1;
		in -= 2;
	}
	if (in >= 1)
	{
		bit[0] = 1;
		in -= 1;
	}
}

void    print_bits(unsigned char octet)
{
	int		in;
	int		bit[8];
	int		i;

	i = 7;
	in = octet;
	set_array_zero((int *)bit, 8);
	int_to_bit(in, bit);
	while (i >= 0)
	{
		ft_putchar(bit[i] + '0');
		i--;
	}
}
