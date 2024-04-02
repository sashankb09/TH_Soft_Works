#include <stdio.h>

struct Employee {
    int empId;
    char name[50];
    float salary;
};

int main() {
    int size;
    struct Employee employees[size];
    
    printf("enter size of the structure:");
    scanf("%d",&size);

    for (int i = 0; i < 3; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &employees[i].empId);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    printf("\nDetails of employees:\n");
    for (int i = 0; i < 3; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Employee ID: %d\n", employees[i].empId);
        printf("Name: %s\n", employees[i].name);
        printf("Salary: %.2f\n", employees[i].salary);
    }

    return 0;
}
