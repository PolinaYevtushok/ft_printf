/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pyevtush <pyevtush@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/08 19:18:59 by pyevtush      #+#    #+#                 */
/*   Updated: 2022/11/08 20:50:47 by pyevtush      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_print_arg(va_list args, const char c);
int	ft_print_char(char c);
int	ft_print_str(char *str);
int	ft_print_ptr(unsigned long long ptr);
int	ft_print_int(int n);
int	ft_print_uint(unsigned int n);
int	ft_print_hex(unsigned int n, char c);
int	ft_print_percent(void);

#endif
