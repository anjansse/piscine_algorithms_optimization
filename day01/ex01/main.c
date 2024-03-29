/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghdesfos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 19:04:45 by ghdesfos          #+#    #+#             */
/*   Updated: 2019/06/13 19:50:05 by ghdesfos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int main(int ac, char **av)
{
	struct s_node *lst;

	if (ac >= 2)
		lst = createList(av + 1, ac - 1);
	else{
		printf("Usage: ./reverse word1 word2 ...\n");
		return (0);
	}
	/*-------------------
	launch your test here
	--------------------*/

	printReverse(lst);

	return (0);
}



// Function used for the test
// Don't go further :)

struct s_node *createList(char **words, int n) {
	struct s_node *lst;
	struct s_node *tmp;
	int i;

	lst = NULL;
	i = n - 1;
	while (i >= 0) {
		if (!(tmp = (struct s_node *)malloc(sizeof(struct s_node))))
			return (NULL);
		tmp->word = words[i];
		tmp->next = lst;
		lst = tmp;
		i--;
	}
	return (lst);
}

