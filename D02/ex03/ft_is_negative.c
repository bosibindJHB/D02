/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bosibind <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 16:20:06 by bosibind          #+#    #+#             */
/*   Updated: 2020/07/10 17:04:40 by bosibind         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		 ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}
void 	ft_is_negetive(int n)
{
	if		(n > 0)
	{
		ft_putchar('N');
	}
	else
 	{
		ft_putchar('P');
	}
}


