/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 13:51:24 by jtrichar          #+#    #+#             */
/*   Updated: 2020/06/26 13:56:42 by jtrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

char *ft_strdup(char *src);

int main(int argc, char **argv)
{
	char *src = argv[1];
	char *dest;

	dest = ft_strdup(src);

	printf("%s\n", dest);
	return 0;
}

char *ft_strdup(char *src)
{
	int i;
	char *dest;
	
	i = 0;
	while (src[i++] != '\0');
	--i;

	dest = (char *)malloc(i*sizeof(char));

	while(i >= 0)
	{
		dest[i] = src[i];
		i--;
	}
	return dest;
}
