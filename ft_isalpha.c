/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaurer <mmaurer@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 19:27:10 by mmaurer           #+#    #+#             */
/*   Updated: 2021/09/07 21:43:56 by mmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
checks for an alphabetic character; in the standard "C" locale, it is
equivalent to (isupper(c) || islower(c)). In some locales, there may be
additional characters for which isalpha() is true—letters which are neither
uppercase nor lowercase.
1.	The ft_isalpha() function takes a character as an argument and returns 1 if
	it is an alphabet, 0 otherwise.
2.	The while loop checks if the character is either a lowercase or an uppercase
	alphabet.
3.	If the character is either a lowercase or an uppercase alphabet, the
	function returns 1.
4.	If the character is not an alphabet, the function returns 0.
*/
int	ft_isalpha(int c)
{
	while ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
