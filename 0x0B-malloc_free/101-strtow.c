#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_space(char c)
{
    return (c == ' ' || c == '\t' || c == '\n');
}

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

    return count;
}

char **strtow(char *str)
{
    if (str == NULL || *str == '\0')
        return NULL;

    int num_words = count_words(str);

    if (num_words == 0)
        return NULL;

    char **result = malloc((num_words + 1) * sizeof(char *));
    if (result == NULL)
        return NULL;

    int word_length = 0;
    int word_index = 0;

    for (int i = 0; str[i]; i++)
    {
        if (!is_space(str[i]))
        {
            word_length++;
            if (word_length == 1)
            {
                result[word_index] = str + i;
            }
        }
        else
        {
            if (word_length > 0)
            {
                str[i] = '\0'; // Null-terminate the word
                word_index++;
                word_length = 0;
            }
        }
    }

    result[num_words] = NULL; // Null-terminate the array

    return result;
}