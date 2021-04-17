/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncameiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 16:51:58 by ncameiri          #+#    #+#             */
/*   Updated: 2020/10/27 17:19:39 by ncameiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char		*ft_strupcase(char *str)
{
	int		elem;
	char	carac;

	elem = 0;
	while (1)
	{
		carac = str[elem];
		if (carac == '\0')
		{
			break ;
		}
		if (carac >= 'a' && carac <= 'z')
		{
			str[elem] = carac - 32;
		}
		elem++;
	}
	return (str);
}
