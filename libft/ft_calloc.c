/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japostad <japostad@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 18:38:55 by japostad          #+#    #+#             */
/*   Updated: 2025/01/14 12:31:28 by japostad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*tmp;
	size_t	s;

	s = count * size;
	tmp = malloc(s);
	if (count == 0 || size == 0)
	{
		size = 1;
		count = 1;
	}
	if (tmp == NULL)
		return (NULL);
	else
		ft_bzero (tmp, s);
	return (tmp);
}
