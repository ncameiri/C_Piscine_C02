/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncameiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 14:00:28 by ncameiri          #+#    #+#             */
/*   Updated: 2020/10/27 15:24:53 by ncameiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
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
		if (!((carac >= 'A' && carac <= 'Z') || (carac >= 'a' && carac <= 'z')))
		{
			resp = 0;
			break ;
		}
		elem++;
	}
	return (resp);
}
