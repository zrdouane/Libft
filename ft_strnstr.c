/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrdouane <zrdouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:16:25 by zrdouane          #+#    #+#             */
/*   Updated: 2021/11/28 17:45:41 by zrdouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		n = 0;
		while (needle[n] && haystack[i + n]
			&& haystack[i + n] == needle[n] && i + n < len)
			n++;
		if (needle[n] == '\0')
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
