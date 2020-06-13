#include<bits/stdc++.h>
using namespace std;
void showDqFront(deque<int> dq)
{
    deque<int>::iterator it;
    for(it=dq.begin();it!=dq.end();it++)cout<<*it<<" ";
    cout<<endl;
    return;
}
void showDqBack(deque<int> dq)
{
    deque<int>::iterator it;
    it=dq.end();
    do
    {
        it--;
        cout<<*it<<" ";
    }while(it!=dq.begin());
    cout<<endl;
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
    deque<int> dq;
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        dq.push_back(n);
    }
    cout<<"From Front: ";
    showDqFront(dq);
    cout<<"From Back: ";
    showDqBack(dq);
    cout<<"pop back: ";
    dq.pop_back();
    showDqFront(dq);
    dq.pop_front();
    /// dq.clear(); For clear full deque
    cout<<"No At Position 2(dq.at(2)):"<<dq.at(2)<<endl;
    while(!dq.empty())
    {
        cout<<"pop front: ";
        showDqFront(dq);
        dq.pop_front();
    }
    if(dq.empty())cout<<"empty deque"<<endl;
    else cout<<"Not Empty"<<endl;
    return 0;
}
