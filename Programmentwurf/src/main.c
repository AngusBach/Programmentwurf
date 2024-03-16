#include <stdio.h>
#include <stdlib.h>

#include "developer_group.h" // Include the header file for developer group
#include "developer.h" // Include the header file for developer information




int main(void) {
    char instruction[1]; // Array to store user input
    char *ptr=NULL; // Pointer to char for strtol function

    while (1) { // Repeat the process while 
        
            printf("\033[4;92m========================\n"); // Print formatted text for user interface
            printf("Choose your action: \n");
            printf("List Developers \t[1]\n");
            printf("Print Group Logo \t[2]\n");
            printf("Print Group \t\t[3]\n");
            printf("Exit \t\t\t[4]\n");
            printf("========================\033[0m\n");

            printf("Enter your selection: ");
            scanf(" %s", instruction);

            long int choice = strtol(instruction, &ptr, 10); // Convert the character array to an integer

            switch(choice) {
                case 1:
                    {
                        developer angus_bach = {"Angus Bach", "AngusBach"}; // Create developer object
                        developer faik_hadutoglu = {"Faik Hadutoglu", "faikhadut"}; // Create developer object
                        print_developer(&angus_bach, &faik_hadutoglu); //Call function to print developer informations
                    }
                 
                    break;
                case 2:
                  
                    print_group_logo(); // Call function to print group logo
                    
                    break;
                case 3:
                    {
                        developer angus_bach = {"Angus Bach", "AngusBach"}; // Create developer object
                        developer faik_hadutoglu = {"Faik Hadutoglu", "faikhadut"}; // Create developer object
                        print_developer(&angus_bach, &faik_hadutoglu); //Call function to print developer informations
                        print_group_logo();
                    }
               
                    break;
                case 4:
                    printf("Exiting...\n");
                    return 0; // Exit the program
                default:
                    printf("\033[91;1;5mInvalid option. Please enter a number between 1 and 4\033[0m\n");
                    break; // Add a break statement to exit the loop.
            }
        }
    

    return 0;
}
