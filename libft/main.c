#include "libft.h"
#include <stdio.h>

int main()
{
	t_list *head;

	head = NULL;
	ft_lstadd_back(&head, ft_lstnew("EEEEEE"));
	ft_lstadd_back(&head, ft_lstnew("AAAAAAA"));
	ft_lstadd_back(&head, ft_lstnew("RRRRRRR"));
	ft_lstadd_back(&head, ft_lstnew("GGGGGGG"));
	ft_lstadd_back(&head, ft_lstnew("KKKKKK"));

	while (head)
	{
		printf("%s\n", head->content);
		head=head->next;
	}
}