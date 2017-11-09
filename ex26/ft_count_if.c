/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 11:22:55 by lballiot          #+#    #+#             */
/*   Updated: 2017/11/09 11:41:10 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		f(char *str)
{
	if (*str == 'a')
		return (1);
	return (0);
}

int		ft_count_if(char **tab, int (*f)(char *))
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (tab[i] != 0)
		if (f(tab[i++]) == 1)
			j++;
	return (j);
}

int		main(void)
{
	char *tab[7];

	tab[0] = 0;
	tab[1] = "abbgf";
	tab[2] = "afdb";
	tab[3] = "0";
	tab[4] = "afdb";
	tab[5] = "fdb";
	tab[6] = 0;
	ft_count_if(tab, &f);
	printf("main `%d\n", ft_count_if(tab, &f));
	return (0);
}
