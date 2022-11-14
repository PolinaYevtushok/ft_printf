/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_str.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: pyevtush <pyevtush@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/08 20:24:15 by pyevtush      #+#    #+#                 */
/*   Updated: 2022/11/14 18:05:05 by pyevtush      ########   odam.nl         */
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
	return (write (1, str, len));
}
