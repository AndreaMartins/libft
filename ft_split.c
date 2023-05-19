/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:27:15 by andmart2          #+#    #+#             */
/*   Updated: 2023/05/19 21:11:01 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

static unsigned int    count_substr(const char *str, char c)
{
    unsigned int     num;

    num = 0;
    while (*str)
    {
        while (*str == c)
            str++;
		if (*str)
			num++;
        while (*str && *str != c)
            str++;
    }
    return (num);
}

static char	**ft_freematrix(char **matrix, unsigned int i)
{
	while(0 < i--)
		free(matrix[i]);
	free(matrix);
	return(NULL);
}


char	**ft_split(const char *s, char c)
{
	unsigned int	num_substr;
	unsigned int	i;
	char			**to_allocate;
	const char		*start_substr;

	i = 0;
	num_substr = count_substr(s, c);
	to_allocate = ft_calloc((num_substr + 1), sizeof(char*));
	if (to_allocate == NULL)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			start_substr = s;
			while (*s && *s != c)
				s++;
			to_allocate[i] = ft_substr(start_substr, 0, s - start_substr);
			if (!to_allocate[i])
				return(ft_freematrix(to_allocate,i));
			i++;
		}
	}
	to_allocate[i] = NULL;
	return(to_allocate);
}

/*int	main(void)
{

	char **lol;

	lol = ft_split("  1  2222     3333333    4 5 6 7        ", ' ');
		for (int i = 0; lol[i]; i++)
			printf("'%s'\n", lol[i]);
		printf("\n");
		lol = ft_split("      split       this for   me  !       ", ' ');
		for (int j = 0; lol[j]; j++)
			printf("'%s'\n", lol[j]);
		printf("\n");
		lol = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i');
		for (int k = 0; lol[k]; k++)
			printf("'%s'\n", lol[k]);
}*/


/*
//int	main (int argc, char **argv)
int main(void)
{
	const char *s = "holaoondkdnnfjdnvo jndfjofo";

	char c = 'o';
	//char **result;
	int i;

	i = 0;
//	if (argc != 3)
//	{
//		printf("error");
//		return(1);
//	}
	
//	s = argv[1];
//	c = argv[2][0];
	
	ft_split(s,c);
	printf("abcn");
//	if (result != NULL)
//	{
//		while (result[i] != 0 && i < 5)
//		{
//			printf("errorresult%s\n", result[i]);
//			i++;
//		}
//	}	
	//if (result == NULL)
	//{
	//	while (result[i] != 0)
	//	{
	//		free(result);
	//	}
	//	free(result);
//	}
	//return (result);
}*/
