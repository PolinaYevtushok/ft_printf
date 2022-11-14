/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_uint.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: pyevtush <pyevtush@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/08 20:33:15 by pyevtush      #+#    #+#                 */
/*   Updated: 2022/11/14 18:05:32 by pyevtush      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_print_uint(unsigned int n)
{
	int		printed_chars;
	char	c;

	printed_chars = 0;
	if (n > 9)
		printed_chars += ft_print_uint(n / 10);
	c = n % 10 + '0';
	printed_chars += write(1, &c, 1);
	return (printed_chars);
}
