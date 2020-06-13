#include<bits/stdc++.h>
using namespace std;

vector<long long>result1;
vector<long long>result2;
vector<long long>::iterator it1,it2,it3,it4;


void squareroot()
{
    result1.push_back(1);
    result1.push_back(2);
    for(long long i=2; i<=31623; i++)
    {
        long long a=i*i;
        result1.push_back(a);
        long long b=a*2;
        //long long s=sqrt(b);
        //if(s*s != b)
        result1.push_back(b);

        long long c=a*a;
        result1.push_back(c);
        long long d=c*2;
        result1.push_back(d);
        //result.push_back(b);
    }
    sort(result1.begin(),result1.end());
    long long tmp = result1[0];
    //result2.p(1);
    //ps1.pb(2);
    //ps1.pb(ps[0]);

    result2.push_back(1);
    for(long long i=0; i<result1.size(); i++)
    {
        if(tmp!=result1[i]){
            result2.push_back(result1[i]);
            tmp =result1[i];
        }
    }
}

int main()
{
    freopen("input.cpp","r",stdin);
    int n;
    cin>>n;


    squareroot();

    //for(int i=0; i<100; i++)
       // cout<<result2[i]<<endl;

    for(int i=0; i<n; i++)
    {
        long long l,r,x,y;
        cin>>l>>r;

        it1=upper_bound(result2.begin(),result2.end(),l);
        it2=lower_bound(result2.begin(),result2.end(),l);
        long long a=(it1 - result2.begin())+1;
        long long b=(it2 - result2.begin())+1;
        if(a != b)
            x = b;
        else x=a;
        //cout<<x<<endl;

        it3=upper_bound(result2.begin(),result2.end(),r);
        it4=lower_bound(result2.begin(),result2.end(),r);
        long long c = (it3 - result2.begin())+1;
        long long d = (it4 - result2.begin())+1;
        if(c != d)
            y=c;
        else y=d;
        //cout<<y<<endl;
        //divisor(r);

        int ans=y-x;
        cout<<"Case "<<i+1 <<": "<<ans<<endl;


    }
}
