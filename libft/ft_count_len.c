/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_len.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfadia <zfadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 04:16:17 by zfadia            #+#    #+#             */
/*   Updated: 2019/05/30 04:19:26 by zfadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_len(char const *str, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] == c && str[i])
		i++;
	while (str[i] != c && str[i])
	{
		i++;
		j++;
	}
	return (j);
}
