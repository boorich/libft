/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaurer <mmaurer@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 19:27:10 by mmaurer           #+#    #+#             */
/*   Updated: 2021/09/01 23:24:04 by mmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
checks  for an alphabetic character; in the standard "C" locale, it is
equivalent to (isupper(c) || islower(c)).   In  some  locales, there may be
additional characters for which isalpha() is true—letters which are neither
uppercase nor lowercase.
*/
int	ft_isalpha(int c)
{
	while ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
