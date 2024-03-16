#include <stdio.h>

typedef struct {
    char name[25];
    char aliase[25];
} developer;

void print_group_logo(void) {
    printf("           ########           \n");
    printf("        ######  ######        \n");
    printf("      ####          ####      \n");
    printf("    ####              ####    \n");
    printf("    ###                ###    \n");
    printf(" ###################    ###   \n");
    printf("   ###      ######      ###   \n");
    printf("   ###    ####################\n");
    printf("    ###                ###    \n");
    printf("    ####              ####    \n");
    printf("      ####          ####      \n");
    printf("        ######  ######        \n");
    printf("           ########           \n");
}

void print_developer(const developer *name, const developer *aliase) {
    printf("=====================\n");
    printf("Name:   %s\n", name->name);
    printf("Alias:  %s\n", aliase->aliase);
    printf("=====================\n");
}

int main(void) {
    char instruction;

    while (1) {
        printf("\033[4;92m========================\n");
        printf("Choose your action: \n");
        printf("List Developers \t[1]\n");
        printf("Print Group Logo \t[2]\n");
        printf("Print Group \t\t[3]\n");
        printf("Exit \t\t\t[4]\n");
        printf("========================\033[0m\n");

        printf("Enter your selection: ");
        scanf(" %c", &instruction);

        switch(instruction) {
            case 0:
                printf("That was not a valid input!\n");
                break;
            case '1':
                {
                    developer angus_bach = {"Angus Bach", "AngusBach"};
                    developer faik_hadutoglu = {"Faik Hadutoglu", "faikhadut"};
                    print_developer(&angus_bach, &angus_bach);
                    print_developer(&faik_hadutoglu, &faik_hadutoglu);
                }
                break;
            case '2':
                printf("Printing Group Logo...\n");
                print_group_logo();
                break;
            case '3':
                {
                    developer angus_bach = {"Angus Bach", "AngusBach"};
                    developer faik_hadutoglu = {"Faik Hadutoglu", "faikhadut"};
                    print_developer(&angus_bach, &angus_bach);
                    print_developer(&faik_hadutoglu, &faik_hadutoglu);
                    print_group_logo();
                }
                break;
            case '4':
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid option. Please enter a number between 1 and 4.\n");
                break,
        }
    }

    return 0;
}
