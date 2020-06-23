/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 10:17:23 by jtrichar          #+#    #+#             */
/*   Updated: 2020/06/21 14:05:41 by jtrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c );

void ft_print_reverse_alphabet(void);

int main()
{
	ft_print_reverse_alphabet();
	return 0;
}

int ft_putchar(char c )
{
	write(1, &c, 1);
	return 0;
}

void ft_print_reverse_alphabet(void)
{
	char c = 'z';
	while (c >= 'a')
	{
		ft_putchar(c--);
	}
	ft_putchar('\n');
}
