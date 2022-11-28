/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 21:01:47 by zasabri           #+#    #+#             */
/*   Updated: 2022/11/28 21:57:21 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
    void    *contenet;
    struct s_list *next;  
}   t_list;
t_list *ft_lst_new(void  *content)
{
    t_list *new;
    
    new = malloc(sizeof(t_list));
    new->contenet = content;
    new->next = NULL;
    return new;
}
void    ft_lst_front(t_list **lst, t_list *node)
{
    node->next=*lst;
    *lst=node;
}
int     ft_lst_size(t_list *lst)
{
    int i;

    i = 0;
    while (lst)
    {
        lst = lst->next;
        i++;
    }
    return (i);
}
t_list  *ft_lst_last(t_list *lst)
{
    while (lst->next)
        lst = lst->next;
    return lst;
}
int main()
{
    t_list *front = ft_lst_new(10);
    t_list *head;
    int i =9;
    head = ft_lst_new(i);
    t_list *save = head;
    while (i > 1)
    {
        head->next=ft_lst_new(i-1);
        head=head->next;
        i--;
    }
    printf("%d\n-----------------------------------------\n",ft_lst_size(save));
    ft_lst_front(&save, front);
    while (save->next)
    {
        printf("%d ", save->contenet);
        save=save->next;
    }
    printf("\n----------------------------------------");
    t_list *front2 = ft_lst_new("\nGO GO GO ");
    t_list *head2 = ft_lst_new("ZAKARIA...");
    ft_lst_front(&head2, front2);
    while (head2)
    {
        printf("%s", head2->contenet);
        head2=head2->next;
    }
}
