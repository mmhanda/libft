/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 13:49:41 by mhanda            #+#    #+#             */
/*   Updated: 2021/11/29 06:37:22 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *sr, size_t len)
{
	unsigned char	*dest;
	unsigned char	*src;
	size_t			i;

	i = 0;
	if (!dst && !sr)
		return (NULL);
	dest = (unsigned char *)dst;
	src = (unsigned char *)sr;
	if (src < dest)
	{
		while (i++ < len)
			dest[len - i] = src[len - i];
	}
	else
	{
		while (len-- > 0)
			*(dest++) = *(src++);
	}
	return (dst);
}
