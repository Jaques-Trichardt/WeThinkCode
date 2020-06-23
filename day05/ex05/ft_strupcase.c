/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 13:52:02 by jtrichar          #+#    #+#             */
/*   Updated: 2020/06/23 13:54:03 by jtrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char *ft_strupcase(char *str);

int main()
{
	char str[11] = "HellOworld";
	char *c;
	c = ft_strupcase(str);
	write(1, c, 10);
	return 0;
}

char *ft_strupcase(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] += ('A' - 'a');
		}
		i++;
	}
	return str;
}
