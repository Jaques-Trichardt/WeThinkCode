/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 10:20:26 by jtrichar          #+#    #+#             */
/*   Updated: 2020/06/21 14:04:53 by jtrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c);
void ft_print_alphabet(void);

int main()
{
	ft_print_alphabet();
	return 0;
}

int ft_putchar(char c)
{
	write(1, &c, 1);
	return 0;
}

void ft_print_alphabet(void)
{
	
	char c = 'a';
	while (c <= 'z')
	{
			ft_putchar(c++);
	}
   	ft_putchar('\n');
}


