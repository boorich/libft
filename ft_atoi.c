/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaurer <mmaurer@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 17:08:33 by mmaurer           #+#    #+#             */
/*   Updated: 2021/09/07 21:31:25 by mmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* The atoi() function converts the initial portion of the string pointed to by
* nptr to int.
* Gracefull handles non-printable characters at the beginning of the string,
* then flips sign if required and then converts character to digit until the
* end of the string is reached using this algorithm result * 10 + (str[i] - '0')
* and stores in result.
1.	We start by initializing i to 0 and result to 0.
2.	We then loop through the string until we reach the end of the string or a
	non-digit character.
3.	If we encounter a ‘-‘, we set sign to -1.
4.	If we encounter a ‘+’, we set sign to 1.
*/
int	ft_atoi(const char *str)
{
	size_t	i;
	size_t	result;
	int		sign;

	i = 0;
	result = 0;
	sign = 1;
	while ((str[i] == '\n' || str[i] == '\t' || str[i] == ' ')
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
