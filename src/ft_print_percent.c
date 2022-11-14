/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_percent.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: pyevtush <pyevtush@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/08 20:40:29 by pyevtush      #+#    #+#                 */
/*   Updated: 2022/11/14 18:05:47 by pyevtush      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_print_percent(void)
{
	return (write(1, "%", 1));
}
