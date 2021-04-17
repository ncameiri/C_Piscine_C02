/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncameiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 10:18:01 by ncameiri          #+#    #+#             */
/*   Updated: 2020/10/27 10:40:07 by ncameiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned	int	elem;

	elem = 0;
	while (elem < n && src[elem] != '\0')
	{
		dest[elem] = src[elem];
		elem++;
	}
	while (elem < n)
	{
		dest[elem] = '\0';
		elem++;
	}
	return (dest);
}
