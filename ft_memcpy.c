/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 10:38:16 by mhanda            #+#    #+#             */
/*   Updated: 2021/11/29 06:29:21 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int			i;
	char		*d;
	const char	*s;

	i = 0;
	s = (const char *) src;
	d = (char *) dst;
	if (dst == NULL && src == NULL)
	{
		return (NULL);
	}
	while (n)
	{
		d[i] = s[i];
		i++;
		n--;
	}
	return (d);
}
