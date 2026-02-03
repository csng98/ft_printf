/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csekakul <csekakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 09:32:35 by csekakul          #+#    #+#             */
/*   Updated: 2026/02/03 08:32:41 by csekakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_pf(int num, size_t *counter)
{
	long	n;

	n = num;
	if (n < 0)
	{
		ft_putchar_pf('-', counter);
		n = -n;
	}
	if (n > 9)
		ft_putnbr_pf(n / 10, counter);
	ft_putchar_pf('0' + (n % 10), counter);
}
