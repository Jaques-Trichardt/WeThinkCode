/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 14:00:13 by jtrichar          #+#    #+#             */
/*   Updated: 2020/06/23 14:00:44 by jtrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_str_is_alpha(char *str);

int main()
{
	char str[12] = "helloWorld";
	int i;
	i = ft_str_is_alpha(str);
	printf("%d\n", i);
	return 0;
}

int ft_str_is_alpha(char *str)
{
	int i;
	i = 0;
	char c;

	while (str[i] != '\0')
	{
		c = str[i++];
		if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z'))
		{
			return 0;
		}
		//i++;
	}
	return 1;
}
