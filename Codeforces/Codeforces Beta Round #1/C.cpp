#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pi acos(-1)
double eps = 1e-4;
double gcd(double x, double y)
{
    while (fabs(x) > eps && fabs(y) > eps)
    {
        if (x > y)
            x -= floor(x / y) * y;
        else
            y -= floor(y / x) * x;
    }
    return x + y;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif // ONLINE_JUDGE
    double x1,x2,x3,y1,y2,y3,m,a,b,c,s,area,aa,ab,ac;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    a=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    b=sqrt(pow(x3-x2,2)+pow(y3-y2,2));
    c=sqrt(pow(x1-x3,2)+pow(y1-y3,2));
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    aa=acos((b*b+c*c-a*a)/2*b*c);
    ab=acos((a*a+c*c-b*b)/2*a*c);
    ac=acos((a*a+b*b-c*c)/2*a*b);
    double n=gcd(gcd(a,b),c);
    area=.5*pi*n*r*r
    cout<<area<<endl;
    return 0;
}
