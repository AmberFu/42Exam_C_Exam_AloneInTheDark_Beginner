/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 09:47:36 by exam              #+#    #+#             */
/*   Updated: 2019/08/20 10:13:38 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_haschar(const char *s, char c)
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strpbrk(const char *s1, const char *s2)
{
	char	*str;
	unsigned int	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	str = (char *)s1;
	while (*str)
	{
		if (ft_haschar(s2, *str))
			return (str);
		str++;
	}
	return (0);
}
