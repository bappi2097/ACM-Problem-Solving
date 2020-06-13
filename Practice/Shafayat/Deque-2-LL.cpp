#include<bits/stdc++.h>
using namespace std;
struct node{
    int no;
    node *next=NULL,*prev=NULL;
};
node *root=NULL,*DQfront=NULL,*DQback=NULL;

bool isEmpty()
{
    return root==NULL;
}
void DQpush_back(int no)
{
    if(isEmpty())
    {
        root=new node();
        root->no=no;
        DQfront=root;
        DQback=root;
    }
    else
    {
        node *new_node=new node();
        new_node->no=no;
        DQback->next=new_node;
        DQback=new_node;
    }
    return;
}
void DQpush_front(int no)
{
    if(isEmpty())
    {
        root=new node();
        root->no=no;
        DQfront=root;
        DQback=root;
    }
    else
    {
        node *new_node=new node();
        new_node->no=no;
        new_node->next=root;
        DQfront=new_node;
        root=new_node;
    }
    return;
}
void DQpop_back()
{
    if(isEmpty())
    {
        cout<<"Empty Deque"<<endl;
        return;
    }
    if(DQfront==DQback)
    {
        root=DQback=NULL;
        free(DQfront);
        return;
    }
    node *current_node=root,*prev_node=NULL;
    while(current_node->next!=NULL)
    {
        prev_node=current_node;
        current_node=current_node->next;
    }
    prev_node->next=NULL;
    DQback=prev_node;
    free(current_node);
    return;
}
void DQpop_front()
{
    if(isEmpty())
    {
        cout<<"Empty Deque"<<endl;
        return;
    }
    if(DQfront==DQback)
    {
        root=DQback=NULL;
        free(DQfront);
        return;
    }
    node *current_node=root,*next_node=root->next;
    free(root);
    root=DQfront=next_node;
    return;
}
void showDQ()
{
    if(isEmpty())
    {
        cout<<"Empty Deque"<<endl;
        return;
    }
    node *current_node=root;
    while(current_node!=NULL)
    {
        cout<<current_node->no<<" ";
        current_node=current_node->next;
    }
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
    int t,n;
    scanf("%d",&t);
    t/=2;
    while(t--)
    {
        scanf("%d",&n);
        DQpush_front(n);
        scanf("%d",&n);
        DQpush_back(n);
        showDQ();
    }
    while(!isEmpty())
    {
        //DQpop_front();
        DQpop_back();
        showDQ();
    }
    showDQ();
    cout<<(DQback==NULL ? "Empty" : "Not Empty")<<endl;
    return 0;
}
