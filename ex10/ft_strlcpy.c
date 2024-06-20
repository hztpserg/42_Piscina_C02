/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seantoni <seantoni@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 22:34:05 by seantoni          #+#    #+#             */
/*   Updated: 2023/10/25 20:06:35 by seantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	dest_len;

	if (size > 0)
	{
		dest_len = 0;
		while (dest_len < (size - 1) && src[dest_len] != '\0')
		{
			dest[dest_len] = src[dest_len];
			dest_len++;
		}
		dest[dest_len] = '\0';
	}
	src_len = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	return (src_len);
}
