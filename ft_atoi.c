/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 19:08:09 by artaveti          #+#    #+#             */
/*   Updated: 2023/02/08 21:05:04 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char	*str)
{
	unsigned long	i;
	int				num;
	int				minus;

	i = 0;
	num = 0;
	minus = 1;
	while (*str && (*str == ' ' || *str == '\t' || *str == '\n'
			|| *str == '\r' || *str == '\v' || *str == '\f'))
		str++;
	if (*str == '-')
	{
		minus *= -1;
		str++;
	}
	else if (*str == '+')
		str++;
	if (!ft_isdigit(*str))
		return (0);
	while (ft_isdigit(*str))
	{
		num = num * 10 + *str - 48;
		str++;
	}
	return (num * minus);
}

/*int	main(void)
{
	char str[] = " -+55+0";

	printf("%d\n", atoi(str));
	printf("%d\n", ft_atoi(str));
}*/
