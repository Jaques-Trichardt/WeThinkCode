/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 12:49:35 by jtrichar          #+#    #+#             */
/*   Updated: 2020/06/21 14:10:06 by jtrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char n);
void ft_print_comb(void);

int ft_putchar(char n)
{
	write(1, &n, 1);
	return 0;
}

int main()
{
	ft_print_comb();
	return 0;
}

void ft_print_comb(void)
{
	int i;
	int j;
	int k;
	int x;
	int begin;
	char first;
	char second;
	char third;
	i = 0;
	j = 1;
	k = 2;
	begin = 1;
	ft_putchar('0');
	ft_putchar('1');
	ft_putchar('2');
	ft_putchar(',');

	while (i <= 7)
    {
	   	j = begin;
		while (j <= 8)
        {
			k = j + 1;
			begin = k - 1;
			while (k <= 9)
            {
			   	if (i != j)
			 	 {
				  if (j != k) 
					{
				   	if ((j != k + 1) || x == 0) 
				  	{
					  x++;
					  first = i + 48;
					  second = j + 48;
					  third = k + 48;
					  ft_putchar(first);
					  ft_putchar(second);
					  ft_putchar(third);										
					  if (!(i == 7 && k == 9)) 
						{
						   	ft_putchar(',');
                    	}
                  	}
                	}
              	}
				k++;
				begin++;
		   	}
			j++;
		}
		if (j == 9) 
		{
			begin = i + 1;
		}
		i++;
	}
	ft_putchar('\n');
}
