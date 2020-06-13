#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.cpp","r",stdin);
    freopen("output.cpp","w",stdout);
    #endif // ONLINE_JUDGE
    string str;
    cin>>str;
    int len=str.size(),cnt=0;
    vector<int> vec;
    stack<int> stk;
    for(int i=0;i<len;i++)
    {
        if(str[i]=='(')
        {
            stk.push(1);
            cnt++;
        }
        else
        {
            if(stk.empty())
            {
                if(cnt)vec.push_back(cnt);
                cnt=0;
                while(!stk.empty())stk.pop();
            }
            else
            {
                stk.pop();
                cnt++;
            }
        }
    }
    if(cnt)vec.push_back(cnt);

    if(vec.size())
    {
        int sum=0;
        sort(vec.begin(),vec.end(),cmp);
        cout<<vec[0]<<' ';
        for(int i=0;i<vec.size();i++)if(vec[0]==vec[i])sum++;
        cout<<sum<<endl;
    }
    else cout<<"0 1"<<endl;
    return 0;
}
