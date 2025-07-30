/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmine.aichi <yasmine.aichi@learner.42.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 22:17:02 by yasmine.aichi     #+#    #+#             */
/*   Updated: 2025/07/30 22:29:47 by yasmine.aichi    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_checklast(int i, int *str)
{
	if (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
	{
		return (0);
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
		return (1);
}

char *ft_strcapitalize(char *str)
{
	int i;
	i = 0;

	while(str[i])
	{
		if(ft_capitalize(i, str[i - 1]) == 1 )
	}
}
