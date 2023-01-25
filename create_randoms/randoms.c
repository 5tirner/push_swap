/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randoms.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 04:03:57 by zasabri           #+#    #+#             */
/*   Updated: 2023/01/25 07:41:18 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <fcntl.h>

int	no_dup(int random_nbr, int size, int **arr)
{
	int i = 0;
	int j;
	while (i <= size)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] == arr[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int main()
{
    int n, i,random_number;
	int	min, max;
	int	duplicate_check;
	int fd = open("random_numbers", O_CREAT | O_RDWR | O_TRUNC, 0777);
	i = 0;
    printf("Enter the amount do you want to generate: ");
    scanf("%d", &n);
	int *arr = malloc(n);
	printf("Enter the min nbr: ");
	scanf("%d", &min);
	printf("Enter the max nbr: ");
	scanf("%d", &max);
	printf("1: duplicate possibe\n2: no duplicate possibe\n");
	scanf("%d", &duplicate_check);
	printf("waiting...\n");
	dup2(fd, 1);
	if (duplicate_check == 1)
	{
   		while (i < n)
   		{
	        random_number = rand() / 10;
			if (random_number >= min && random_number <= max)
			{
				if (i != 0)
					printf(" ");
	        	printf("%d", random_number);
				i++;
			}
    	}
	}
	else
	{
		while (i < n)
   		{
	        random_number = rand() / 10;
			if (no_dup(random_number, i, &arr), random_number >= min && random_number <= max)
			{
				arr[i] = random_number;
				i++;
			}
    	}
		i = 0;
		while (i < n)
		{
			if (i != 0)
				printf(" ");
			printf("%d", arr[i]);
			i++;
		}
	}
}
