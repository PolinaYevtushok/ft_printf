/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_str.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: pyevtush <pyevtush@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/08 20:24:15 by pyevtush      #+#    #+#                 */
/*   Updated: 2022/11/08 21:04:18 by pyevtush      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <unistd.h>

int	ft_print_str(char *str)
{
	size_t	len;

	len = ft_strlen(str);
	write (1, str, len);
	return (len);
}
