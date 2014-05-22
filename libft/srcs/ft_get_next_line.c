/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebgoret <sebgoret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/26 22:52:05 by sebgoret          #+#    #+#             */
/*   Updated: 2014/05/13 15:47:51 by sebgoret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <gnl.h>

static char		*ft_realloc(char *str, int size)
{
	char		*new_str;

	if (size == 0)
		return (str);
	new_str = (char *)malloc(sizeof(char) * (ft_strlen(str) + size + 1));
	if (new_str == NULL)
		return (NULL);
	*new_str = '\0';
	ft_strcat(new_str, str);
	*str = '\0';
	free(str);
	return (new_str);
}

static int		ft_get_the_end(char *line, char *buff)
{
	int			i;

	i = 0;
	while (line[i] != '\0')
	{
		if (line[i] == '\n')
		{
			line[i] = '\0';
			*buff = '\0';
			ft_strcat(buff, &line[i + 1]);
			return (-1);
		}
		i++;
	}
	*buff = '\0';
	return (0);
}

int				ft_get_next_line(const int fd, char **line)
{
	int				i;
	static char		buff[BUFF_SIZE + 1];

	*line = (char *)malloc(sizeof(char *) * (BUFF_SIZE + 1));
	if (fd < 0 || line == NULL)
		return (-1);
	**line = '\0';
	ft_strcat(*line, buff);
	*buff = '\0';
	i = BUFF_SIZE;
	while (ft_get_the_end(*line, buff) != -1 && i == BUFF_SIZE)
	{
		i = read(fd, buff, BUFF_SIZE);
		if (i == -1)
			return (-1);
		buff[i] = '\0';
		*line = ft_realloc(*line, i);
		ft_strcat(*line, buff);
	}
	if (**line == '\0' && ft_strlen(buff) == 0 && i != BUFF_SIZE)
		return (0);
	return (1);
}
