/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcluzan <lcluzan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:33:54 by lcluzan           #+#    #+#             */
/*   Updated: 2024/01/30 14:51:34 by lcluzan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int srclen;

	i = 0;
	srclen = 0;
	while (src[srclen])
		srclen++;
	if (size < 1)
		return (srclen);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[srclen];
		i++;
	}
	dest[i] = '\0';
	return (srclen);
}

