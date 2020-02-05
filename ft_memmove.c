/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvidigal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 15:55:07 by bvidigal          #+#    #+#             */
/*   Updated: 2020/02/04 11:39:29 by bvidigal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char			*d;
	const char		*s;
	const char		*lasts;
	char			*lastd;

	d = dst;
	s = src;
	lasts = s + (len - 1);
	lastd = d + (len - 1);
	if (src == dst)
		return (0);
	if (d < s)
		while (len--)
			*d++ = *s++;
	else
		while (len--)
			*lastd-- = *lasts--;
	return (dst);
}
