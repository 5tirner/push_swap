/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:00:57 by zasabri           #+#    #+#             */
/*   Updated: 2023/02/01 11:35:46 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
int		ft_strl(char *str);
char	*ft_strch(char *str, int c);
char	*ft_strjoi(char *s1, char *s2);
char	*buffer_to_stock(int fd, char *stock);
char	*ft_pre_save(char *stock);
char	*ft_sec_save(char *stock);
#endif
