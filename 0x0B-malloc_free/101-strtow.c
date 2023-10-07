#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * is_space - Checks if a character is a space, tab, or newline.
 * @c: The character to check.
 *
 * Return: 1 if it's a space, tab, or newline, 0 otherwise.
 */
int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str)
	{
		if (!is_space(*str))
		{
			if (!in_word)
			{
				count++;
				in_word = 1;
			}
		}
		else
		{
			in_word = 0;
		}
		str++;
	}

	return (count);
}

/**
 * strtow - Splits a string into an array of words.
 * @str: The input string.
 *
 * Return: An array of words, or NULL if str is NULL or empty.
 *         Each element of the array contains a single word, null-terminated.
 *         The last element of the array is NULL.
 */
char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
		return (NULL);

	int num_words = count_words(str);

	if (num_words == 0)
		return (NULL);

	char **result = malloc((num_words + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);

	int word_length = 0;
	int word
