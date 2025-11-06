#include <stdio.h>

int main() {
    // Declare variables
    char name[20] = "John";
    int age = 25;
    float height = 5.9;
    double weight = 70.5;

    // Print the values
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Height: %.1f feet\n", height);
    printf("Weight: %.1lf kg\n", weight);

    return 0;
}