#include <stdio.h>
#include <string.h>

int main() {
    char last_name[50];
    char first_name[50];
    char full_name[100];

    printf("Enter last name: ");
    if (fgets(last_name, sizeof(last_name), stdin)) {
        last_name[strcspn(last_name, "\n")] = '\0';
    }

    printf("Enter first name: ");
    if (fgets(first_name, sizeof(first_name), stdin)) {
        first_name[strcspn(first_name, "\n")] = '\0';
    }

    // Construct full name: First Name + " " + Last Name
    strcpy(full_name, first_name);
    strcat(full_name, " ");
    strcat(full_name, last_name);

    printf("Full name: %s\n", full_name);
    printf("Length: %zu\n", strlen(full_name));

    return 0;
}
