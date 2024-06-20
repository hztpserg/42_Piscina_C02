/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seantoni <seantoni@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:57:03 by seantoni          #+#    #+#             */
/*   Updated: 2023/10/25 14:32:09 by seantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_mostr_fila(char *buf, int longitud)
{
	int	i;

	i = 0;
	while (i < longitud)
	{
		write(1, &buf[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	char			*mem;
	int				j;
	char			buff[16];
	int				longitud;

	mem = (char *)addr;
	i = 0;
	while (i < size && i >= 0)
	{
		j = 0;
		if ((size - i) >= 16)
			longitud = 16;
		else
			longitud = (size - i);
		while (j < longitud)
		{
			buff[j] = mem[i + j];
			j++;
		}
		ft_mostr_fila(buff, longitud);
		i += 16;
	}
	return (addr);
}

int	main(void)
{
	char	micadena[] = "12345678910111213141516qwertyuiopasdfgh12345678910111213141516";
	ft_print_memory((void *)micadena, sizeof(micadena));
	return (0);
}
