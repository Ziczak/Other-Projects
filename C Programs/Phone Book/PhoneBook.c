#include <stdio.h>

int main() {
    char n[50];
    int a;
    int p;
    char dob[20]; // Added to store date of birth as string
    int day, month, year; // Added to store day, month, and year separately

    char na[50];
    int ag;
    int ph;
    char dob2[20]; // Added to store date of birth for second contact
    int day2, month2, year2; // Added to store day, month, and year separately for second contact

    char add[50];
    char addr[50];

    printf("WELCOME TO PHONE BOOK\n\n");

    printf("MENU\n");
    printf("Press 1 to add a contact\n");
    printf("Press 2 to see the entered contacts\n");
    printf("Press 3 to exit the phone book\n");

    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter the number of contacts to be added (1 or 2): ");
        int numContacts;
        scanf("%d", &numContacts);

        if (numContacts == 1) {
            printf("--------------------------------------\n");
            printf("Name: ");
            scanf(" %[^\n]", n);
            printf("Age: ");
            scanf("%d", &a);
            printf("Phone Number: ");
            scanf("%d", &p);
            printf("Date Of Birth (DD/MM/YYYY): ");
            scanf("%s", dob); // Read the date of birth as a string

            // Extract day, month, and year from the date of birth string
            sscanf(dob, "%d/%d/%d", &day, &month, &year);

            printf("Address: ");
            scanf(" %[^\n]", add);
        } else if (numContacts == 2) {
            printf("--------------------------------------\n");
            printf("Name: ");
            scanf(" %[^\n]", n);
            printf("Age: ");
            scanf("%d", &a);
            printf("Phone Number: ");
            scanf("%d", &p);
            printf("Date Of Birth (DD/MM/YYYY): ");
            scanf("%s", dob); // Read the date of birth as a string

            // Extract day, month, and year from the date of birth string
            sscanf(dob, "%d/%d/%d", &day, &month, &year);

            printf("Address: ");
            scanf(" %[^\n]", add);

            printf("--------------------------------------\n");
            printf("Name: ");
            scanf(" %[^\n]", na);
            printf("Age: ");
            scanf("%d", &ag);
            printf("Phone Number: ");
            scanf("%d", &ph);
            printf("Date Of Birth (DD/MM/YYYY): ");
            scanf("%s", dob2); // Read the date of birth as a string for second contact

            // Extract day, month, and year from the date of birth string for second contact
            sscanf(dob2, "%d/%d/%d", &day2, &month2, &year2);

            printf("Address: ");
            scanf(" %[^\n]", addr);
        } else {
            printf("Invalid number of contacts\n");
        }
    } else if (choice == 2) {
        printf("--------------------------------------\n");
        printf("Name: %s\n", n);
        printf("Age: %d\n", a);
        printf("Phone Number: %d\n", p);
        printf("Date Of Birth: %d/%d/%d\n", day, month, year); // Print date of birth for first contact
        printf("Address: %s\n", add);

        printf("--------------------------------------\n");
        printf("Name: %s\n", na);
        printf("Age: %d\n", ag);
        printf("Phone Number: %d\n", ph);
        printf("Date Of Birth: %d/%d/%d\n", day2, month2, year2); // Print date of birth for second contact
        printf("Address: %s\n", addr);
    } else if (choice == 3) {
        printf("Are you sure that you want to close the phone book?\n");
        printf("Press 1 for yes\n");
        printf("Press 2 for no\n");

        int ans;
        printf("Enter your choice: ");
        scanf("%d", &ans);

        if (ans == 1) {
            printf("The phone book has closed.\n");
            printf("Have a great day!\n");
        } else if (ans == 2) {
            printf("The phone book has not closed.\n");
            printf("You can continue.\n");
        } else {
            printf("Invalid choice\n");
        }
    } else {
        printf("Invalid choice\n");
    }
    return 0;
}


