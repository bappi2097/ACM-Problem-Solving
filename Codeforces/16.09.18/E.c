#include <stdio.h>
int main()
{
    int a1,b1,c1,a2,b2,c2;
    scanf("%d%d%d%d%d%d",&a1,&b1,&c1,&a2,&b2,&c2);
    if(a1==b2 && b1==a2 && c1==c2)printf("YES\n");
    else if(a1==a2 && b1==b2 && c1==c2)printf("YES\n");
    else printf("NO\n");
    return 0;
}
