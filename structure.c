#include<stdio.h>
struct student{
    char name[20];
    int number;
    char grade;
    float marks;
};
int main()
{
struct student s={"charith",6,'A',100};
printf("\nName = %s",s.name);
printf("\nNumber = %d",s.number);
printf("\nGrade = %c",s.grade);
printf("\nMarks = %f",s.marks);
return 0;
}