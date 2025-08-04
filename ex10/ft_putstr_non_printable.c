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

void	ft_putchar(char c)

{
	write(1, &c, 1);
}

void	ft_putnbr_hexa(int nb)

{
	if (nb < 16)
	{
		ft_putchar('0');
	}
	if (nb >= 16)
		ft_putnbr_hexa(nb / 16);
	if ((nb % 16) <= 9)
		ft_putchar((nb % 16) + '0');
	else
		ft_putchar((nb % 16) - 10 + 'a');
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			write(1, &str[i], 1);
		}
		else
		{
			write(1, "\\", 1);
			ft_putnbr_hexa(str[i]);
		}
		i++;
	}
}
/*
int	main(void)
{
	char	*str;

	str = "Hello\nHow are\tyou ?";
	ft_putstr_non_printable(str);
	return (0);
}
*/
