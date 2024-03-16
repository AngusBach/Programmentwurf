#include <stdio.h>

#include "developer_group.h"
#include "developer.h"




int main(void){
char instruction;    //to prevent errors, instead of a number, one should input a character into the input

       while (1) {
    printf("\033[4;92m========================\n");
    printf("Choose your action: \n");
    printf("List Developers \t[1]\n");
    printf("Print Group Logo \t[2]\n");
    printf("Print Group \t\t[3]\n");
    printf("Exit \t\t\t[4]\n");
    printf("========================\033[0m\n");

    printf("Enter your selection: ");
        


        scanf("%c", &instruction);

        switch(instruction) {
            case 0:
                printf("Invalid option. Please enter a number between 1 and 4.\n");
                break;
            case 1:
                print_developer("Angus Bach", "AngusBach");
                print_developer("Faik Hadutoglu", "faikhadut");
                // Code for listing developers
                break;
            case 2:
                printf("Printing Group Logo...\n");
                void print_group_logo(void);


                // Code for printing group logo
                break;

            case 3:
                
                
                


                print_developer("Angus Bach", "AngusBach");
                print_developer("Faik Hadutoglu", "faikhadut");
                
                
                print_group_logo();
                
                break;
            case 4:
                printf("Exiting...\n");
                return 0; // Exit the program
            default:
                printf("Invalid option. Please enter a number between 1 and 4.\n");
                break;
        }
    }
    
    
    }
