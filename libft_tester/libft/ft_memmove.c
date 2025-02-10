/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japostad <japostad@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 18:59:09 by japostad          #+#    #+#             */
/*   Updated: 2024/12/30 18:59:54 by japostad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*ptr;

	ptr = dst;
	if (!src && !dst)
		return (dst);
	if (dst == src)
		return (dst);
	if (dst > src)
	{
		while (len--)
			((char *)dst)[len] = ((char *)src)[len];
	}
	else
	{
		while (len--)
			*(char *)dst++ = *(char *)src++;
	}
	return (ptr);
}
