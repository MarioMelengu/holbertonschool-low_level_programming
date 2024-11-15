#include "student.h"
#include <stdio.h>

int main(void)
{
    printf("Hello World\n");
    Student *student = create_student("Mario Melengu", 22, 9.4);
    Student *student2 = create_student("Xhoana Gjoshi", 21, 4.9);
    print_student(student);
    print_student(student2);
    update_average_grade(student, 9.9);
    print_student(student);
    free_student(student);
    print_student(student);
    return (0);
}