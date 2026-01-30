/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csekakul <csekakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 15:00:05 by csekakul          #+#    #+#             */
/*   Updated: 2026/01/30 14:58:32 by csekakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// Includes
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

// Hex bases
# define HEX_UPP_BASE "0123456789ABCDEF"
# define HEX_LOW_BASE "0123456789abcdef"

// Functions
int		ft_printf(char const *str, ...);
void	ft_putchar_pf(char c, size_t *counter);
void	ft_putnbr_pf(int num, size_t *counter);
void	ft_putstr_pf(char *str, size_t *counter);
void	ft_putptr_pf(void *ptr, size_t *counter);
size_t	ft_strlen_pf(const char *str);
void	ft_bzero_pf(void *s, size_t n);
void	*ft_calloc_pf(size_t number, size_t size);
char	*ft_aux_pf(unsigned long long n, char *base);
void	ft_puthex_pf(unsigned int num, size_t *counter, char *base);
void	ft_putuint_pf(unsigned int num, size_t *counter);

#endif
