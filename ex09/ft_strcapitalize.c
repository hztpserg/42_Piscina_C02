/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seantoni <seantoni@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 21:10:31 by seantoni          #+#    #+#             */
/*   Updated: 2023/10/24 22:25:36 by seantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strupcase(char *s)
{
	if (*s <= 122 && *s >= 97)
		*s = *s - 32;
}

void	ft_strlowcase(char *s)
{
	if (*s <= 90 && *s >= 65)
		*s = *s +32;
}

char	*ft_strcapitalize(char *s)
{
	int	i;
	int	m;

	i = 0;
	m = 0;
	while (s[i] != 0)
	{
		if (m == 0 && ((s[i] <= 90 && s[i] >= 65)
				|| (s[i] <= 122 && s[i] >= 97) || (s[i] <= '9' && s[i] >= '0')))
		{
			m = 1;
			ft_strupcase(&s[i]);
		}
		else
		{
			if ((s[i] <= 90 && s[i] >= 65)
				|| (s[i] <= 122 && s[i] >= 97) || (s[i] <= '9' && s[i] >= '0'))
				ft_strlowcase(&s[i]);
			else
				m = 0;
		}
		i++;
	}
	return (s);
}
