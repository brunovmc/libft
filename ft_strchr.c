/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvidigal <bvidigal@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 16:56:53 by bvidigal          #+#    #+#             */
/*   Updated: 2020/02/06 14:18:18 by bvidigal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		len;
	char	*scpy;

	scpy = (char *)s;
	i = 0;
	len = ft_strlen(scpy);
	if (c == '\0')
		return (&scpy[len]);
	while (scpy[i] != '\0')
	{
		if (scpy[i] == c)
			return (&scpy[i]);
		i++;
	}
	return (0);
}
