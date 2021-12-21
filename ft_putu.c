/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putu.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 13:30:03 by isouali           #+#    #+#             */
/*   Updated: 2021/12/16 01:50:20 by isouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_putu(unsigned int nb, int *c)
{
	if (nb <= 9)
	{
		ft_putchar(nb + '0');
		*c += 1;
	}
	else
	{
		ft_putu(nb / 10, c);
		ft_putu(nb % 10, c);
	}
}
