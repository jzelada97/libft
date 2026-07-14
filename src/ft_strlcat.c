/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzelada- <jzelada-@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 08:52:15 by jzelada-          #+#    #+#             */
/*   Updated: 2026/05/26 08:52:15 by jzelada-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	destl;
	size_t	srcl;
	size_t	i;

	i = 0;
	destl = ft_strlen(dest);
	srcl = ft_strlen(src);
	if (destl >= size)
		return (size + srcl);
	while (src[i] != '\0' && (destl + i) < (size - 1))
	{
		dest[destl + i] = src[i];
		i++;
	}
	dest[destl + i] = '\0';
	return (destl + srcl);
}
