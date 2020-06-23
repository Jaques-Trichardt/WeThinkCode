/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 13:37:19 by jtrichar          #+#    #+#             */
/*   Updated: 2020/06/21 14:11:03 by jtrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb2(void);
int ft_putchar(char c);

int main()
{
	ft_print_comb2();
	return 0;
}

int ft_putchar(char c)
{
	write(1, &c, 1);
	return 0;
}

void ft_print_comb2(void)
{ 
	int i;
	int j;
	int r;
	i = 0;
	j = 1;
	while (i <= 98) 
	{
		while (j <= 99) 
	{		
		ft_putchar(j/10 + 48);
		ft_putchar(i%10 + 48);
		ft_putchar(' ');
		ft_putchar(j/10 + 48);
		ft_putchar(j%10 + 48);
		if (!(i == 98 && j == 99)) 
	  {
		  ft_putchar(',');
      }
		j++;
    }
	i++;
	r = i;
	j = r+1;
  }
	ft_putchar('\n');
}
