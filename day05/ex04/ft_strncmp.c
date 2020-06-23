/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 10:44:34 by jtrichar          #+#    #+#             */
/*   Updated: 2020/06/23 11:08:39 by jtrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>


int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && (i < n - 1))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int main()
{
	int test;

	test = ft_strncmp("ABC", "ABC", 3);
	printf("strcmp(str1, str2) = %d\n", test);

   	test = ft_strncmp("asdea", "asdf", 4);
   	printf("strcmp(str1, str3) = %d\n", test);

   	test = ft_strncmp("asdea", "asdf", 4);
   	printf("strcmp(str1, str3) = %d\n", test);
}
