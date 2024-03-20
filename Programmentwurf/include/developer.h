#ifndef DEVELOPER_H_ // Header guard to prevent multiple inclusion of this header file
#define DEVELOPER_H_

#define NAME_LENGTH (25U) // Macro definition for the length of developer names

typedef struct // Defining a structure to hold developer information
{
    char name[NAME_LENGTH]; // Name of the developer
    char alias[NAME_LENGTH]; // Alias of the developer
}   developer; //specific name for our struct


void print_developer(const developer *dev1, const developer *dev2); // Function for printing developer informations in main


#endif
