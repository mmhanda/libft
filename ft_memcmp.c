/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:07:10 by mhanda            #+#    #+#             */
/*   Updated: 2021/11/29 06:30:45 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned char		*s11;
	unsigned char		*s22;

	s22 = (unsigned char *)s2;
	s11 = (unsigned char *)s1;
	i = 0;
	while (i < n)
	{
		if (s22[i] != s11[i])
			return (s11[i] - s22[i]);
		i++;
	}
	return (0);
}
