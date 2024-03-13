#ifndef PRINTS_H_BGR346WN8j
#define PRINTS_H_BGR346WN8j

#define NAME_LENGTH (25U)

typedef struct
{
    char name[NAME_LENGTH];
    char aliase[NAME_LENGTH];
}   developer;



void print_developer(developer name[], developer aliase[]); //pointer benutzen






void print_developer(developer const *const char name[]);

#endif