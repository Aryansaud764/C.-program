// in this program we gonna take the value for how many characters char want to print

// in this program we take input for how many characters the user wants to print

#include <stdio.h>
int main() {
    int letters;
    printf("Enter the number of characters you want to print: ");
    scanf("%d", &letters);

    char input[letters + 1]; // Allocate space for the string (+1 for null terminator)

    printf("Enter the string: ");
    scanf("%s", input); // Read the string into the character array

    printf("You entered: %s\n", input); // Print the string

    return 0;
}