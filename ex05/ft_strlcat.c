/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:53:29 by ydumaine          #+#    #+#             */
/*   Updated: 2022/01/22 22:00:02 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int nb)
{
	int unsigned	i;
	int unsigned	u;
	int unsigned	r;
	int unsigned	p;

	i = 0;
	u = 0;
	r = 0;
	while (dest[i])
		i++;
	while (src[u])
		u++;
	if (nb + u < i)
		p = nb + u;
	else if (nb + u < i + u)
		p = u + nb;
	else if (nb + u > i + u)
		p = i + u;
	while (i + r < nb - 1)
	{
		dest[i + r] = src[r];
		r++;
	}
	dest[i + r] = 0;
	return (p);
}
