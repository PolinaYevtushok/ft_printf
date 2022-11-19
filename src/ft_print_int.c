/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_int.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: pyevtush <pyevtush@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/08 20:28:29 by pyevtush      #+#    #+#                 */
/*   Updated: 2022/11/16 19:17:42 by pyevtush      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <unistd.h>

int	ft_print_int(int n)
{
	char	c;
	int		printed_chars;

	printed_chars = 0;
	if (n == -2147483648)
		return (write (1, "-2147483648", 11));
	else
	{
		if (n < 0)
		{
			n *= -1;
			printed_chars += write(1, "-", 1);
		}
		if (n > 9)
			printed_chars += ft_print_int(n / 10);
		c = n % 10 + '0';
		printed_chars += write(1, &c, 1);
	}
	return (printed_chars);
}
