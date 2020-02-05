/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvidigal <bvidigal@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 14:54:54 by bvidigal          #+#    #+#             */
/*   Updated: 2020/02/04 21:26:44 by bvidigal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;
	size_t	start_copy;

	start_copy = ((size_t)start);
	if (s == 0)
		return (0);
	sub = malloc((len + 1) * sizeof(char));
	if (sub == 0)
		return (0);
	i = 0;
	while (i < len && start_copy < ft_strlen(s))
	{
		sub[i] = s[start_copy + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
