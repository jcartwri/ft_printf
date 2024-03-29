/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcartwri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 09:52:39 by jcartwri          #+#    #+#             */
/*   Updated: 2018/12/01 15:03:43 by jcartwri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	char	*a;
	size_t	i;

	i = 0;
	a = dest;
	while (i < n)
	{
		a[i++] = c;
	}
	return (dest);
}
