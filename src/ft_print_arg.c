/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_arg.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: pyevtush <pyevtush@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/08 20:04:36 by pyevtush      #+#    #+#                 */
/*   Updated: 2022/11/10 17:42:23 by pyevtush      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_arg(va_list args, const char c)
{
	int	printed_chars;

	printed_chars = 0;
	if (c == 'c')
		printed_chars += ft_print_char(va_arg(args, int));
	else if (c == 's')
		printed_chars += ft_print_str(va_arg(args, char *));
	else if (c == 'p')
		printed_chars += ft_print_ptr(va_arg(args, unsigned long long));
	else if (c == 'd' || c == 'i')
		printed_chars += ft_print_int(va_arg(args, int));
	else if (c == 'u')
		printed_chars += ft_print_uint(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		printed_chars += ft_print_hex(va_arg(args, unsigned int), c);
	else if (c == '%')
		printed_chars += ft_print_percent();
	return (printed_chars);
}
