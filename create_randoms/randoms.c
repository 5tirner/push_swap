/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randoms.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 04:03:57 by zasabri           #+#    #+#             */
/*   Updated: 2023/01/25 04:33:01 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <fcntl.h>


int main()
{
    int n, i,random_number;
	int	min, max;
	int fd = open("random_numbers", O_CREAT | O_RDWR, 0777);
	i = 0;
    printf("Enter the amount do you want to generate: ");
    scanf("%d", &n);
	printf("Enter the min nbr: ");
	scanf("%d", &min);
	printf("Enter the max nbr: ");
	scanf("%d", &max);
	dup2(fd, 1);
   	while (i < n)
   	{
        random_number = rand() % 11;
		if (random_number >= min && random_number <= max)
		{
			if (i != 0)
				printf(" ");
        	printf("%d", random_number);
			i++;
		}
    }
}

