/*
** EPITECH PROJECT, 2017
** mylist.h
** File description:
** workshop linked list
*/

#ifndef H_MYLIST
#define H_MYLIST

typedef struct full_file_list {
    char *string;
    struct full_file_list *next;
    int rooms_trigger;
} ff_LIST_t;

typedef struct comments_linked_list {
    char *data;
    struct linked_list *next;
} comments_list_t;

typedef struct rooms_linked_list {
    char *data;
    struct linked_list *next;
} rooms_list_t;

typedef struct tunnels_linked_list {
    char *data;
    struct linked_list *next;
    int print_tunnel_once;
} tunnels_list_t;

typedef struct ants_linked_list {
    char *data;
    struct linked_list *next;
} ants_list_t;

struct linked_list *add_ants_elem(char *elem, ants_list_t *list);
struct linked_list *free_ants_list(ants_list_t *list);
void display_ants_list(ants_list_t *list);
int ants_charger(char *elem, int trigger);

struct linked_list *add_comments_elem(char *elem, comments_list_t *list);
struct linked_list *free_comments_list(comments_list_t *list);
int comments_charger(char *elem);

int comments_reader(ff_LIST_t *current);
int tunnels_reader(ff_LIST_t *current);
int ants_reader(ff_LIST_t *current);
int file_reader(ff_LIST_t *current);

int not_an_comment(char *str);
int find_tunnel(char *str);
int compt_word(char *str);

struct linked_list *add_rooms_elem(char *elem, rooms_list_t *list);
struct linked_list *free_rooms_list(rooms_list_t *list);
void display_rooms_list(rooms_list_t *list);
int rooms_charger(char *elem);

int compt(char *str);
char truncate_string(char *str);
int third_room_reader(ff_LIST_t *current);
int second_room_reader(ff_LIST_t *current);
int first_room_reader(ff_LIST_t *current);

int	my_strcmp(char *s1, char *s2);

struct linked_list *add_tunnels_elem(char *elem, tunnels_list_t *list);
struct linked_list *free_tunnels_list(tunnels_list_t *list);
void display_tunnels_list(tunnels_list_t *list);
int tunnels_charger(char *elem, int trigger);

int my_strlen(char *str);
char *my_strcpy(char *dest, char *src);
char *my_strdup(char *str);
void my_putchar(char c);
int	my_putstr(char *str);
#endif
