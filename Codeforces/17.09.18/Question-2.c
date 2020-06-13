#include <stdio.h>
int main()
{
    long long int a,b,x,y,w,h;
    scanf("%lld %lld %lld %lld",&a,&b,&x,&y);
    if(!x<=a && !y<=b){
        x/=2;
        y/=2;
    }
    else if(!x<=a || !y<=b){
        printf("0\n");
        return 0;
    }
    long long int i;
    w=x;h=y;
    for(i=0;a>=w && b>=h;i++){
        w+=x;
        h+=y;
    }
    printf("%lld",i);
    return 0;
}
