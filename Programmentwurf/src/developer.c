#include "developer.h"
#include <stdio.h>

void print_developer(const developer *dev1, const developer *dev2) {
    printf("=====================\n");
    printf("Name:   %s\n", dev1->name);
    printf("Alias:  %s\n", dev1->aliase);
    printf("=====================\n");
    printf("Name:   %s\n", dev2->name);
    printf("Alias:  %s\n", dev2->aliase);
    printf("=====================\n");
}
