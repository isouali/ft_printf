/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 10:35:12 by isouali           #+#    #+#             */
/*   Updated: 2021/12/09 08:05:26 by isouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"
#include<unistd.h>

void	ft_putnbr(int n, int *c)
{
	long long	nb;

	nb = n;
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
		*c += 1;
	}
	if (nb <= 9)
	{
		ft_putchar(nb + '0');
		*c += 1;
	}
	else
	{
		ft_putnbr(nb / 10, c);
		ft_putnbr(nb % 10, c);
	}
}
