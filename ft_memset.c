/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrdouane <zrdouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:07:54 by zrdouane          #+#    #+#             */
/*   Updated: 2021/11/29 17:23:08 by zrdouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t count)
{
	size_t			z;
	unsigned char	*p;

	z = 0;
	p = (unsigned char *)dest;
	while (z < count)
	{
		p[z++] = c;
	}
	return ((void *)dest);
}
