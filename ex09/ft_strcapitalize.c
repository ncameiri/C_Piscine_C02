/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncameiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 17:52:17 by ncameiri          #+#    #+#             */
/*   Updated: 2020/10/27 19:07:33 by ncameiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	upcase(char *c, int mais)
{
	if (!mais)
	{
		if (*c >= 'A' && *c <= 'Z')
		{
			*c = *c + 32;
		}
	}
	else
	{
		if (*c >= 'a' && *c <= 'z')
		{
			*c = *c - 32;
		}
	}
}

int		num(char c)
{
	return (c >= '0' && c <= '9');
}

int		letra(char c)
{
	return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

void	fn_2(char *carac, int *aux1, int *aux2)
{
	int primeira;

	primeira = 0;
	if (!*aux1)
	{
		if (num(*carac))
			*aux2 = 1;
		else if (letra(*carac) && !*aux2)
		{
			*aux1 = 1;
			primeira = 1;
		}
	}
	upcase(carac, 0);
	if (*aux1)
		upcase(carac, primeira);
}

char	*ft_strcapitalize(char *str)
{
	int		elem;
	char	*carac;
	int		aux1;
	int		aux2;

	elem = 0;
	aux1 = 0;
	aux2 = 0;
	while (1)
	{
		carac = &str[elem];
		if (*carac == '\0')
		{
			break ;
		}
		fn_2(carac, &aux1, &aux2);
		if (!(letra(*carac) || num(*carac)))
		{
			aux1 = 0;
			aux2 = 0;
		}
		elem++;
	}
	return (str);
}
