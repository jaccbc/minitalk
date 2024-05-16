/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joandre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 21:52:54 by joandre-          #+#    #+#             */
/*   Updated: 2023/10/23 21:59:30 by joandre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
/*
void	ft_print(void *ptr)
{
	printf("[%s]\t", (char *)ptr);
}
int	main(void)
{
	char	*src[3] = {"amare", "massa", "justo"};
	t_list	*node[3];

	for (int i = 0; i < 3; i++)
	{
		node[i] = (t_list *)malloc(sizeof(t_list));
		node[i]->content = (void *)strdup(src[i]);
		node[i]->next = NULL;
	}
	t_list	*head = node[0];
	for (int i = 1; i < 3; i++)
	{
		t_list	*linx = head;
		while (linx->next)
			linx = linx->next;
		linx->next = node[i];
	}
	for (int i = 0; i < 3; i++)
	{
		printf("NODE[%d] CONTENT: [%s]\t\t", i, (char *)node[i]->content);
		printf("NODE[%d] ADDR: [%p] NEXT: [%p]\n", i, node[i], node[i]->next);
	}
	printf("\n");
	ft_lstiter(head, ft_print);
	printf("\n");
	for (int i = 0; i < 3; i++)
	{
		free(node[i]->content);
		free(node[i]);
	}
	return (0);
}*/
