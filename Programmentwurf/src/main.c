#include <stdio.h>
#include <stdlib.h>
#include "developer_group.h"
#include "developer.h"




int main(void) {
    char instruction[1];
    char *ptr;

    while (1) {
        int valid_input = 0; // Flag, um gültige Eingaben zu verfolgen
        while (!valid_input) { // Solange die Eingabe ungültig ist, wiederhole den Vorgang
            printf("\033[4;92m========================\n");
            printf("Choose your action: \n");
            printf("List Developers \t[1]\n");
            printf("Print Group Logo \t[2]\n");
            printf("Print Group \t\t[3]\n");
            printf("Exit \t\t\t[4]\n");
            printf("========================\033[0m\n");

            printf("Enter your selection: ");
            scanf(" %s", instruction);

            long int choice = strtol(instruction, &ptr, 10); // Umwandlung des Zeichenarrays in einen Integer

            switch(choice) {
                case 1:
                    {
                        developer angus_bach = {"Angus Bach", "AngusBach"};
                        developer faik_hadutoglu = {"Faik Hadutoglu", "faikhadut"};
                        print_developer(&angus_bach, &faik_hadutoglu);
                    }
                    valid_input = 1; // Setze die Flagge auf 1, um die Schleife zu beenden
                    break;
                case 2:
                    printf("Printing Group Logo...\n");
                    print_group_logo();
                    valid_input = 1; // Setze die Flagge auf 1, um die Schleife zu beenden
                    break;
                case 3:
                    {
                        developer angus_bach = {"Angus Bach", "AngusBach"};
                        developer faik_hadutoglu = {"Faik Hadutoglu", "faikhadut"};
                        print_developer(&angus_bach, &faik_hadutoglu);
                        print_group_logo();
                    }
                    valid_input = 1; // Setze die Flagge auf 1, um die Schleife zu beenden
                    break;
                case 4:
                    printf("Exiting...\n");
                    return 0;
                default:
                    printf("Invalid option. Please enter a number between 1 and 4.\n");
                    break; // Füge eine break-Anweisung hinzu, um die Schleife zu beenden.
            }
        }
    }

    return 0;
}
