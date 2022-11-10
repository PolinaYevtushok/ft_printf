/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_hex.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: pyevtush <pyevtush@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/08 20:39:03 by pyevtush      #+#    #+#                 */
/*   Updated: 2022/11/10 17:44:43 by pyevtush      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_print_hex_char(int n, int format)
{
	if (n >= 10)
		return (ft_print_char(n + format - 33));
	else
		return (ft_print_char(n + 48));
}

int	ft_print_hex(unsigned int n, int format)
{
	int		printed_chars;

	printed_chars = 0;
	if (n >= 16)
		printed_chars += ft_print_hex(n / 16, format);
	printed_chars += ft_print_hex_char(n % 16, format);
	return (printed_chars);
}
