/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoustani <aoustani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 04:03:52 by aoustani          #+#    #+#             */
/*   Updated: 2021/12/31 20:22:49 by aoustani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *c, ...);
int		ft_putchar(char c);
int		ft_putnbr(long n);
int		ft_putstr(char *s);
int		ft_uputnbr(unsigned int n);
long	ft_nblen(long long n);
int		ft_upperhexa(unsigned int n);
int		ft_lowhexa(unsigned long long n);

#endif