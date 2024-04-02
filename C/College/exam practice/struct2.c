#include <stdio.h>

struct Student
{
    int rollNumber;
    char name[50];
    char department[50];
    char course[20];
    int yearOfAdmission;
};

#define MAX_STUDENTS 450
void printStudentsByYear(struct Student students[], int totalStudents, int targetYear);

int main()
{
    struct Student students[MAX_STUDENTS];

    int totalStudents;
    printf("Enter the total number of students: ");
    scanf("%d", &totalStudents);

    for (int i = 0; i < totalStudents; i++)
    {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Department: ");
        scanf("%s", students[i].department);
        printf("Course: ");
        scanf("%s", students[i].course);
        printf("Year of Admission: ");
        scanf("%d", &students[i].yearOfAdmission);
    }

    void printStudentsByYear(struct Student students[], int totalStudents, int targetYear)
    {
        printf("Students who joined in the year %d:\n", targetYear);

        for (int i = 0; i < totalStudents; i++)
        {
            if (students[i].yearOfAdmission == targetYear)
            {
                printf("%s\n", students[i].name);
            }
        }
    }

    printStudentsByYear(students, totalStudents, 2023);

    return 0;
}
