/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouali <isouali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 13:13:35 by isouali           #+#    #+#             */
/*   Updated: 2021/12/18 17:27:58 by isouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"
#include<stdio.h>

static void	ft_pr(char x, int *count, void *arg)
{
	if (x == 'p')
		ft_putptr((unsigned long) arg, count);
	else if (x == 'd' || x == 'i')
		ft_putnbr((int) arg, count);
	else if (x == 'u')
		ft_putu((int) arg, count);
	else if (x == 'x')
		ft_puthex((unsigned int) arg, count);
	else if (x == 'X')
		ft_puthex_a((unsigned long) arg, count);
	else
		return ;
}

int	ft_printf(const char *p, ...)
{
	va_list	list;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(list, p);
	while (p[i])
	{
		if (!ft_format((const char *)&p[i]))
			count += ft_putchar((char)p[i]);
		else if (ft_format((const char *)&p[i]) == 'c')
			count += ft_putchar(va_arg(list, int));
		else if (ft_format((const char *)&p[i]) == 's')
			count += ft_putstr(va_arg(list, char *));
		else if (ft_format((const char *)&p[i]) == '%')
			count += write(1, "%", 1);
		else
			ft_pr(ft_format((const char *)&p[i]), &count, va_arg(list, void *));
		if (ft_format((const char *)&p[i]))
			i++;
		i++;
	}
	va_end(list);
	return (count);
}
