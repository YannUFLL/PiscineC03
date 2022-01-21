/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:53:29 by ydumaine          #+#    #+#             */
/*   Updated: 2022/01/21 13:47:47 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	*ft_strlcat(char *dest, char *src, unsigned int nb)
{
	int unsigned	i;
	int unsigned	u;
	int unsigned	r;

	i = 0;
	u = 0;
	r = 0;
	while (dest[i])
		i++;
	while (src[u])
		u++;
	if ((i + u) < nb)
	{	
		while (src[u])
		{
			dest[i + u] = src[u];
			r++;
		}
	}
	return (i + u);
}
