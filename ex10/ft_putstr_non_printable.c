/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmine.aichi <yasmine.aichi@learner.42.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 15:24:24 by yasmine.aichi     #+#    #+#             */
/*   Updated: 2025/07/31 17:01:42 by yasmine.aichi    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	convert_to_hexa(char c)
{
	int	div;
	int	mod;
	int	first;
	int	rest;

	if (c <= 10)
	{
		div = c / 16;
		first = div + '0';
		mod = c % 16;
		rest = mod + '0'
	}
	else
	{
		write(1, &res, 1);
	}
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	int		div;
	int		res;
	char	first_unit;
	char	second_unit;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 33 && str[i] <= 126)
		{
			write(1, &str[i], 1);
		}
		else
		{
			write(1, "\\", 1);
		}
		i++;
	}
}

int	main(void)
{
	char	*str;

	str = "hello hallo \n";
	ft_putstr_non_printable(str);
	return (0);
}
