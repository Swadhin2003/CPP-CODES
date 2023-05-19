#include<stdio.h>
struct employee
{
    int id;
    char name[10];
    int age;
    int basic;
}emp[100];
void result(struct employee * emp,int a);
int main()
{
    int num;
    printf("No. of employees:");
    scanf("%d",&num);
    for (int i = 0; i < num; i++)
    {
        printf("Enter id of employee %d:",i+1);
        scanf("%d",&emp[i].id);
        printf("Enter name of employee %d:",i+1);
        scanf("%s",&emp[i].name);
        printf("Enter age of employee %d:",i+1);
        scanf("%d",&emp[i].age);
        printf("Enter basic salary of employee %d:",i+1);
        scanf("%d",&emp[i].basic);
    }
    result(emp,num);   
    return 0;
}
void result(struct employee* emp,int a)
{
    float da,hra,total;
    for (int i = 0; i < a; i++)
    {
        da=0.8*emp[i].basic;
        hra=0.1*emp[i].basic;
        total=emp[i].basic+da+hra;
        printf(" Id:%d | Name:%s | Age:%d | Basic Salary:%d | Gross Salary:%f\n",emp[i].id,emp[i].name,emp[i].age,emp[i].basic,total);
    }
}
