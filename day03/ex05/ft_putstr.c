/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/20 15:04:02 by jtrichar          #+#    #+#             */
/*   Updated: 2020/06/22 14:46:06 by jtrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putstr(char *str);
void ft_putchar(char c);

void ft_putchar(char c)
{
	write(1, &c, 1);
}


void ft_putsr(char *str)
{
	while(*str != '\0')
	{
		ft_putchar(*str++);
	}
	ft_putchar('\n');
}

int main()
{
	ft_putsr("Hallo there");
	return 0;
}
