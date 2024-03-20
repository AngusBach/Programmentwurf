#include "developer_group.h" // Include the header file for developer group
#include <stdio.h>
#include <unistd.h> //library for using blink delay


void print_group_logo(void) // Printing the group logo
{

    //Opel Logo
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


        //extra for Mr. Wilking, we want to let the following Logo blink
  int blink_count = 3; // Number of times to blink
    int blink_delay = 300000; // Delay in microseconds between blinks (3 times per second)

    for (int i = 0; i < blink_count; i++) {
        // Print the logo "Mr. wilking please grade 1"
        printf("\033[94;1;6m888b     d888                 888       888 d8b 888 888      d8b                                888               d888   \n");
        printf("8888b   d8888                 888   o   888 Y8P 888 888      Y8P                                888              d8888   \n");
        printf("88888b.d88888                 888  d8b  888     888 888                                         888                888   \n");
        printf("888Y88888P888 888d888         888 d888b 888 888 888 888  888 888 88888b.   .d88b.      88888b.  888 .d8888b        888   \n");
        printf("888 Y888P 888 888P\"           888d88888b888 888 888 888 .88P 888 888 \"88b d88P\"88b     888 \"88b 888 88K            888   \n");
        printf("888  Y8P  888 888             88888P Y88888 888 888 888888K  888 888  888 888  888     888  888 888 \"Y8888b.       888   \n");
        printf("888   \"   888 888     d8b     8888P   Y8888 888 888 888 \"88b 888 888  888 Y88b 888     888 d88P 888      X88       888   \n");
        printf("888       888 888     Y8P     888P     Y888 888 888 888  888 888 888  888  \"Y88888     88888P\"  888  88888P'     8888888  \033[0m\n");

        fflush(stdout); // Flush the output buffer to ensure the content is printed immediately

        usleep(blink_delay); // Pause execution for the blink delay

        // Clear the screen
        printf("\033[8A"); // Move cursor 8 lines up
        printf("\033[0J"); // Clear from the cursor position to the end of the screen

        fflush(stdout); // Flush the output buffer to ensure the content is cleared immediately

        usleep(blink_delay); // Pause execution for the blink delay
    }
}
