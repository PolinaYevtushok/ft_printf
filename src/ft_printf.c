/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pyevtush <pyevtush@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/08 19:17:56 by pyevtush      #+#    #+#                 */
/*   Updated: 2022/11/14 18:55:21 by pyevtush      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	int		printed_chars;
	int		char_was_printed;
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
			char_was_printed = ft_print_arg(args, str[i + 1]);
			if (char_was_printed != -42)
			{
				++i;
				printed_chars += char_was_printed;
			}
		}
		++i;
	}
	va_end(args);
	return (printed_chars);
}
