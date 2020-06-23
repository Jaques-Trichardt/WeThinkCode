/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 10:38:39 by jtrichar          #+#    #+#             */
/*   Updated: 2020/06/21 14:06:36 by jtrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c);
void ft_print_numbers(void);

int main()
{
	ft_print_numbers();
	return 0;
}

int ft_putchar(char c)
{
	write(1, &c, 1);
	return 0;
}
void ft_print_numbers(void)
{
	char c = '0';
	while (c <= '9')
	{
		ft_putchar(c++);
	}
	ft_putchar('\n');
}
