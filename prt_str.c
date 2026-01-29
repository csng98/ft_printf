/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prt_str.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csekakul <csekakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 09:34:46 by csekakul          #+#    #+#             */
/*   Updated: 2026/01/29 13:14:29 by csekakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	prt_str(char const *str)
{
	if (str == NULL)
		return (write(1, "(nil)", 5));
	else
		return (write(1, str, ft_strlen(str)));
}

/*#include <stdio.h>

int	main(void)
{
	printf("Return value: %s\n", "\0");
	return (0);
}*/
