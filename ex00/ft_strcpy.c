/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncameiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 21:48:35 by ncameiri          #+#    #+#             */
/*   Updated: 2020/10/27 10:09:05 by ncameiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int elem;

	elem = 0;
	while (src[elem] != '\0')
	{
		dest[elem] = src[elem];
		elem++;
	}
	dest[elem] = '\0';
	return (dest);
}
