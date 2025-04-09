/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjoao-fr <mjoao-fr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:31:05 by mjoao-fr          #+#    #+#             */
/*   Updated: 2025/04/07 15:31:06 by mjoao-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int	result;
	size_t	output;
	char	*out;
	
	printf("FT_ISALPHA TEST\n");
	result = ft_isalpha('a');
	printf("Tested 'a'\tExpected: 1\tGot: %d\n", result);
	result = ft_isalpha('Z');
	printf("Tested 'Z'\tExpected: 1\tGot: %d\n", result);
	result = ft_isalpha('0');
	printf("Tested '0'\tExpected: 0\tGot: %d\n", result);
	result = ft_isalpha(',');
	printf("Tested ','\tExpected: 0\tGot: %d\n\n\n", result);

	printf("FT_ISDIGIT TEST:\n");
	result = ft_isdigit('4');
	printf("Tested '4'\tExpected: 1\tGot: %d\n", result);
	result = ft_isdigit('Z');
	printf("Tested 'Z'\tExpected: 0\tGot: %d\n", result);
	result = ft_isdigit(',');
	printf("Tested ','\tExpected: 0\tGot: %d\n\n\n", result);

	printf("FT_ISALNUM TEST:\n");
	result = ft_isalnum('a');
	printf("Tested 'a'\tExpected: 1\tGot: %d\n", result);
	result = ft_isalnum('Z');
	printf("Tested 'Z'\tExpected: 1\tGot: %d\n", result);
	result = ft_isalnum('0');
	printf("Tested '0'\tExpected: 1\tGot: %d\n", result);
	result = ft_isalnum(',');
	printf("Tested ','\tExpected: 0\tGot: %d\n\n\n", result);

	printf("FT_ISALPHA TEST:\n");
	result = ft_isalpha('a');
	printf("Tested 'a'\tExpected: 1\tGot: %d\n", result);
	result = ft_isalpha('Z');
	printf("Tested 'Z'\tExpected: 1\tGot: %d\n", result);
	result = ft_isalpha('0');
	printf("Tested '0'\tExpected: 0\tGot: %d\n", result);
	result = ft_isalpha(',');
	printf("Tested ','\tExpected: 0\tGot: %d\n\n\n", result);

	printf("FT_ISASCII TEST:\n");
	result = ft_isascii('a');
	printf("Tested 'a'\tExpected: 1\tGot: %d\n", result);
	result = ft_isascii('\t');
	printf("Tested '\\t'\tExpected: 1\tGot: %d\n", result);
	result = ft_isascii(200);
	printf("Tested '200'\tExpected: 0\tGot: %d\n", result);
	result = ft_isascii(-5);
	printf("Tested '-5'\tExpected: 0\tGot: %d\n\n\n", result);

	printf("FT_ISPRINT TEST:\n");
	result = ft_isprint('a');
	printf("Tested 'a'\tExpected: 1\tGot: %d\n", result);
	result = ft_isprint('\t');
	printf("Tested '\\t'\tExpected: 0\tGot: %d\n", result);
	result = ft_isprint(200);
	printf("Tested '200'\tExpected: 0\tGot: %d\n", result);
	result = ft_isprint(-5);
	printf("Tested '-5'\tExpected: 0\tGot: %d\n\n\n", result);

	printf("FT_STRLEN TEST:\n");
	const char	*str1 = "maria";
        output = ft_strlen(str1);
	printf("Tested 'maria'\t\tExpected: 5\tGot: %zu\n", output);
	const char      *str2 = "42";
	output = ft_strlen(str2);
	printf("Tested '42'\t\tExpected: 2\tGot: %zu\n", output);
	const char      *str3 = "";
	output = ft_strlen(str3);
	printf("Tested ''\t\tExpected: 0\tGot: %zu\n", output);
	const char      *str4 = "maria joao";
	output = ft_strlen(str4);
	printf("Tested 'maria joao'\tExpected: 10\tGot: %zu\n\n\n", output);

	printf("FT_MEMSET TEST:\n");
	char	st[] = "Hello";
	char	st1[] = "H";
	ft_memset(st, '1', 0);
	printf("Tested 'Hello' with '1' and 0 bytes\tExpected: Hello\t\tGot: %s\n", st);
	ft_memset(st, '*', 3);
	printf("Tested 'Hello' with '*' and 3 bytes\tExpected: ***lo\t\tGot: %s\n", st);
	ft_memset(st1, '*', 3);
	printf("Tested 'H' with '*' and 3 bytes\t\tExpected: ***\t\tGot: %s\n\n\n", st1);

	printf("FT_BZERO TEST:\n");
	ft_bzero(st, 5);
	printf("Tested 'Hello' with 5 bytes\t\t\t\tExpected: \t\tGot: %s\n", st);
	char st2[] = "Hello";
	ft_bzero(st2, 1);
	printf("Tested 'Hello' with 1 bytes\t\t\t\tExpected: \t\tGot: %s\n", st2);
	char st3[] = "Hello";
	ft_bzero(st3 + 2, 2);
	printf("Tested 'Hello' starting at the 3rd byte, 3 bytes\tExpected: He\t\tGot: %s\n\n\n", st3);
	
	printf("FT_MEMCPY TEST:\n");
	char	dest5[20] = "";
	char	dest6[20] = "abcdefg";
	char	dest7[20] = "abcdefg";
	char	dest8[20] = "";
	char	srce[20] = "joao";
	ft_memcpy(dest5, "", 2);
	printf("Tested empty dest, empty src, 2 bytes\t\t\t\tExpected:\t\tGot: %s\n", dest5);
	ft_memcpy(dest6, "maria", 6);
	printf("Tested dest 'abcdef', with src 'maria', 6 bytes'\t\tExpected: maria\t\tGot: %s\n", dest6);
	ft_memcpy(dest7, "maria", 5);
	printf("Tested dest 'abcdefg', with src 'maria', 5 bytes'\t\tExpected: mariafg\tGot: %s\n", dest7);
	ft_memcpy(dest8, "ma", 4);
	printf("Tested empty dest, src 'ma', 4 bytes\t\t\t\tExpected: ma\t\tGot: %s\n", dest8);
	ft_memcpy(srce + 1, srce, 4);
	printf("Tested overlaping src 'joao' and dest as (src + 1), 4 bytes\tExpected: jjoao\t\tGot: %s - doesn't handle overlapping cases\n\n\n", srce);


	printf("FT_MEMMOVE TEST:\n");
	char	srce1[20] = "joao";
	ft_memmove(srce1 + 1, srce1, 4);
	printf("Tested overlaping src 'joao' and dest as (src + 1), 4 bytes\tExpected: jjoao\t\tGot: %s\n", srce1);
	ft_memmove(dest6, dest7, 6);
	printf("Tested dest 'maria', with src 'mariafg', 6 bytes'\t\tExpected: mariafg\tGot: %s\n\n\n", dest6);


	printf("FT_STRLCPY TEST:\n");
	char	dest[] = "";
	output = ft_strlcpy(dest, str4, 0);
	printf("Tested 'maria joao, with size 0'\tExpected:  size 10\t\tGot: %s size %zu\n", dest, output);
	output = ft_strlcpy(dest, str4, 20);
	printf("Tested 'maria joao, with size 20'\tExpected: maria joao size 10\tGot: %s size %zu\n", dest, output);
	output = ft_strlcpy(dest, str4, 4);
	printf("Tested 'maria joao, with size 4'\tExpected: mar size 10\t\tGot: %s size %zu\n\n\n", dest, output);

	printf("FT_STRLCAT TEST:\n");
        const char    src[] = "joao";
	char dest1[20] = "maria ";
        output = ft_strlcat(dest1, src, 11);
	printf("Tested dest 'maria ' src 'joao' size 11\tExpected: maria joao size 10\tGot: %s size %zu\n", dest1, output);
	char dest2[20] = "";
	output = ft_strlcat(dest2, src, 11);
        printf("Tested dest '' src 'joao' size 11\tExpected: joao size 4\t\tGot: %s size %zu\n", dest2, output);	 
	char dest3[20] = "";
	output = ft_strlcat(dest3, src, 0);
	printf("Tested dest '' src 'joao' size 0\tExpected:  size 4\t\tGot: %s size %zu\n\n\n", dest3, output);

	printf("FT_TOUPPER TEST:\n");
	result = ft_toupper('a');
	printf("Tested 'a'\tExpected: A\tGot: %c\n", result);
	result = ft_toupper('z');
	printf("Tested 'z'\tExpected: Z\tGot: %c\n", result);
	result = ft_toupper('g');
	printf("Tested 'g'\tExpected: G\tGot: %c\n", result);
	result = ft_toupper('G');
	printf("Tested 'G'\tExpected: G\tGot: %c\n", result);
	result = ft_toupper(',');
	printf("Tested ','\tExpected: ,\tGot: %c\n\n\n", result);

	printf("FT_TOLOWER TEST:\n");
	result = ft_tolower('A');
	printf("Tested 'A'\tExpected: a\tGot: %c\n", result);
	result = ft_tolower('Z');
	printf("Tested 'Z'\tExpected: z\tGot: %c\n", result);
	result = ft_tolower('G');
	printf("Tested 'G'\tExpected: g\tGot: %c\n", result);
	result = ft_tolower('g');
	printf("Tested 'g'\tExpected: g\tGot: %c\n", result);
	result = ft_toupper(',');
	printf("Tested ','\tExpected: ,\tGot: %c\n\n\n", result);

	printf("FT_STRCHR TEST:\n");
	char	*string;
	const char s[] = "maria";
	const char s1[] = "";
	const char s2[] = "mar1a";
	string = ft_strchr(s, 'a');
	printf("Tested 'maria' and 'a'\tExpected: aria\tGot: %s\n", string);
	string = ft_strchr(s2, '1');
	printf("Tested 'mar1a' and '1'\tExpected: 1a\tGot: %s\n", string);
	string = ft_strchr(s1, 'a');
	printf("Tested '' and 'a'\tExpected: null \tGot: %s\n\n\n", string);

	printf("FT_STRRCHR TEST:\n");
	string = ft_strrchr(s, 'a');
	printf("Tested 'maria' and 'a'\tExpected: a\tGot: %s\n", string);
	string = ft_strrchr(s1, 'a');
	printf("Tested '' and 'a'\tExpected: null \tGot: %s\n", string);
	const char s3[] = "banana";
	string = ft_strrchr(s3, 'n');
	printf("Tested 'banana' and 'n'\tExpected: na\tGot: %s\n\n\n", string);

	printf("FT_STRNCMP TEST:\n");
	result = ft_strncmp("AB", "ABC", 3);
	printf("Tested 'AB' 'ABC' n3\tExpected: -67\tGot: %d\n", result);
	result = ft_strncmp("ABC", "AB", 3);
	printf("Tested 'ABC' 'AB' n3\tExpected: 67\tGot: %d\n", result);
	result = ft_strncmp("ABC", "AB", 2);
	printf("Tested 'ABC' 'AB' n2\tExpected: 0\tGot: %d\n", result);
	result = ft_strncmp("ABC", "ABJ", 3);
	printf("Tested 'ABC' 'ABJ' n3\tExpected: -7\tGot: %d\n\n\n", result);


	printf("FT_MEMCHR TEST:\n");
	out = ft_memchr(s, 'a', 5);
	printf("Tested 'maria', finding 'a' first 5 bytes\tExpected: aria\tGot: ");
	if (out != 0)
		printf("%s\n", out);
	else
		printf("NULL\n");
	out = ft_memchr(s, 'j', 10);
	printf("Tested 'maria', finding 'j' first 10 bytes\tExpected: NULL\tGot: ");
	if (out != 0)
		printf("%s\n", out);
	else
		printf("NULL\n");
	out = ft_memchr(s, 'r', 2);
	printf("Tested 'maria', finding 'r' first 2 bytes\tExpected: NULL\tGot: ");
	if (out != 0)
		printf("%s\n", out);
	else
		printf("NULL\n");
	out = ft_memchr(s, 'r', 3);
	printf("Tested 'maria', finding 'r' first 3 bytes\tExpected: ria\tGot: ");
	if (out != 0)
		printf("%s\n\n\n", out);
	else
		printf("NULL\n");
	
	printf("FT_MEMCMP TEST:\n");
	printf("Tested 'abc' and 'abc' w/ 2 bytes\tExpected: 0\tGot: %d\n", ft_memcmp("abc", "abc", 2));
	printf("Tested 'abc' and 'abd' w/ 3 bytes\tExpected: -1\tGot: %d\n", ft_memcmp("abc", "abd", 3));
	printf("Tested 'hello' and 'hellz' w/ 4 bytes\tExpected: 0\tGot: %d\n", ft_memcmp("hello", "hellz", 4));
	printf("Tested 'hello' and 'hellz' w/ 5 bytes\tExpected: -11\tGot: %d\n", ft_memcmp("hello", "hellz", 5));
	printf("Tested 'abc' and 'abcd' w/ 5 bytes\tExpected: -100\tGot: %d\n", ft_memcmp("abc", "abcd", 5));
	printf("Tested 'abcd' and 'abc' w/ 5 bytes\tExpected: 100\tGot: %d\n", ft_memcmp("abcd", "abc", 5));
	printf("Tested 'a' and 'abc' w/ 1 byte\t\tExpected: 0\tGot: %d\n", ft_memcmp("a", "abc", 1));
	printf("Tested 'abc' and 'a' w/ 2 bytes\t\tExpected: 98\tGot: %d\n", ft_memcmp("abc", "a", 2));
	printf("Tested 'abc' and 'abc' w/ 0 bytes\tExpected: 0\tGot: %d\n\n\n", ft_memcmp("abc", "abc", 0));

	printf("FT_ATOI TEST:\n");
	result = ft_atoi("12 3ab");
	printf("Tested '12 3ab'\t\tExpected: 12\tGot: %d\n", result);
	result = ft_atoi("  +123abc");
	printf("Tested '  +123abc'\tExpected: 123\tGot: %d\n", result);
	result = ft_atoi("  -123abc");
	printf("Tested '  -123abc'\tExpected: -123\tGot: %d\n", result);
	result = ft_atoi(" --123abc");
	printf("Tested ' --123abc'\tExpected: 0\tGot: %d\n", result);
	result = ft_atoi(" - a123abc");
	printf("Tested ' - a123abc'\tExpected: 0\tGot: %d\n\n\n", result);

}
