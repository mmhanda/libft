/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 22:53:36 by mhanda            #+#    #+#             */
/*   Updated: 2021/11/29 06:22:45 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len_s1;
	char	*m;
	int		i;

	i = 0;
	len_s1 = ft_strlen(s1);
	m = (char *)malloc(sizeof(char) * (len_s1 + 1));
	if (!m)
		return (NULL);
	while (len_s1--)
	{
			m[i] = s1[i];
			i++;
	}
	m[i] = '\0';
	return (m);
}
