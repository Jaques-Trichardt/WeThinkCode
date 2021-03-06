/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 14:13:10 by jtrichar          #+#    #+#             */
/*   Updated: 2020/06/23 15:23:42 by jtrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
	char dest[12] = "Hello ";
	char t[12] = "Hello ";
	char src[10] = "123456789";
	char *x;
	int len = 12;
	strlcat(t, src, len);
	x = ft_strlcat(dest, src, 12);
	printf("%s\n", dest);
	printf("%s\n", t);
	return 0;
}


char *ft_strlcat(char *dest, char *src, unsigned int size)
{

	unsigned int i;
	unsigned int j;
	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && i < size-1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return dest;
}

