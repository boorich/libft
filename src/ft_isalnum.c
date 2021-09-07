/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaurer <mmaurer@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 15:17:31 by mmaurer           #+#    #+#             */
/*   Updated: 2021/09/07 21:35:59 by mmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* checks for an alphanumeric character; it is equivalent to
* (isalpha(c) || isdigit(c))
1.	The ft_isalnum function checks if the character is an alphabet or a digit.
2.	If it is, it returns 1, otherwise 0.
3.	The ft_isalpha function checks if the character is an alphabet.
*/
int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
