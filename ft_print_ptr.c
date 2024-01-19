/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:17:09 by ilbendib          #+#    #+#             */
/*   Updated: 2023/11/27 11:43:32 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_ptr(unsigned long long nb, int *count)
{
	if (nb >= 16)
	{
		ft_put_ptr(nb / 16, count);
		ft_put_ptr(nb % 16, count);
	}
	else
	{
		if (nb <= 9)
			*count += ft_putchar(nb + 48);
		else
			*count += ft_putchar(nb - 10 + 'a');
	}
}

int	ft_print_ptr(unsigned long long nb)
{
	int	count;

	count = 0;
	if (nb == 0)
		return (ft_putstr("(nil)"));
	else
	{
		count += write (1, "0x", 2);
		ft_put_ptr(nb, &count);
	}
	return (count);
}
