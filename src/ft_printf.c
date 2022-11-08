/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pyevtush <pyevtush@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/08 19:17:56 by pyevtush      #+#    #+#                 */
/*   Updated: 2022/11/08 20:04:14 by pyevtush      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	int		printed_chars;
	va_list	args;

	va_start(args, str);
	i = 0;
	printed_chars = 0;
	while (str[i])
	{
		if (str[i] != '%')
			printed_chars += ft_print_char(str[i]);
		else
		{
			printed_chars += ft_print_arg(args, str[i + 1]);
			++i;
		}
		++i;
	}
	return (printed_chars);
}
