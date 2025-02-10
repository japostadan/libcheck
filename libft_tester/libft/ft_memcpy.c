/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japostad <japostad@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 18:30:16 by japostad          #+#    #+#             */
/*   Updated: 2024/12/30 18:30:28 by japostad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*a;
	const char	*b;
	size_t		i;

	b = src;
	a = dst;
	i = 0;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		*a++ = *b++;
		n--;
	}
	return (dst);
}
