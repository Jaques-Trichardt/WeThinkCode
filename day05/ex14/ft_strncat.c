/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 14:12:26 by jtrichar          #+#    #+#             */
/*   Updated: 2020/06/23 15:24:12 by jtrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int n);

int main()
{
	char dest[12] = "Hello ";
	char src[5] = "World";
	char *x;
	x = ft_strncat(dest, src, 3);
	printf("%s\n", dest);
	return 0;
}


char *ft_strncat(char *dest, char *src, unsigned int n)
{

	unsigned int i;
	unsigned int j;
	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return dest;
}
