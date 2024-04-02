#include <stdio.h>

struct Student {
    char name[50];
    char branch[50];
    float cgpa;
};

int student_count() {
    int count;
    printf("Enter the number of students: ");
    scanf("%d", &count);
    return count;
}

void input_data(struct Student students[], int count) {
    for (int i = 0; i < count; ++i) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Branch: ");
        scanf("%s", students[i].branch);
        printf("CGPA: ");
        scanf("%f", &students[i].cgpa);
    }
}

void print(struct Student students[], int count) {
    printf("\nStudent Details:\n");
    for (int i = 0; i < count; ++i) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Branch: %s\n", students[i].branch);
        printf("CGPA: %.2f\n", students[i].cgpa);
    }
}

int main() {
    int count = student_count();
    struct Student students[count];

    input_data(students, count);
    print(students, count);

    return 0;
}
