/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:13:55 by ydumaine          #+#    #+#             */
/*   Updated: 2022/01/29 15:13:33 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int unsigned	i;
	int				c;
	int				a;
	int				b;

	i = 0;
	c = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		a = s1[i];
		b = s2[i];
		if (s1[i] < 0)
		a = 128 - s1[i];
		if (s2[i] < 0)
		b = 128 - s1[i];
		if (a > b)
			c = 1;
		else if (a < b)
			c = -1;
		if (c != 0)
			break ;
	i++;
	}
	return (c);
}
#include <stdio.h>
int	main()
{

	int	c;
	c = ft_strncmp("boa", "boa", 7);
	printf("%d", c);
}
