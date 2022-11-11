/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:11:18 by mhanda            #+#    #+#             */
/*   Updated: 2021/11/29 06:17:10 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len_s;

	len_s = 0;
	while (s[len_s] != 0)
	{
		len_s++;
	}
	while (len_s >= 0)
	{
		if (((const char *)s)[len_s] == (char)c)
		{
			return ((char *)&s[len_s]);
		}
		len_s--;
	}
	return (NULL);
}
