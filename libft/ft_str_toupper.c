/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_toupper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japostad <japostad@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 15:03:38 by japostad          #+#    #+#             */
/*   Updated: 2025/02/10 15:06:10 by japostad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Capitalize set of strings */

#include "libft.h"

void	ft_str_toupper(char *str)
{
	while (*str)
	{
		*str = ft_toupper(*str);
		str++;
	}
}
