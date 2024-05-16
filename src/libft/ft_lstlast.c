/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joandre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 01:22:03 by joandre-          #+#    #+#             */
/*   Updated: 2023/10/23 01:27:45 by joandre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
int	main(void)
{
	char	*src[3] = {"etiam", "bonus", "lorem"};
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
	head = ft_lstlast(head);
	printf("\nLAST NODE CONTENT: [%s]\t\t", (char *)head->content);
	printf("LAST NODE ADDR: [%p] NEXT: [%p]\n", head, head->next);
	for (int i = 0; i < 3; i++)
	{
		free(node[i]->content);
		free(node[i]);
	}
	return (0);
}*/
