/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrdouane <zrdouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:04:48 by zrdouane          #+#    #+#             */
/*   Updated: 2021/11/29 17:23:52 by zrdouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			z;
	unsigned char	*string;
	unsigned char	chr;

	string = (unsigned char *)str;
	chr = (unsigned char)c;
	z = 0;
	while (z < n)
	{
		if (*string == chr)
			return ((void *)string);
		string++;
		z++;
	}
	return (0);
}
