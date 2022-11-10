/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_str.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: pyevtush <pyevtush@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/08 20:24:15 by pyevtush      #+#    #+#                 */
/*   Updated: 2022/11/10 18:03:58 by pyevtush      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <unistd.h>

int	ft_print_str(char *str)
{
	size_t	len;

	if (!str)
		return (write(1, "(null)", 6));
	len = ft_strlen(str);
	write (1, str, len);
	return (len);
}
