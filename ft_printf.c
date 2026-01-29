/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csekakul <csekakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 15:24:04 by csekakul          #+#    #+#             */
/*   Updated: 2026/01/29 13:22:27 by csekakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	ft_iterate(char *str)
{
	static int	i;

	i = 0;
	while (str != "%" || str != '\0')
	{
		write (1, str[i], 1);
		i++;
	}
	return (i);
}

void	ft_conditions(char *str, int i)
{
	ft_iterate(str);
	if (str[i] == "%")
	{
		i += 1;
		if (str[i] == "%")
			write (1, "%", 1);
		else if (str[i] == "c")
			ft_putchar (str);
		else if (str[i] == "s")
			prt_str(str);
		else if (str[i] == "p")
		else if (str[i] == "d")
		else if (str[i] == "i")
			prt_int(str);
		else if (str[i] == "u")
		else if (str[i] == "x")
		else if (str[i] == "X")
	}
	if (str[i] == '\0')
		return (0);
}

int	ft_printf(const char *format, ...)
{
	void	*x;
	va_list	args;

	va_start(args, format);
	x = va_arg(args, void *);
	va_end(args);
	return (0);
}
