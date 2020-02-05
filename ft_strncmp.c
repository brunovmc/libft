/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvidigal <bvidigal@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 09:45:37 by bvidigal          #+#    #+#             */
/*   Updated: 2020/02/04 09:54:33 by bvidigal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*s1_copy;
	unsigned char	*s2_copy;
	size_t			i;

	s1_copy = ((unsigned char *)s1);
	s2_copy = ((unsigned char *)s2);
	i = 0;
	while (i < n && (s1_copy[i] != '\0' || s2_copy[i] != '\0'))
	{
		if (s1_copy[i] != s2_copy[i])
			return (s1_copy[i] - s2_copy[i]);
		i++;
	}
	return (0);
}
