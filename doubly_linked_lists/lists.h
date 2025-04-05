#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stdio.h>

/* Structure for doubly linked list */
typedef struct dlistint_s
{
    int n;                     /* Integer data of the node */
    struct dlistint_s *prev;    /* Pointer to the previous node */
    struct dlistint_s *next;    /* Pointer to the next node */
} dlistint_t;

size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
size_t print_dlistint(const dlistint_t *h);
#endif
