/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouali <isouali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 10:15:22 by isouali           #+#    #+#             */
/*   Updated: 2021/12/18 15:48:50 by isouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"
#include <unistd.h>

void	ft_puthex(unsigned int n, int *c)
{
	char	*h;

	h = "0123456789abcdef";
	if (n < 16)
	{
		*c += write(1, &h[n], 1);
	}
	else
	{
		ft_puthex(n / 16, c);
		ft_puthex(n % 16, c);
	}
}
