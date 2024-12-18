#include <stdio.h>
#include <stdlib.h>

// Define a simple structure
struct Person {
    char name[50];
    int age;
};

int main() {
    // Number of persons in the array
    int numPersons;
    printf("Enter Number of Persons : ");
    scanf("%d", &numPersons);

    // Allocate memory for an array of persons using calloc
    struct Person* people = (struct Person*)calloc(numPersons, sizeof(struct Person));

    // Check if memory allocation was successful
    if (people == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit with an error code
    }

    // Initialize the array of persons
    for (int i = 0; i < numPersons; ++i) {
        sprintf(people[i].name, "Person |%d", i + 1);
        people[i].age = 20 + i; // Just for demonstration
    }

    // Display the information
    for (int i = 0; i < numPersons; ++i) {
        printf("Person %d: Name - %s, Age - %d\n", i + 1, people[i].name, people[i].age);
    }

    // Don't forget to free the allocated memory
    free(people);

    return 0;
}
