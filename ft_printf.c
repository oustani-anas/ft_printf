/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 04:03:27 by aoustani          #+#    #+#             */
/*   Updated: 2022/01/01 20:34:44 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check1(char c, va_list ptr)
{
	int	count;

	count = 0;
	if (c == 'c')
		count = ft_putchar((char)va_arg(ptr, int));
	else if (c == 's')
		count = ft_putstr(va_arg(ptr, char *));
	else if (c == 'u')
		count = ft_uputnbr(va_arg(ptr, unsigned int));
	else if (c == 'd' || c == 'i')
		count = ft_putnbr(va_arg(ptr, int));
	else if (c == '%')
		count = ft_putchar('%');
	else if (c == 'x')
		count = ft_lowhexa(va_arg(ptr, unsigned int));
	else if (c == 'X')
		count = ft_upperhexa(va_arg(ptr, unsigned int));
	else if (c == 'p')
	{
		count += ft_putstr("0x");
		count += ft_lowhexa(va_arg(ptr, unsigned long));
	}
	return (count);
}

int	ft_printf(const char *f, ...)
{
	va_list	ptr;
	int		i;
	int		count;

	count = 0;
	va_start (ptr, f);
	i = 0;
	while (f[i])
	{
		if (f[i] == '%')
		{
			i++;
			if (f[i] == '\0')
				break ;
			count += check1(f[i], ptr);
		}
		else
			count += ft_putchar(f[i]);
		i++;
	}
	return (count);
	va_end(ptr);
}
