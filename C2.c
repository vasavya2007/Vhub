#include <stdio.h>

int main() {
    char name[50]; // Array to store the name
    printf("Enter your name: ");
    scanf("%s", name); // Read the name
    printf("Hello, %s! Welcome to C programming.\n", name);
    return 0;
}

