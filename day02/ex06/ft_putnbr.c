/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 10:03:42 by jtrichar          #+#    #+#             */
/*   Updated: 2020/06/21 14:12:19 by jtrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char n);
void ft_putnbr(int nb);

int main()
{
	ft_putnbr(-420);
	return 0;
}

int ft_putchar(char n)
{
	write(1, &n, 1);
	return 0;
}

void ft_putnbr(int nb)
{
   	char c;
	if (nb < 0) 
	{
    	ft_putchar('-');
    	nb *= -1;
    }

  	if (nb/10 != 0) 
	{
    	ft_putnbr(nb/10);
    }
	c = nb%10 + 48;
	ft_putchar(c);
}
