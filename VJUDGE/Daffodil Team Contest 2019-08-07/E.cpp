#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.cpp","r",stdin);
    //freopen("output.cpp","w",stdout);
    #endif // ONLINE_JUDGE
    int t;
    cin>>t;
    for(int f=0;f<t;f++)
    {
        int r,c,q;
        cin>>r>>c>>q;
        char ar[100][100];
        for(int i=0;i<r;i++)for(int j=0;j<c;j++)ar[i][j]='.';
        for(int g=0;g<q;g++)
        {
            int r1,c1,r2,c2;
            char ch;
            cin>>r1>>c1>>r2>>c2>>ch;
            for(int i=r1-1;i<r2;i++)
            {
                for(int j=c1-1;j<c2;j++)
                {
                    ar[i][j]=ch;
                }
            }
        }
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout<<ar[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}
