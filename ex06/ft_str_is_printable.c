/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncameiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 16:33:06 by ncameiri          #+#    #+#             */
/*   Updated: 2020/10/27 16:43:32 by ncameiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_printable(char *str)
{
	int		elem;
	int		resp;
	char	carac;

	elem = 0;
	resp = 1;
	while (1)
	{
		carac = str[elem];
		if (carac == '\0')
		{
			break ;
		}
		if (!(carac >= ' ') || carac == 127)
		{
			resp = 0;
			break ;
		}
		elem++;
	}
	return (resp);
}
