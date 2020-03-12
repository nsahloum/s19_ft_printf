/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahloum <nsahloum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 18:03:06 by nsahloum          #+#    #+#             */
/*   Updated: 2020/03/12 03:19:47 by nsahloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include "libft/libft.h"

int		apply_type(const char *format, int i, va_list argp);
int		check_type(const char format);
int		check_format(const char *format, va_list argp);
int		ft_printf(const char *format, ...);
void	ft_print_char(int car, const char *format, int i);
int		ft_treat_space(const char *format, int i);
void	ft_print_string(char *str);
void	ft_print_pointer(size_t p);
void	ft_print_num(int nbr);
void	ft_print_num_uns(unsigned int nbr);
void	ft_print_hexlow(unsigned int nbr);
void	ft_print_hexup(unsigned int nbr);

#endif
