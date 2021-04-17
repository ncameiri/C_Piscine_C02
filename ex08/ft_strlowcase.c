/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncameiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 17:38:29 by ncameiri          #+#    #+#             */
/*   Updated: 2020/10/27 17:43:38 by ncameiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
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
		if (carac >= 'A' && carac <= 'Z')
		{
			str[elem] = carac + 32;
		}
		elem++;
	}
	return (str);
}
