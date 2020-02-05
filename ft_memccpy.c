/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvidigal <bvidigal@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 11:40:13 by bvidigal          #+#    #+#             */
/*   Updated: 2020/02/04 11:51:30 by bvidigal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	x;
	unsigned char	*dst_copy;
	unsigned char	*src_copy;
	size_t			i;

	x = ((unsigned char)c);
	dst_copy = ((unsigned char *)dst);
	src_copy = ((unsigned char *)src);
	i = 0;
	if (dst == src)
		return (0);
	while (i < n)
	{
		dst_copy[i] = src_copy[i];
		if (src_copy[i] == x)
			return (&dst_copy[i + 1]);
		i++;
	}
	return (0);
}
