/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 22:53:06 by mhanda            #+#    #+#             */
/*   Updated: 2021/11/29 06:18:18 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len;
	int		j;
	char	*pip;

	i = 0;
	j = i;
	if (!s1)
		return (NULL);
	len = ft_strlen(s1);
	while (s1[i] && ft_check(s1[i], (char *)set))
		i++;
	while (i < len && ft_check(s1[len - 1], (char *)set))
		len--;
	pip = malloc((len - i) + 1 * sizeof(char));
	if (!pip)
		return (NULL);
	while (len > i)
	{
		pip[j++] = s1[i++];
	}
	pip[j] = 0;
	return (pip);
}
