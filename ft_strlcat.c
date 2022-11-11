/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 01:54:56 by mhanda            #+#    #+#             */
/*   Updated: 2021/11/29 06:21:03 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	if (!dest && !size)
		return (ft_strlen(src));
	len = (size_t) ft_strlen(dest);
	if (size <= len)
		return (size + ft_strlen(src));
	i = 0;
	while (src[i] != 0 && i < size - len - 1)
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = 0;
	return (len + ft_strlen(src));
}
