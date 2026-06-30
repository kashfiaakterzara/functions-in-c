#include<stdio.h>

void print_student_profile(int id, int age, int credit, double cgpa);

int main(){
int id, age, credit;
double cgpa;

printf("Enter Student ID Age CGPA Credits: ");

scanf("%d %d %lf %d", &id, &age, &cgpa, &credit);

print_student_profile(id, age, credit, cgpa);

return 0;



}

void print_student_profile(int id, int age, int credit, double cgpa)
{    
    printf("=====================================\n");
    printf("         STUDENT PROFILE\n");
    printf("=====================================\n");
    printf("ID Number         : %d\n", id);
    printf("Age               : %d years old\n", age);
    printf("CUrrent CGPA      : %.2lf\n", cgpa);
    printf("Credits Finished  : %d\n", credit);


  




}