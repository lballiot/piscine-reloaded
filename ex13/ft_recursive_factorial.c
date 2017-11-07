/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 09:58:54 by lballiot          #+#    #+#             */
/*   Updated: 2017/11/07 10:19:27 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb > 0 && nb < 12 && nb != 0)
	{
		if (nb == 1)
			return (nb);
		return (nb * ft_recursive_factorial(nb - 1));
	}
	else if (nb == 0)
		return (1);
	else
		return (0);
}
