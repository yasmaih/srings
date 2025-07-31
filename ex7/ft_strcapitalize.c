/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmine.aichi <yasmine.aichi@learner.42.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 22:17:02 by yasmine.aichi     #+#    #+#             */
/*   Updated: 2025/07/31 13:49:57 by yasmine.aichi    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_checklast(int i, char *str)
{
	if (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
	{
		return (1);
	}
	if (str[i - 1] >= 'a' && str[i - 1] <= 'z')
	{
		return (1);
	}
	if (str[i - 1] >= '0' && str[i - 1] <= '9')
	{
		return (1);
	}
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_checklast(i, str) == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		else if (ft_checklast(i, str) == 1 && (str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "hello,how are you doing? 42words forty-two; fifty+and+one";

	printf("%s", ft_strcapitalize(str));
	return (0);
}
*/
