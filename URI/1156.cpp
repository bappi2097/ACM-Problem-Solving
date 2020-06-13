#include<bits/stdc++.h>
using namespace std;
int main()
{
    double i,sum=0,mul=1;
    for(i=1;i<=39;i+=2)
    {
        sum+=i/mul;
        mul*=2;
    }
    printf("%.2f\n",sum);
    return 0;
}
