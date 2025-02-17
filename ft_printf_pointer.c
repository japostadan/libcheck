/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japostad <japostad@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 19:52:46 by japostad          #+#    #+#             */
/*   Updated: 2025/02/10 17:38:29 by japostad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_pointer(char const format, va_list ap, int *len)
{
	unsigned long long	p;
	char				*to_write;

	p = va_arg(ap, unsigned long long);
	if((void *)p == NULL)
	{
		write (1, "(nil)", 5);
		*len +=5;
	}
	else
	{
		to_write = ft_utoa_base(p, ft_baselen(format));
		if (!to_write)
		{
			(*len) = -1;
			return (*len);
		}
		ft_printf_putnbr(format, to_write, len);
		free(to_write);
	}
	return (*len);
}
