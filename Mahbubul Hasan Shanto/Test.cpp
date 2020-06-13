#include<stdio.h>

struct person
{
    char name[50];
    int id;
    float mark;
};

int main()
{
    struct person p[5];
    int i,a=1;
    for (i=1;i<=5;i++)
    {
        printf("give the person%d information of id , mark and name\n",a);
        scanf("%d %f",&p[i].id,&p[i].mark);
        gets(p[i].name);
        gets(p[i].name);
        printf("person%d id is %d , name is %s and mark is %.2f",a,p[i].id,p[i].name,p[i].mark);
        a++;
    }
    return 0;
}
