#include <stdio.h>
int main(){
    int i = 1; // Initialize i to 1

    while(i > -100){ // Ensure the loop condition is clear
        printf("%d\n", i); // Print the current value of i
        i--; // Decrement i
    }
    return 0; // Return 0 to indicate successful execution
}
