/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahloum <nsahloum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 19:57:58 by nsahloum          #+#    #+#             */
/*   Updated: 2020/07/24 21:28:06 by nsahloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	//ft_printf("%0-8.5i %c", 34, 't');
	printf("%c", '\n');
	printf("%-3.7u\n", 3267);
	printf("%-3.7i", 3267);
}
