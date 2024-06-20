/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seantoni <seantoni@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 23:00:41 by seantoni          #+#    #+#             */
/*   Updated: 2023/10/25 11:46:50 by seantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	hex[5];
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			hex[0] = '\\';
			hex[1] = "0123456789abcdef"[((unsigned char)str[i]) >> 4];
			hex[2] = "0123456789abcdef"[((unsigned char)str[i]) & 0xF];
			write(1, hex, 3);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
