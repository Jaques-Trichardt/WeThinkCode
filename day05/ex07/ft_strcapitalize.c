/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 13:58:19 by jtrichar          #+#    #+#             */
/*   Updated: 2020/06/25 10:56:32 by jtrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strcapitalize(char *str);

int main()
{
	char str[22] = "Welcome to THE JUngle";
	char *x;
	x = ft_strcapitalize(str);
	write(1, x, 22);
	return 0;
}

char *ft_strcapitalize(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 || str[i-1] == ' ')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] += ('A' - 'a');
			}
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] -= ('A' - 'a');
			}
		}
		i++;
	}
	return str;
}
