#include<bits/stdc++.h>
using namespace std;
bool triangle(int a,int b,int c)
{
    return ((a+b>c)&&(b+c>a)&&(a+c>b));
}
bool segment(int a,int b,int c)
{
    return ((a+b==c)||(b+c==a)||(a+c==b));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.cpp","r",stdin);
    freopen("output.cpp","w",stdout);
    #endif // ONLINE_JUDGE
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(triangle(a,b,c) || triangle(b,c,d) || triangle(c,d,a) || triangle(d,a,b))cout<<"TRIANGLE"<<endl;
    else if(segment(a,b,c) || segment(b,c,d) || segment(c,d,a) || segment(d,a,b))cout<<"SEGMENT"<<endl;
    else cout<<"IMPOSSIBLE"<<endl;
    return 0;
}
