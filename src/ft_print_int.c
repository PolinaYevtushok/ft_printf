/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_int.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: pyevtush <pyevtush@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/08 20:28:29 by pyevtush      #+#    #+#                 */
/*   Updated: 2022/11/10 17:11:52 by pyevtush      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <stdlib.h>

int	ft_print_int(int n)
{
	char	*s;
	int		printed_chars;

	s = ft_itoa(n);
	printed_chars = ft_print_str(s);
	free(s);
	return (printed_chars);
}
