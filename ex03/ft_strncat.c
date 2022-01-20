/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:53:29 by ydumaine          #+#    #+#             */
/*   Updated: 2022/01/20 17:57:06 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int unsigned	i;
	int unsigned	u;

	i = 0;
	u = 0;
	while (dest[i])
		i++;
	while (src[u] && u < nb)
	{
		dest[i + u] = src[u];
		u++;
	}
	return (dest);
}
