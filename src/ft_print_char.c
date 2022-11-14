/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_char.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: pyevtush <pyevtush@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/08 19:56:46 by pyevtush      #+#    #+#                 */
/*   Updated: 2022/11/14 18:04:21 by pyevtush      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_print_char(char c)
{
	return (write(1, &c, 1));
}
