/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_syscall_error.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/29 22:01:21 by sebgoret          #+#    #+#             */
/*   Updated: 2014/05/29 22:03:39 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int			ft_syscall_error(char *syscall)
{
	ft_putstr_fd("Something bad happends with ", 2);
	ft_putstr_fd(syscall, 2);
	ft_putendl_fd("().", 2);
	return (-1);
}
