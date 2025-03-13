#include <stdio.h>
#include <stddef.h>
#include "dog.h"

/**
 * print_dog - Prints the details of a struct dog
 * @d: Pointer to the struct dog to print
 *
 * Description: If an element is NULL, prints (nil) instead.
 * If d is NULL, nothing is printed.
 */
void print_dog(struct dog *d)
{
    if (d == NULL)
        return;

    /* Print name, or (nil) if NULL */
    printf("Name: %s\n", d->name ? d->name : "(nil)");

    /* Print age */
    printf("Age: %.6f\n", d->age);

    /* Print owner, or (nil) if NULL */
    printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
