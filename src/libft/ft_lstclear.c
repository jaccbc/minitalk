/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joandre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 21:21:38 by joandre-          #+#    #+#             */
/*   Updated: 2023/10/23 21:50:27 by joandre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*clear;
	t_list	*linx;

	if (!lst || !del)
		return ;
	clear = *lst;
	while (clear)
	{
		linx = clear->next;
		(*del)(clear->content);
		free(clear);
		clear = linx;
	}
	*lst = NULL;
}
/*
void	ft_free(void *node)
{
	free(node);
}
int	main(void)
{
	char	*src[4] = {"aquas", "fides", "ludus", "amabo"};
	t_list	*node[4];

	for (int i = 0; i < 4; i++)
	{
		node[i] = (t_list *)malloc(sizeof(t_list));
		node[i]->content = (void *)strdup(src[i]);
		node[i]->next = NULL;
	}
	t_list	*head = node[0];
	for (int i = 1; i < 4; i++)
	{
		t_list	*linx = head;
		while (linx->next)
			linx = linx->next;
		linx->next = node[i];
	}
	for (int i = 0; i < 4; i++)
	{
		printf("NODE[%d] CONTENT: [%s]\t\t", i, (char *)node[i]->content);
		printf("NODE[%d] ADDR: [%p] NEXT: [%p]\n", i, node[i], node[i]->next);
	}
	printf("\n");
	ft_lstclear(&head, ft_free);
	for (int i = 0; i < 4; i++)
	{
		printf("NODE[%d] CONTENT: [%s]\t\t", i, (char *)node[i]->content);
		printf("NODE[%d] ADDR: [%p] NEXT: [%p]\n", i, node[i], node[i]->next);
	}
	return (0);
}*/
