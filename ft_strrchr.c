/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvidigal <bvidigal@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 17:11:48 by bvidigal          #+#    #+#             */
/*   Updated: 2020/02/03 17:17:44 by bvidigal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	x;
	int		i;
	int		len;
	char	*scpy;

	scpy = (char *)s;
	x = ((char)c);
	len = ft_strlen(scpy);
	i = len - 1;
	if (c == '\0')
		return (&scpy[len]);
	while (i >= 0)
	{
		if (scpy[i] == c)
			return (&scpy[i]);
		i--;
	}
	return (0);
}
