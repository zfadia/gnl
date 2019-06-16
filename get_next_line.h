/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfadia <zfadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 01:48:49 by zfadia            #+#    #+#             */
/*   Updated: 2019/06/09 01:50:47 by zfadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 4096*3

# include "libft/libft.h"
# include <fcntl.h>
# include <limits.h>

int		get_next_line(const int fd, char **line);

#endif
