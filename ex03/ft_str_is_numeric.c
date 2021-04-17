/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncameiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 14:45:07 by ncameiri          #+#    #+#             */
/*   Updated: 2020/10/27 15:32:58 by ncameiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_numeric(char *str)
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
		if (!(carac >= '0' && carac <= '9'))
		{
			resp = 0;
			break ;
		}
		elem++;
	}
	return (resp);
}
