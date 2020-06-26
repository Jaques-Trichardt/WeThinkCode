/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 13:37:16 by jtrichar          #+#    #+#             */
/*   Updated: 2020/06/25 10:52:42 by jtrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strcpy(char *dest, char *src);

void ft_putchar(char n)
{
	write(1, &n, 1);
}

char *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main()
{
	char dest[11];
	int i;
	char src[11] = "HelloWorld";
	ft_strcpy(dest, src);
	i = 0;
	while (dest[i] != '\0')
	{
		ft_putchar(dest[i]);
		i++;
	}
	return 0;
}

