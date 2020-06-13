#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.cpp","r",stdin);
    freopen("output.cpp","w",stdout);
    #endif // ONLINE_JUDGE
    vector<string> vec;
    string ch;
    while(getline(cin,ch))vec.push_back(ch);
    //for(auto it=vec.begin();it!=vec.end();it++)cout<<*it<<endl;
    int len=vec.size();
    int maxi=INT_MIN;
    int szCH[len];
    for(int i=0;i<len;i++)
    {
        szCH[i]=vec[i].size();
        maxi=max(maxi,szCH[i]);
    }
    //for(int i=0;i<len;i++)cout<<szCH[i]<<endl;
    for(int i=0;i<maxi+2;i++)cout<<"*";
    cout<<endl;
    bool bl=1;
    for(int i=0;i<len;i++)
    {
        cout<<"*";
        int x,y;
        if((maxi-szCH[i])%2)
        {
            x=((maxi-szCH[i])/2)+1;
            y=x-1;
            if(bl)
            {
                swap(x,y);
                bl=0;
            }
            else bl=1;
        }
        else x=y=((maxi-szCH[i])/2);
        for(int j=0;j<x;j++)cout<<' ';
        cout<<vec[i];
        for(int j=0;j<y;j++)cout<<' ';
        cout<<"*"<<endl;
    }
    for(int i=0;i<maxi+2;i++)cout<<"*";
    cout<<endl;
    return 0;
}
