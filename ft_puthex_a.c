/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 10:24:38 by isouali           #+#    #+#             */
/*   Updated: 2021/12/14 20:53:50 by isouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include"ft_printf.h"

void	ft_puthex_a(unsigned int n, int *c)
{
	char	*h;

	h = "0123456789ABCDEF";
	if (n < 16)
	{
		write(1, &h[n], 1);
		*c += 1;
	}
	else
	{
		ft_puthex_a(n / 16, c);
		ft_puthex_a(n % 16, c);
	}
}
