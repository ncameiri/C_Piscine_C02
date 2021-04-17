/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncameiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 16:15:46 by ncameiri          #+#    #+#             */
/*   Updated: 2020/10/27 16:21:01 by ncameiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_uppercase(char *str)
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
		if (!(carac >= 'A' && carac <= 'Z'))
		{
			resp = 0;
			break ;
		}
		elem++;
	}
	return (resp);
}
