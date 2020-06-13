#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    //freopen("input.txt","r",stdin);
    #endif // ONLINE_JUDGE
    clock_t tStart=clock();
    double v,s,radius;
    cin>>v>>s;
    radius=s/(2*sin(pi/v));
    printf("%.7f\n",pi*radius*radius);
    return 0;
}
