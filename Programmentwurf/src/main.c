#include <stdio.h>

#include "developer_group.h"
#include "developer.h"


int instruction;
int main(void)
{
    printf("\033[4;92m========================\n");
    printf("Choose your action: \n");
    printf("List Developers \t[1]\n");
    printf("Print Group Logo \t[2]\n");
    printf("Print Group \t\t[3]\n");
    printf("Exit \t\t\t[4]\n");
    printf("========================\033[0m\n");

    printf("Enter your selection: ");




    scanf("%d",&instruction);

    int option;

    while (1) {
        printf("\033[4;92m========================\n");
    printf("Choose your action: \n");
    printf("List Developers \t[1]\n");
    printf("Print Group Logo \t[2]\n");
    printf("Print Group \t\t[3]\n");
    printf("Exit \t\t\t[4]\n");
    printf("========================\033[0m\n");

    printf("Enter your selection: ");
        


        scanf("%d", &instruction);

        switch(instruction) {
            case 1:
                printf("Listing Developers...\n");
                // Code for listing developers
                break;
            case 2:
                printf("Printing Group Logo...\n");


                // Code for printing group logo
                break;
            case 3:
                



                void print_developer(Angus Bach, AngusBach);
                void print_developer(Faik Hadutoglu, faikhadut);
                // Code for printing group
                break;
            case 4:
                printf("Exiting...\n");
                return 0; // Exit the program
            default:
                printf("Invalid option. Please enter a number between 1 and 4.\n");
        }
    }
    
    
    
    
    
    
    
    
    
    
    
    if(instruction==1){         //if instruction is 1, print developers

    }
    else if(instruction==2){    //if instruction is 2, print group logo
    
    }
    else if(instruction==3){    //if instruction is 3, print developers and group logo

    }
    else if(instruction==4){    //if instruction is 4, exit application

    }
    default{                       //wrong Command!!!
    
    }
}