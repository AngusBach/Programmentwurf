#include <stdio.h>
#include "developer.h"



void print_developer(const developer *name, const developer *aliase) {
    printf("=====================\n");
    printf("Name:   %s\n", name->name);
    printf("Alias:  %s\n", aliase->aliase);
    printf("=====================\n");
}
/*
void print_developer(developer name, developer aliase)
{
    printf("=====================\n");
    printf("Name:   %u\n", name);
    printf("Alias:  %u\n", aliase);
    printf("=====================\n");
}
*/

