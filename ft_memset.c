/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvidigal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 14:02:47 by bvidigal          #+#    #+#             */
/*   Updated: 2020/01/24 18:11:12 by bvidigal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	if (len > 0)
	{
		while (len--)
		{
			*(unsigned char *)(dest + len) = (unsigned char)(c);
		}
	}
	return (dest);
}
