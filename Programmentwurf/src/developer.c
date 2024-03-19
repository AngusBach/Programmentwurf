#include "developer.h" // Include the header file for developer information

#include <stdio.h>



// Printing our informations with our name and alias
void print_developer(const developer *dev1, const developer *dev2) {
    printf("\033[94;1;6m=====================\n");
    printf("Name:   %s\n", dev1->name);
    printf("Alias:  %s\n", dev1->alae);
    printf("=====================\n");
    printf("Name:   %s\n", dev2->name);
    printf("Alias:  %s\n", dev2->alae);
    printf("=====================\033[0m\n");
}
