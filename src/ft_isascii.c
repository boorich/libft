/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaurer <mmaurer@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 15:25:15 by mmaurer           #+#    #+#             */
/*   Updated: 2021/09/07 21:37:56 by mmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* checks whether c is a 7-bit unsigned char value that fits into the ASCII
* character set.
*/
int	ft_isascii(int c)
{
	if ((c >= 0) && (c <= 127))
		return (1);
	return (0);
}
