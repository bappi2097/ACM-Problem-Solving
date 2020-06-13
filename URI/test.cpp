#include<stdio.h>
int count=0;
int main()
{
    int a,b,c,d,c1,c2,c3,c4;
    float s1,s2,s3,s4,cgpa;
    printf("Give the marks of all 4 subject that you took in a semester\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    printf("Give the credit of all 4 subject that you took in a semester\n");
    scanf("%d %d %d %d",&c1,&c2,&c3,&c4);

    /*if(a>=80 && a<=100)s1=4.00;
    else if(a>=75 && a<=79)s1=3.75;
    else if(a>=70 && a<=74)s1=3.50;
    else if(a>=65 && a<=69)s1=3.25;
    else if(a>=60 && a<=64)s1=3.00;
    else if(a>=55 && a<=59)s1=2.75;
    else if(a>=50 && a<=54)s1=2.50;
    else if(a>=45 && a<=49)s1=2.25;
    else if(a>=40 && a<=44)s1=2.00;
    else if(a>=0 && a<=39)
    {
        s1=0.00;
        count++;
    }

    if(b>=80 && b<=100)s2=4.00;
    else if(b>=75 && b<=79)s2=3.75;
    else if(b>=70 && b<=74)s2=3.50;
    else if(b>=65 && b<=69)s2=3.25;
    else if(b>=60 && b<=64)s2=3.00;
    else if(b>=55 && b<=59)s2=2.75;
    else if(b>=50 && b<=54)s2=2.50;
    else if(b>=45 && b<=49)s2=2.25;
    else if(b>=40 && b<=44)s2=2.00;
    else if(b>=0 && b<=39)
    {
        s2=0.00;
        count++;
    }

    if(c>=80 && c<=100)s3=4.00;
    else if(c>=75 && c<=79)s3=3.75;
    else if(c>=70 && c<=74)s3=3.50;
    else if(c>=65 && c<=69)s3=3.25;
    else if(c>=60 && c<=64)s3=3.00;
    else if(c>=55 && c<=59)s3=2.75;
    else if(c>=50 && c<=54)s3=2.50;
    else if(c>=45 && c<=49)s3=2.25;
    else if(c>=40 && c<=44)s3=2.00;
    else if(c>=0 && c<=39)
    {
        s3=0.00;
        count++;
    }

    if(d>=80 && d<=100)s4=4.00;
    else if(d>=75 && d<=79)s4=3.75;
    else if(d>=70 && d<=74)s4=3.50;
    else if(d>=65 && d<=69)s4=3.25;
    else if(d>=60 && d<=64)s4=3.00;
    else if(d>=55 && d<=59)s4=2.75;
    else if(d>=50 && d<=54)s4=2.50;
    else if(d>=45 && d<=49)s4=2.25;
    else if(d>=40 && d<=44)s4=2.00;
    else if(d>=0 && d<=39)
    {
        s4=0.00;
        count++;
    }*/



    cgpa=((s1*c1)+(s2*c2)+(s3*c3)+(s4*c4))/(c1+c2+c3+c4);



    printf("Result is: %f and u have retake in %d subject",cgpa,count);

    return 0;
}
float check_sgpa(int a)
{
    if(a>=80 && a<=100)s1=4.00;
    else if(a>=75 && a<=79)s1=3.75;
    else if(a>=70 && a<=74)s1=3.50;
    else if(a>=65 && a<=69)s1=3.25;
    else if(a>=60 && a<=64)s1=3.00;
    else if(a>=55 && a<=59)s1=2.75;
    else if(a>=50 && a<=54)s1=2.50;
    else if(a>=45 && a<=49)s1=2.25;
    else if(a>=40 && a<=44)s1=2.00;
    else if(a>=0 && a<=39)
    {
        s1=0.00;
        count++;
    }
    return s1;
}
