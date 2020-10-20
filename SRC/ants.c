/*
** EPITECH PROJECT, 2020
** lem_in
** File description:
** lem_in
*/

#include <stdio.h>
#include <stdlib.h>
#include "../include/mylist.h"

struct linked_list *add_ants_elem(char *elem, ants_list_t *list)
{
    struct ants_linked_list *new = malloc(sizeof(ants_list_t));

    if (new == NULL)
        return NULL;
    new->data = elem;
    if (list == NULL)
        new->next = NULL;
    else
        new->next = list;
    return (new);
}

struct linked_list *free_ants_list(ants_list_t *list)
{
    struct ants_linked_list *temp = list;

    while (temp != NULL) {
        temp = temp->next;
        free(list);
        list = temp;
    }
    return NULL;
}

void display_ants_list(ants_list_t *list)
{
    struct ants_linked_list *temp = list;
    char *actual = temp->data;

    my_putstr("#number_of_ants\n");
    if (temp == NULL)
        return;
    while (temp != NULL) {
        my_putstr(actual);
        temp = temp->next;
    }
    my_putstr("#rooms\n");
}

int ants_charger(char *elem, int trigger)
{
    ants_list_t *list = NULL;

    list = add_ants_elem(elem, list);
    display_ants_list(list);
    list = free_ants_list(list);
    return (0);
}
