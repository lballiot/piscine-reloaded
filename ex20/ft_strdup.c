/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 12:57:42 by lballiot          #+#    #+#             */
/*   Updated: 2017/11/08 15:18:02 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*cpy;
	int		i;

	i = 0;
	if (!(cpy = (char*)malloc(sizeof(char) * (ft_strlen(src) + 1))))
		return (NULL);
	while (src[i] != '\0')
	{
		cpy[i] = src[i];
		i++;
		cpy[i + 1] = '\0';
	}
	return (cpy);
}

#include <stdio.h>

int main(int ac, char **av)
{
	(void)ac;
	printf("fct : %s\n", ft_strdup(av[1]));
	printf("rel : %s\n", strdup(av[1]));
	return (0);
}
