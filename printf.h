/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csekakul <csekakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 15:00:05 by csekakul          #+#    #+#             */
/*   Updated: 2026/01/29 13:20:32 by csekakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

// Includes
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

// Structures

// Functions
int		ft_printf(const char *arg, ...);
void	ft_putchar(char c);
int		prt_int(int n);
void	prt_str(char const *str);

#endif
