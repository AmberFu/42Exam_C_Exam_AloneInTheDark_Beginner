/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 10:53:02 by exam              #+#    #+#             */
/*   Updated: 2019/10/22 11:34:52 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list  *sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list	*fst;
	t_list	*snd;
	int		tmp;

	fst = lst;
	while (fst)
	{
		snd = fst->next;
		while (snd)
		{
			if (cmp(fst->data, snd->data) == 0)
			{
				tmp = snd->data;
				snd->data = fst->data;
				fst->data = tmp;
			}
			snd = snd->next;
		}
		fst = fst->next;
	}
	return (lst);
}
