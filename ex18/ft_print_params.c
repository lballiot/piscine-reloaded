/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 11:37:09 by lballiot          #+#    #+#             */
/*   Updated: 2017/11/07 13:32:31 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_print_params(int ac, char **av)
{
	int i;

	i = 1;
	if (ac > 1)
	{
		while (av[i])
		{
			ft_putstr(av[i]);
			ft_putchar('\n');
			i++;
		}
	}
}

int		main(int ac, char **av)
{
	ft_print_params(ac, av);
	return (0);
}
