#ifndef DEVELOPER_H_
#define DEVELOPER_H_

#define NAME_LENGTH (25U)

typedef struct
{
    char name[NAME_LENGTH];
    char aliase[NAME_LENGTH];
}   developer;


void print_developer(const developer *dev1, const developer *dev2);


#endif
