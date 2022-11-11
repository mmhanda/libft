/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 21:15:46 by mhanda            #+#    #+#             */
/*   Updated: 2021/11/29 06:20:07 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *str_to_find, size_t len)
{	
	int		i;
	size_t	j;
	int		len_str_to_find;
	int		k;

	i = 0;
	if (str_to_find[0] == '\0')
		return ((char *)str);
	len_str_to_find = ft_strlen(str_to_find);
	while (str[i])
	{
		j = i;
		k = 0;
		while (str[j] == str_to_find[k] && j < len && str[j] && str_to_find[k])
		{
			j++;
			k++;
		}
		if (len_str_to_find == k)
			return ((char *) &str[i]);
		i++;
	}
	return (NULL);
}
