/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csekakul <csekakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 15:00:05 by csekakul          #+#    #+#             */
/*   Updated: 2026/01/30 12:58:37 by csekakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

// Includes
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

// Structures
# define HEX_UPP_BASE "0123456789ABCDEF"
# define HEX_LOW_BASE "0123456789abcdef"

// Functions
int		ft_printf(char const *str, ...);
void	ft_putchar_pf(char c, size_t *counter);
void	ft_putnbr_pf(int num, size_t *counter);
void	ft_putstr_pf(char const *str, size_t *counter);
void	ft_putptr_pf(void *ptr, size_t *counter);

#endif
