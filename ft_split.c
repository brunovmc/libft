/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvidigal <bvidigal@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 15:54:45 by bvidigal          #+#    #+#             */
/*   Updated: 2020/02/06 15:54:51 by bvidigal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countword(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			if (i > 0 && s[i - 1] != c)
				count = count + 1;
		}
		i++;
	}
	return (count);
}

static size_t	ft_countletter(char const *s, char c, size_t i)
{
	size_t j;

	j = 0;
	while (s[i + j] != c && (i + j) < ft_strlen(s))
		j++;
	return (j);
}

static char		**ft_fillmatrix(char const *s, char c, char **matrix, size_t r)
{
	size_t	j;
	size_t	i;

	i = 0;
	while (i < ft_strlen(s))
	{
		if (s[i] == c)
			i++;
		else
		{
			j = ft_countletter(s, c, i);
			matrix[r] = (char*)malloc((j + 1) * sizeof(char));
			j = 0;
			while (s[i] != c && i < ft_strlen(s))
			{
				matrix[r][j] = s[i];
				i++;
				j++;
			}
			matrix[r][j] = '\0';
			r++;
		}
	}
	matrix[r] = NULL;
	return (matrix);
}

char			**ft_split(char const *s, char c)
{
	char	**matrix;
	size_t	r;

	if (s == 0)
		return (0);
	matrix = (char**)malloc((ft_countword(s, c) + 1) * sizeof(char*));
	r = 0;
	if (matrix == 0)
		return (0);
	matrix = ft_fillmatrix(s, c, matrix, r);
	return (matrix);
}
