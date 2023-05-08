#include <stdio.h>

struct Employee {
    char name[50];
    int age;
    float salary;
};

int main() {
    struct Employee emp[10];
    int i;

    printf("Enter details of 10 employees:\n");

    for(i = 0; i < 10; i++) {
        printf("\nEnter details of Employee %d:\n", i+1);

        printf("Enter employee name: ");
        fgets(emp[i].name, 50, stdin);

        printf("Enter employee age: ");
        scanf("%d", &emp[i].age);

        printf("Enter employee salary: ");
        scanf("%f", &emp[i].salary);

        // consume the newline character from the input buffer
        getchar();
    }

    printf("\nEmployee Details\n");
    for(i = 0; i < 10; i++) 
    {
        printf("\nEmployee %d:\n", i+1);
        printf("Name: %s", emp[i].name);
        printf("Age: %d\n", emp[i].age);
        printf("Salary: %.2f\n", emp[i].salary);
    }

    return 0;
}

