#include <stdio.h>
#include <stdlib.h>

int main() {
    // Simple variables for one student (no arrays needed)
    int id;
    char name[50];
    float marks;
    char grade;
    int choice;

main_menu:
    // Display Menu
    printf("\n=========================================\n");
    printf(" STUDENT GRADE & RESULT MANAGEMENT SYSTEM\n");
    printf("=========================================\n");
    printf("1. Enter Student Record\n");
    printf("2. Display Student Record\n");
    printf("3. Exit\n");
    printf("-----------------------------------------\n");
    printf("Enter your choice (1-3): ");
   
    if (scanf("%d", &choice) != 1) {
        printf("\nInvalid input! Please enter a valid number.\n");
        while (getchar() != '\n');
        goto main_menu;
    }

    switch (choice) {
        case 1:
            printf("\n--- Enter Student Record ---\n");
            printf("Enter Student ID: ");
            scanf("%d", &id);
           
            printf("Enter Student Name: ");
            scanf("%s", &name);
           
            printf("Enter Marks (out of 100): ");
            scanf("%f", &marks);

            if (marks < 0 || marks > 100) {
                printf("\nInvalid marks! Please enter a value between 0 and 100.\n");
                goto main_menu;
            }

            if (marks >= 90)
                grade = 'A';
            else if (marks >= 75)
                grade = 'B';
            else if (marks >= 60)
                grade = 'C';
            else if (marks >= 40)
                grade = 'D';
            else
                grade = 'F';

            printf("\nStudent record saved successfully!\n");
            goto main_menu;

        case 2:
            printf("\n--- Student Record ---\n");
            printf("%-10s %-20s %-10s %-10s\n", "ID", "Name", "Marks", "Grade");
            printf("---------------------------------------------------\n");
            printf("%-10d %-20s %-10.2f %-10c\n", id, name, marks, grade);
            goto main_menu;

        case 3:
            printf("\nExiting program. Thank you!\n");
            exit(0);

        default:
            printf("\nInvalid choice! Please select between 1 and 3.\n");
            goto main_menu;
    }

    return 0;
}