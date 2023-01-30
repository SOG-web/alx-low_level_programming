#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - function that prints all the elements of a list_t list
 * @head: input header pointer
 * @str: Input string value
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}

/**
 * _strlen - Calculate lenght of a string.
 * @s: string.
 *
 * Return: lenght of the string s.
 */

int _strlen(const char *s)
{
	int idx = 0;

	for (; s[idx]; idx++)
	;
	return (idx);
}