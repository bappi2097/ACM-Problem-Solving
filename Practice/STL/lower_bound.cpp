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
    vector<int>ar(n);
    for(int i=0;i<n;i++)cin>>ar[i];
    int key;
    cin>>key;
    vector<int>::iterator it=lower_bound(ar.begin(),ar.end(),key);
    vector<int>::iterator it1=upper_bound(ar.begin(),ar.end(),key);
    cout<<it - ar.begin()<<endl;
    cout<<it1 - ar.begin()<<endl;
    return 0;
}
