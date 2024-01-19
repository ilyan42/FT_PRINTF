/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbendib <ilbendib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:35:22 by ilbendib          #+#    #+#             */
/*   Updated: 2023/11/28 10:31:07 by ilbendib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

int	ft_putchar(char c);
int	ft_putnbr_unsigned(unsigned int nb);
int	ft_putstr(char *str);
int	ft_putnbr(int nb);
int	ft_strlen(char *str);
int	ft_printf(const char *str, ...);
int	ft_print_hexa(unsigned int nb, char const c);
int	ft_print_ptr(unsigned long long nb);

#endif
