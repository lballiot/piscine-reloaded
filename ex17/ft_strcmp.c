/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 10:59:49 by lballiot          #+#    #+#             */
/*   Updated: 2017/11/07 11:32:56 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 != '\0')
		return(-*s2);
	else if (*s1 != '\0' && *s2 == '\0')
		return(*s1 - *s2);
	else
		return(*s1 - *s2);
}

#include <string.h>

int main(int arc, char **arv)
{
	(void)arc;
	printf("fct : %d\n", ft_strcmp(arv[1], arv[2]));
	printf("real : %d\n", strcmp(arv[1], arv[2]));
	return(0);
}
