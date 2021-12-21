/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouali <isouali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 10:01:35 by isouali           #+#    #+#             */
/*   Updated: 2021/12/18 15:48:37 by isouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include<unistd.h>
# include<stdarg.h>

int		ft_putchar(char c);
int		ft_putstr(char *s);
void	ft_puthex(unsigned int n, int *c);
void	ft_puthex_a(unsigned int n, int *c);
void	ft_putnbr(int n, int *c);
void	ft_putptr(unsigned long n, int *c);
char	ft_format(const char *str);
void	ft_putu(unsigned int n, int *c);
int		ft_printf(const char *p, ...);
int		ft_strlen(char *str);

#endif
