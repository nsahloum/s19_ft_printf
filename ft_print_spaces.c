/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_spaces.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahloum <nsahloum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 18:21:43 by nsahloum          #+#    #+#             */
/*   Updated: 2020/07/01 18:55:49 by nsahloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_treat_space(const char *format, int end, int fo)
{
	const char	*tmp;
	int			nbr;
	int			start;
	int			before_after_zero;

	before_after_zero = 0;
	start = end;
	while (ft_isdigit(format[start]))
		start--;
	tmp = ft_substr(format, start + 1, end - start + 1);
	nbr = ft_atoi(tmp);
	if (format[start] == '-')
		before_after_zero = 1;
	if (format[start + 1] == 48 && format[start] != '-')
		before_after_zero = 2;
	if (fo == 0)
		ft_print_spaces(nbr, before_after_zero);
	if (before_after_zero == 1)
		return (-1 * nbr);
	if (before_after_zero == 0)
		return (nbr);
	return(0);
}

void	ft_print_spaces(int nbr, int before_after_zero)
{
	char c;

	if (before_after_zero == 1 || before_after_zero == 0)
		c = 32;
	if (before_after_zero == 2)
		c = 48;
	if (before_after_zero == 1)
		ft_putchar_fd('%', 1);
	while (nbr > 1)
	{
		ft_putchar_fd(c, 1);
		nbr --;
	}
	if (before_after_zero == 0 || before_after_zero == 2)
		ft_putchar_fd('%', 1);
}

void	ft_print_spaces_format(int nbr)
{
	while (nbr > 1)
	{
		ft_putchar_fd(' ', 1);
		nbr --;
	}
}