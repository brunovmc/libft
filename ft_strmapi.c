/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvidigal <bvidigal@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 19:40:35 by bvidigal          #+#    #+#             */
/*   Updated: 2020/02/19 20:05:21 by bvidigal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*snew;

	if (s == 0)
		return (0);
	len = ft_strlen(s);
	i = 0;
	snew = malloc((len + 1) * sizeof(char));
	if (snew == 0)
		return (0);
	while (i < len)
	{
		snew[i] = f(i, s[i]);
		i++;
	}
	snew[i] = '\0';
	return (snew);
}
