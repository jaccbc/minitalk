/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joandre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 00:52:35 by joandre-          #+#    #+#             */
/*   Updated: 2023/10/23 01:00:50 by joandre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*
int	main(void)
{
	char	*src[4] = {"cras", "quis", "ante", "dolo"};
	t_list	*node[4];

	for (int i = 0; i < 4; i++)
		node[i] = ft_lstnew((void *)strdup(src[i]));
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
		printf("NODE[%d] ADDR: [%p] NEXT:[%p]\n", i, node[i], node[i]->next);
	}
	for (int i = 0; i < 4; i++)
	{
		free(node[i]->content);
		free(node[i]);
	}
	return (0);
}*/
