/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvidigal <bvidigal@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 18:32:32 by bvidigal          #+#    #+#             */
/*   Updated: 2020/02/19 19:16:11 by bvidigal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_size(int n)
{
	int size;

	size = 0;
	if (n == -2147483648)
		n = n + 1;
	if (n < 0)
	{
		size = size + 1;
		n = n * -1;
	}
	while (n / 10 > 0)
	{
		size = size + 1;
		n = n / 10;
	}
	size = size + 1;
	return (size);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*s;
	int		i;

	s = malloc((ft_size(n) + 1) * sizeof(char));
	if (s == 0)
		return (0);
	i = 0;
	if (n < 0)
	{
		s[i] = '-';
		i++;
	}
	s[ft_size(n)] = '\0';
	size = ft_size(n) - 1;
	while (size >= i)
	{
		if (n < 0)
			s[size] = (n % 10) * -1 + 48;
		else
			s[size] = n % 10 + 48;
		n = n / 10;
		size--;
	}
	return (s);
}
