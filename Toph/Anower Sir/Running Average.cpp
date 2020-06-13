#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    double avg[100];
    double sum=0,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lf",&a);
        sum+=a;
        avg[i]=sum/i;
    }
    for(i=1;i<=n;i++)printf("%.10f\n",avg[i]);
    return 0;
}
