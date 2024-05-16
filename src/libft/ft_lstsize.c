/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joandre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 01:13:56 by joandre-          #+#    #+#             */
/*   Updated: 2023/10/23 01:21:03 by joandre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}
/*
int	main(void)
{
	char	*src[4] = {"cetera", "fereas", "umerus", "verbum"};
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
	printf("\nSIZE: [%d]\n", ft_lstsize(head));
	for (int i = 0; i < 4; i++)
	{
		free(node[i]->content);
		free(node[i]);
	}
	return (0);
}*/
