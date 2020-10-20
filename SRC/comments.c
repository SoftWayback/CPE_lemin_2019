/*
** EPITECH PROJECT, 2020
** lem_in
** File description:
** lem_in
*/

#include <stdio.h>
#include <stdlib.h>
#include "../include/mylist.h"

struct linked_list *add_comments_elem(char *elem, comments_list_t *list)
{
    struct comments_linked_list *new = malloc(sizeof(comments_list_t));

    if (new == NULL)
        return NULL;
    new->data = elem;
    if (list == NULL)
        new->next = NULL;
    else
        new->next = list;
    return (new);
}

struct linked_list *free_comments_list(comments_list_t *list)
{
    struct comments_linked_list *temp = list;

    while (temp != NULL) {
        temp = temp->next;
        free(list);
        list = temp;
    }
    return NULL;
}

int comments_charger(char *elem)
{
    comments_list_t *list = NULL;

    list = add_comments_elem(elem, list);
    list = free_comments_list(list);
    return (0);
}
