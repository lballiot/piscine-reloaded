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

int		f(char *str)
{
	int i;

	i = 1;
	return (i);
}

int		ft_count_if(char **tab, int (*f)(char *))
{
	int i;

	i = 0;
	while (tab[i] != 0)
	{
		f(tab[i++]);
	}
	return (i);
}

int		main(void)
{
	char **tab;

	tab[0] = "ab";
	tab[1] = "abbgf";
	tab[2] = "afdb";
	tab[3] = "";
	tab[4] = "afdb";
	tab[12] = "afdb";
	tab[6] = 0;
	ft_count_if(tab, &f);
	printf("%d\n", ft_count_if(tab, &f));
	return (0);
}
