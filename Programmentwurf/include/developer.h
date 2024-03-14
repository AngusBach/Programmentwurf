#ifndef DEVELOPER_H_
#define DEVELOPER_H_

#define NAME_LENGTH (25U)

typedef struct
{
    char name[NAME_LENGTH];
    char aliase[NAME_LENGTH];
}   developer;


void print_developer(const developer *name, const developer *aliase);

//void print_developer(developer name[], developer aliase[]); //pointer benutzen

//void print_developer(developer const *const char name[]);

#endif
