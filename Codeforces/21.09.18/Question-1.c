#include <stdio.h>
int main()
{
    long long int j=0;
    for(j=3;j<10000000;j++)main1(j);
    return 0;
}
int main1(long long int n)
{
    long long int a,b,c;
    int i;
   // scanf("%lld",&n);
    if((double)n/3==n/3)
    {
        a=n/3;
        b=n/3;
        c=n/3;
    }
    else
    {
        a=n/3;
        b=n/3;
        c=n-(a+b);
    }
    for(i=0;i<3;i++)
    {
        if(a%3==0){
            a+=1;
            b-=1;
        }
        if(b%3==0){
            b+=1;
            c-=1;
        }
        if(c%3==0){
            c+=1;
            a-=1;
        }
    }
//    printf("%lld %lld %lld\n",a,b,c);
    if(a%3==0 && b%3==0 && c%3==0)printf("False \n");
    else printf("True \n");
    return 0;
}
