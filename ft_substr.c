/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrdouane <zrdouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:15:26 by zrdouane          #+#    #+#             */
/*   Updated: 2021/11/29 13:29:36 by zrdouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	index;

	if (!s)
		return (NULL);
	index = 0;
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	else if (ft_strlen(s + start) < len)
		dest = malloc(sizeof(char) * (ft_strlen(s + start) + 1));
	else
		dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	while (s[start] && index < len)
	{
		dest[index] = s[start];
		index++;
		start++;
	}
	dest[index] = '\0';
	return (dest);
}
