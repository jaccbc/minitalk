/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joandre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 22:54:43 by joandre-          #+#    #+#             */
/*   Updated: 2023/10/25 17:57:05 by joandre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*swap;

	node = NULL;
	while (lst)
	{
		swap = ft_lstnew((*f)(lst->content));
		if (!swap)
		{
			ft_lstclear(&node, del);
			return (NULL);
		}
		ft_lstadd_back(&node, swap);
		lst = lst->next;
	}
	return (node);
}
/*
void	*ft_allcaps(void *content)
{
	char	*acaps = strdup((char *)content);

	for (int i = 0; acaps[i]; i++)
		acaps[i] = acaps[i] - 32;
	return ((void *)acaps);
}
void	ft_free(void *node)
{
	free(node);
}
int	main(void)
{
	char	*src[4] = {"fides", "ducis", "regis", "curia"};
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
	t_list	*new = ft_lstmap(head, ft_allcaps, ft_free);
	printf("\n");
	for (int i = 0; i < 4; i++)
	{
		t_list	*nxt = new->next;
		printf("NEW NODE[%d] CONTENT: [%s]\t\t", i, (char *)new->content);
		printf("NEW NODE[%d] ADDR: [%p] NEXT: [%p]\n", i, new, new->next);
		free(new->content);
		free(new);
		new = nxt;
		free(node[i]->content);
		free(node[i]);
	}
	return (0);
}*/
