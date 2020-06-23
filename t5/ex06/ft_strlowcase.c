/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 13:54:44 by jtrichar          #+#    #+#             */
/*   Updated: 2020/06/23 13:55:46 by jtrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strlowcase(char *str);

int main()
{
	char str[11] = "HellOworld";
	char *c;
	c = ft_strlowcase(str);
	write(1, c, 10);
	return 0;
}

char *ft_strlowcase(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] -= ('A' - 'a');
		}
		i++;
	}
	return str;
}
