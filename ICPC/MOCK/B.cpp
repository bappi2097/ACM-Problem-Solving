#include<bits/stdc++.h>
using namespace std;
struct Node{
    int roll;
    string name;
    int mark;
};
bool myfunc(Node x,Node y)
{
    if(x.mark==y.mark)return x.roll<y.roll;
    return x.mark>y.mark;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.cpp","r",stdin);
    freopen("output.cpp","w",stdout);
    #endif // ONLINE_JUDGE
    int t;
    cin>>t;
    vector<Node>vec(t);
    for(int i=0;i<t;i++)cin>>vec[i].roll>>vec[i].name>>vec[i].mark;
    sort(vec.begin(),vec.end(),myfunc);
    cout<<"Roll | Name       | Marks"<<endl;
    cout<<"-------------------------"<<endl;
    for(int i=0;i<t;i++)
    {
        if(vec[i].roll>=0 && vec[i].roll<10)cout<<"   ";
        else if(vec[i].roll>=10 && vec[i].roll<100)cout<<"  ";
        cout<<vec[i].roll<<" | ";
        cout<<vec[i].name;
        for(int j=vec[i].name.size();j<10;j++)cout<<' ';
        cout<<" | ";
        cout<<vec[i].mark<<endl;
    }
    return 0;
}
