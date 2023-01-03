/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 23:33:21 by zasabri           #+#    #+#             */
/*   Updated: 2023/01/03 03:10:19 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include "./ft_printf/ft_printf.h"
# include <stdio.h>

void	sort_algorithm(t_list *head, int size);
t_list	*rotate_a_algo(t_list *head);
t_list	*rev_rotate_a_algo(t_list *head);
#endif