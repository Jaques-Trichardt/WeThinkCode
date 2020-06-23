/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 14:04:08 by jtrichar          #+#    #+#             */
/*   Updated: 2020/06/23 14:04:27 by jtrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_uppercase(char *str);

int main()
{
	char str[12] = "helloWorld";
	int i;
	i = ft_str_is_uppercase(str);
	printf("%d\n", i);
	return 0;
}

int ft_str_is_uppercase(char *str)
{
	int i;
	i = 0;
	char c;

	while (str[i] != '\0')
	{
		c = str[i++];
		if (c < 'A' || c > 'Z')
		{
			return 0;
		}
	}
	return 1;
}
