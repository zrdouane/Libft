/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrdouane <zrdouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:11:56 by zrdouane          #+#    #+#             */
/*   Updated: 2021/11/25 23:54:08 by zrdouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	index_src;
	size_t	len_dst;
	size_t	len_src;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen((char *)src);
	if (dstsize <= len_dst)
		return (dstsize + len_src);
	index_src = 0;
	while (src[index_src] != '\0' && dstsize > (len_dst + 1))
	{
		dst[len_dst] = src[index_src];
		index_src++;
		len_dst++;
	}
	dst[len_dst] = '\0';
	return (len_dst + ft_strlen((char *)(&src[index_src])));
}
