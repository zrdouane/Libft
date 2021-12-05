/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrdouane <zrdouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 04:41:37 by zrdouane          #+#    #+#             */
/*   Updated: 2021/11/27 11:47:34 by zrdouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		index;
	int		len;
	char	*str;

	index = 0;
	len = ft_strlen(s1);
	str = ((char *)malloc(sizeof(*str) * (len + 1)));
	if (str == NULL)
		return (NULL);
	while (index < len)
	{
		str[index] = s1[index];
		index++;
	}
	str[index] = '\0';
	return (str);
}
