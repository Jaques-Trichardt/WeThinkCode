/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 14:02:47 by jtrichar          #+#    #+#             */
/*   Updated: 2020/06/23 14:03:16 by jtrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_lowercase(char *str);

int main()
{
	char str[12] = "helloWorld";
	int i;
	i = ft_str_is_lowercase(str);
	printf("%d\n", i);
	return 0;
}

int ft_str_is_lowercase(char *str)
{
	int i;
	i = 0;
	char c;

	while (str[i] != '\0')
	{
		c = str[i++];
		if (c < 'a' || c > 'z')
		{
			return 0;
		}
	}
	return 1;
}
