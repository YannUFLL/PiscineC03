/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:59:00 by ydumaine          #+#    #+#             */
/*   Updated: 2022/01/22 20:28:10 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int unsigned	i;
	int unsigned	u;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i])
	{
		u = 0;
		if (str[i] == to_find[u])
		{
			while (to_find[u])
			{
				if (str[i + u] == to_find[u])
				{
					if (to_find[u + 1] == '\0')
						return (&str[i]);
				}
				u++;
			}
		}
	i++;
	}
	return (0);
}
