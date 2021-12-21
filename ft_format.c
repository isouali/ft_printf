/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouali <isouali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 12:17:18 by isouali           #+#    #+#             */
/*   Updated: 2021/12/18 15:22:40 by isouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

char	ft_format(const char *str)
{
	char	*p;
	int		i;

	i = 0;
	p = "cspdiuxX%";
	if (str[0] == '%')
	{
		while (p[i])
		{
			if (p[i] == str[1])
				return (p[i]);
			i++;
		}
	}
	return (0);
}
