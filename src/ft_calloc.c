/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaurer <mmaurer@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 21:54:41 by mmaurer           #+#    #+#             */
/*   Updated: 2021/09/07 21:34:42 by mmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* The  malloc() function allocates size bytes and returns a pointer to the
* allocated memory.  The memory is not initialized.  If size is 0, then malloc()
* returns either NULL, or a unique pointer value that can later be successfully
* passed to free().
* The free() function frees the memory space pointed to by ptr, which must have
* been returned by a previous call to malloc(), calloc(), or realloc().
* Otherwise, or  if  free(ptr) has already been called before, undefined
* behavior occurs.  If ptr is NULL, no operation is performed.
* The  calloc()
* function allocates memory for an array of nmemb elements of size bytes each
* and returns a pointer to the allocated memory.  The memory is set to zero.
* If nmemb or size is 0, then calloc() returns either NULL, or a unique pointer
* value that can later be successfully passed to free().  If the multiplication
* of nmemb and size would result in integer  overflow, then calloc() returns an
* error.  By contrast, an integer overflow would not be detected in the
* following call to malloc(), with the result that an incorrectly sized block
* of memory would be allocated: malloc(nmemb * size);
* Return:
* The  malloc() and calloc() functions return a pointer to the allocated
* memory, which is suitably aligned for any built-in type.  On error, these
* functions return NULL.  NULL may also be returned by a successful call to
* malloc() with a size of zero, or by a successful call to calloc() with nmemb
* or size equal to zero.
*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	ft_bzero(p, nmemb * size);
	return (p);
}
