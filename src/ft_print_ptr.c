/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_ptr.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: pyevtush <pyevtush@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/08 20:27:33 by pyevtush      #+#    #+#                 */
/*   Updated: 2022/11/10 17:22:35 by pyevtush      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <unistd.h>

static int	ft_print_hex_char(int n)
{
	if (n >= 10)
		return (ft_print_char(n + 87));
	else
		return (ft_print_char(n + 48));
}

static int	ft_convert_ptr(unsigned long long ptr)
{
	int		printed_chars;

	printed_chars = 0;
	if (ptr >= 16)
		printed_chars += ft_convert_ptr(ptr / 16);
	printed_chars += ft_print_hex_char(ptr % 16);
	return (printed_chars);
}

int	ft_print_ptr(unsigned long long ptr)
{
	int	printed_chars;

	printed_chars = write(1, "0x", 2);
	if (!ptr)
		printed_chars += write(1, "0", 1);
	printed_chars += ft_convert_ptr(ptr);
	return (printed_chars);
}
