/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:58:35 by mhanda            #+#    #+#             */
/*   Updated: 2021/11/29 06:27:49 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	char unsigned	*k;

	k = b;
	i = 0;
	while (len)
	{
		k[i] = (unsigned char)c;
		i++;
		len--;
	}
	return (k);
}
