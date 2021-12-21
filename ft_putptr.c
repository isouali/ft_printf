/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouali <isouali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 13:20:43 by isouali           #+#    #+#             */
/*   Updated: 2021/12/17 02:20:51 by isouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"
#include<unistd.h>

static void	ft_puthexo(unsigned long n, int *c)
{
	char	*h;

	h = "0123456789abcdef";
	if (n < 16)
	{
		write(1, &h[n], 1);
		(*c)++;
	}
	else
	{
		ft_puthexo(n / 16, c);
		ft_puthexo(n % 16, c);
	}
}

void	ft_putptr(unsigned long n, int *c)
{
	write(1, "0x", 2);
	*c += 2;
	ft_puthexo(n, c);
}
