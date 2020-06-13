#include<bits/stdc++.h>
using namespace std;
#define sf(x)       scanf("%d",&x)
struct node{
    int no;
    int pos;
};
bool myfunc(node a, node b)
{
    return a.no>b.no;
}
void printQ(vector<node>vec)
{
    for(vector<node>::iterator it1=vec.begin();it1!=vec.end();it1++)cout<<it1->no<<' '<<it1->pos<<endl;
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.cpp","r",stdin);
    freopen("output.cpp","w",stdout);
    #endif // ONLINE_JUDGE
    int t,n,v,c;
    vector<node>ky,ct;
    set<int> ans;
    sf(t);
    sf(v);
    for(int i=0;i<t;i++)
    {
        sf(n);
        sf(c);
        if(n==1)ky.push_back({c,i+1});
        else ct.push_back({c,i+1});
    }
    int num1=ky.size(),num2=ct.size(),pos1=0,pos2=0,vol=v,sum=0;
    sort(ky.begin(),ky.end(),myfunc);
    sort(ct.begin(),ct.end(),myfunc);
    //printQ(ky);
    //printQ(ct);
    for(pos2=0;pos2<num2 && vol>1;pos2++)
    {
        ans.insert(ct[pos2].pos);
        vol-=2;
        sum+=ct[pos2].no;
    }
    for(pos2;pos1<num1 && vol>0;pos1++)
    {
        ans.insert(ky[pos1].pos);
        sum+=ky[pos1].no;
        vol--;
    }
    for(pos2--;pos2>=0;pos2--)
    {
        if(pos1>=num1)break;
        if(pos1<num1-1)
        {
            if(ky[pos1].no+ky[pos1].no>ct[pos2].no)
            {
                ans.erase(ct[pos2].pos);
                ans.insert(ky[pos1].pos);
                ans.insert(ky[pos1+1].pos);
                sum+=(ky[pos1].no+ky[pos1+1].no)-ct[pos2].no;
                pos1+=2;
            }
            else break;
        }
        else if(ky[pos1].no>ct[pos2].no)
        {
            ans.erase(ct[pos2].pos);
            ans.insert(ky[pos1].pos);
            sum+=ky[pos1].no-ct[pos2].no;
            pos1++;
        }
    }
    cout<<sum<<endl;
    for(set<int>::iterator it=ans.begin();it!=ans.end();it++)cout<<*it<<' ';
    cout<<endl;
    return 0;
}
