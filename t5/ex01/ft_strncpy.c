/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 13:49:08 by jtrichar          #+#    #+#             */
/*   Updated: 2020/06/23 10:02:40 by jtrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char n)
{
	write(1, &n, 1);
}

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src != '\0' && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int main()
{
	char dest[11];
	int i;
	char src[11] = "HelloWorld";
	i = 11;
	ft_strncpy(dest, src, i);
	i = 0;
	while (dest[i] != '\0')
	{
	 ft_putchar(dest[i]);
	 i++;
	}
	return 0;
}
