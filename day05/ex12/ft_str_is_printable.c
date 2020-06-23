/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 14:11:00 by jtrichar          #+#    #+#             */
/*   Updated: 2020/06/23 14:17:21 by jtrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_printable(char *str);

int main()
{
	char str[12] = "hello\nWorld";
	int i;
	i = ft_str_is_printable(str);
	printf("%d\n", i);
	return 0;
}

int ft_str_is_printable(char *str)
{
	int i;
	i = 0;
	char c;

	while (str[i] != '\0')
	{
		c = str[i++];
		if (c < ' ' || c > '~')
		{
			return 0;
		}
	}
	return 1;
}
