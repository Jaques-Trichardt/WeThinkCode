/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 09:10:32 by jtrichar          #+#    #+#             */
/*   Updated: 2020/06/25 14:54:16 by jtrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int ft_putchar(char n);

int main(int argc,char  **argv)
{
	int i;
	int j;
	
	if (!argc) return 0;
	i = 1;
	j = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j++]);
		}
		ft_putchar('\n');
		i++;
	}
	return 0;
}

int ft_putchar(char n)
{
	write(1, &n, 1);
	return 0;
}
