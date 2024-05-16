/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joandre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 01:02:55 by joandre-          #+#    #+#             */
/*   Updated: 2023/10/23 01:11:00 by joandre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int	main(void)
{
	char	*src[4] = {"dolorem", "caputis", "vocatio", "scienta"};
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
	t_list	*lsta = (t_list *)malloc(sizeof(t_list));
	lsta->content = (void *)strdup("HEADNOW");
	lsta->next = NULL;
	ft_lstadd_front(&head, lsta);
	printf("\nLSTA CONTENT:\t [%s]\t\t", (char *)lsta->content);
	printf("LSTA ADDR: \t[%p] NEXT: [%p]\n", lsta, lsta->next);
	for (int i = 0; i < 4; i++)
	{
		printf("NODE[%d] CONTENT: [%s]\t\t", i, (char *)node[i]->content);
		printf("NODE[%d] ADDR: \t[%p] NEXT: [%p]\n", i, node[i], node[i]->next);
	}
	free(lsta->content);
	free(lsta);
	for (int i = 0; i < 4; i++)
	{
		free(node[i]->content);
		free(node[i]);
	}
	return (0);
}*/
