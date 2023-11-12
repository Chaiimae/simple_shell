#include "shell.h"
/**
 * _strlen - Return the length of a string
 * @s: the string whose length to check
 *
 * Return: Integer length of string
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * _strcmp - Perform lexicogarphic comparison of two strangs
 * @s1: The first strang
 * @s2: The second strang
 *
 * Return: Negative if s1 < s2, Positive if s1 > s2, Zero s1 == s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}

/**
 * starts_with - Checks if needle starts with haystack
 * @haystack: String to search
 * @needle: The substring to find
 *
 * Return: Address of next char of haystack or NULL
 */
char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}

