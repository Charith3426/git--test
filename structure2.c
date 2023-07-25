#include<stdio.h>
struct student{
    char name[12];
    int number;
    int section;
    int phone;
    char mail[20];
}s[100];

int main()
{
    int n;
    printf("\t\t\tenter the number of student:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("\nEnter the name :");
        scanf("%s",s[i].name);
        printf("\nEnter the number  = ");
        scanf("%d",&s[i].number);
        printf("\nEnter the section = ");
        scanf("%d",&s[i].section);
        printf("\nEnter the phone number = ");
        scanf("%d",&s[i].phone);
        printf("\nEnter the mail id = ");
        scanf("%s",s[i].mail);
    }
    printf("\n\n  The student data :");
   
    for(int i=0;i<n;i++)
    {
        printf("\nName = %s",s[i].name);
        printf("\nnumber = %d",s[i].number);
        printf("\nSection = %d",s[i].section);
        printf("\nPHONE number = %d",s[i].phone);
        printf("\nMAil id =%s",s[i].mail);
    }
    return 0;
   
   
   
}