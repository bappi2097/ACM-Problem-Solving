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
    int n;
    cin>>n;
    int r=sqrt(n);
    vector<int> vec;
    while(r)
    {
        if(n%r==0)vec.push_back((r*2)+((n/r)*2));
        r--;
    }
    sort(vec.begin(),vec.end());
    cout<<vec[0]<<endl;
    return 0;
}
