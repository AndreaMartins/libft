/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:27:15 by andmart2          #+#    #+#             */
/*   Updated: 2023/05/18 20:33:54 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

static unsigned int    count_substr(const char *s, char c)
{
    printf("esteeselstring%s\n", s);
    printf("character%c\n", c);
    unsigned int    i;
    unsigned int     num;
    char *str = "hola";

    i = 0;
    num = 0;
    while (*str && i < 1)
    {
        printf("loop1i\n");
        while (*str == c)
        {
            str++;
            printf("loop2\n");
        }
        while (*str && *str != c)
        {
            str++;
            printf("loop3\n");
        }
        num++;
        i++;
        printf("fin\n");
    }
    printf("salio del while %u", num);
    return (num);
}

static char **allocate_substr(unsigned int num_substr)
{
	char	**allocated;

	printf("esteeselallocate");
	allocated = (char**) malloc((num_substr + 1) * sizeof(char *));
	return (allocated);
}

static char **extract_substr(char **to_allocate, const char *s, char c) 
{
	const char 			*copy_s;
	size_t				sub_index;//index of allocate
	size_t				sub_len;//len of each sub string it gets initialized
	size_t				sub_start;//where to start next word of s

	sub_index = 0;
	sub_len = 0;
	sub_start = 0;
	copy_s = s;
	while (copy_s)
	{
		if (*copy_s == c)//when found the breaker
		{
			if (sub_len > 0)//check the breaker has words already
			{
				to_allocate[sub_index] = (char *) malloc((sub_len + 1) * sizeof(char));
				ft_memcpy(to_allocate[sub_index], s + sub_start, sub_len);//copy from where it should
				to_allocate[sub_index][sub_len] = '\0';
				sub_index++;//goes to next index of matix
				sub_len = 0;//resets the len
			}
			sub_start = copy_s - s + 1; //in the next char might start he string
		}
		else
		{
			sub_len++; //if its not igual to the c then is a char to count
		}

		copy_s++; //analize the next char
	}
	return (to_allocate);
}

char	**ft_split(const char *s, char c)
{
	unsigned int	num_substr;
	char			**to_allocate;
	char			**result;
	
	printf("helloooo");
	num_substr = count_substr(s, c);
//	to_allocate = allocate_substr(num_substr);
//	if (to_allocate == NULL)
//		return (NULL);
//	result = extract_substr(to_allocate, s, c);
	return (NULL);
}

//int	main (int argc, char **argv)
int main(void)
{
	const char s[5] = "hola\0";
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
}
