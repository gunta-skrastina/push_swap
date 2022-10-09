/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_new.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:50:33 by gskrasti          #+#    #+#             */
/*   Updated: 2022/09/16 13:49:19 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static long	ft_calculate_result(const char *str, int sign);
static int	ft_check_result(long result);

int	ft_atoi_new(const char *str)
{
	int		i;
	int		sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = (-1);
		i++;
	}
	result = ft_calculate_result(str + i, sign);
	return (result);
}

static long	ft_calculate_result(const char *str, int sign)
{
	int		i;
	long	result;

	i = 0;
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
		result = (result * 10) + (str[i++] - '0');
	if (str[i])
	{
		if (ft_isdigit(str[i]) == 0)
		{
			ft_printf("ERROR Includes non-digits\n");
			exit(0);
		}
	}
	result *= sign;
	ft_check_result(result);
	return (result);
}

static int	ft_check_result(long result)
{
	if (result > 2147483647)
	{
		ft_printf("ERROR Includes number that's more than MAX_INT\n");
		exit(0);
	}
	if (result < -2147483648)
	{
		ft_printf("ERROR Includes number that's less than MIN_INT\n");
		exit(0);
	}
	return (0);
}
