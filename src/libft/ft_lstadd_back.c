/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joandre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 01:30:34 by joandre-          #+#    #+#             */
/*   Updated: 2023/10/23 20:08:01 by joandre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*adb;

	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	adb = *lst;
	while (adb->next)
		adb = adb->next;
	adb->next = new;
}
/*
int	main(void)
{
	char	*src[3] = {"pugnare", "dominus", "agnusia"};
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
		printf("NODE[%d] ADDR: [%p]\tNEXT: [%p]\n", i, node[i], node[i]->next);
	}
	t_list	*lsta = (t_list *)malloc(sizeof(t_list));
	lsta->content = (void *)strdup("TAILNOW");
	lsta->next = NULL;
	ft_lstadd_back(&head, lsta);
	printf("\n");
	for (int i = 0; i < 3; i++)
	{
		printf("NODE[%d] CONTENT: [%s]\t\t", i, (char *)node[i]->content);
		printf("NODE[%d] ADDR: [%p]\tNEXT: [%p]\n", i, node[i], node[i]->next);
	}
	printf("LSTA CONTENT: \t [%s]\t\t", (char *)lsta->content);
	printf("LSTA ADDR:    [%p]\tNEXT: [%p]\n", lsta, lsta->next);
	free(lsta->content);
	free(lsta);
	for (int i = 0; i < 3; i++)
	{
		free(node[i]->content);
		free(node[i]);
	}
	return (0);
}*/
