#include<stdio.h>
int main()
{
    int a[10]={2,3,2,2,3,1,5,7,8,7},i,j,k=0,l,count;
    int b[10];
    for(i=0;i<10;i++)
    {
        count=0;
        l=0;
        for(j=0;j<10;j++)
        {
            if(a[j]==a[i])count++;
        }
        for(j=0;j<=k;j++)if(a[i]==b[j])l=1;
        if(count>1 && !l)
        {
            b[k]=a[i];
            k++;
        }
    }
    for(i=0;i<k;i++)printf("%d\n",b[i]);
}
