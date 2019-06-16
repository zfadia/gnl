/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfadia <zfadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 09:43:32 by zfadia            #+#    #+#             */
/*   Updated: 2019/05/30 03:50:35 by zfadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**t;

	if (!s)
		return (NULL);
	if (ft_nombre_de_mot(s, c) == 0)
		return (ft_dstrnew(0));
	if (!(t = ft_dstrnew(ft_nombre_de_mot(s, c) + 1)))
		return (NULL);
	j = 0;
	i = ft_nombre_de_mot(s, c);
	while (j < i)
	{
		if (!(t[j] = ft_strnew(ft_count_len(s, c) + 1)))
			return (NULL);
		while (*s == c)
			s++;
		ft_strncpy(t[j], s, ft_count_len(s, c));
		s += ft_count_len(s, c) + 1;
		j++;
	}
	t[j] = NULL;
	return (t);
}
