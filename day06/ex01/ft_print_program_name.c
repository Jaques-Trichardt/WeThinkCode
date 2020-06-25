/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 09:09:46 by jtrichar          #+#    #+#             */
/*   Updated: 2020/06/25 14:54:07 by jtrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char n);

int main(int argc, char **argv)
{
	int j;

	j = 0;
	if (!argc) return 0;

	while (argv[0][j] != '\0')
	{
		ft_putchar(argv[0][j++]);
	}
	ft_putchar('\n');
	return 0;
}

int ft_putchar(char n)
{
	write(1, &n, 1);
	return 0;
}
