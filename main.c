#include <stdio.h>

int main(void){
    
    // Define shopping list array. Up to 50 item, up to 29 characters per item.
    char listArray[50][30];

    // Define count.
    int count = 0;

    // Define option integer.
    int optionInt = 0;

    // Declare i.
    int i = 0;
    


    while (optionInt != 4) {

        // Print menu.
        printf("\nShopping List Options: \n\n 1. Add item to list \n 2. Print list \n 3. Clear list \n 4. Exit \n");
        scanf("%d", &optionInt);
        printf("\n\n");

        // Switch.
        switch (optionInt) {

            case 1: // Add to list

                if (count == 50) {
                    printf("The list is full.\n\n");
                }   else {
                        printf("Add item: \n\n");
                        scanf("%29s", listArray[count]);
                        count++;
                    }
                break;

            case 2: // Print list

                if (count == 0) {
                    printf("The list is empty.\n\n");
                }   else {
                        for (i = 0; i < count; i++) {
                        printf("%d %s\n", (i + 1), listArray[i]);
                        }
                    }
                break;

            case 3: // Clear list

                count = 0;
                printf("List cleared.\n\n");
                break;

            case 4: // Exit the program

                printf("Goodbye.\n\n");
                break;

            default: // If any other number is entered
                
                printf("Invalid selection.\n\n");
                break;
        
        }
    }

    return 0;
}