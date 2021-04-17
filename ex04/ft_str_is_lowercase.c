/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncameiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 15:42:57 by ncameiri          #+#    #+#             */
/*   Updated: 2020/10/27 16:06:04 by ncameiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_lowercase(char *str)
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
		if (!(carac >= 'a' && carac <= 'z'))
		{
			resp = 0;
			break ;
		}
		elem++;
	}
	return (resp);
}
