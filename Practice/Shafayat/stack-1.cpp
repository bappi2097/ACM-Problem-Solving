#include<bits/stdc++.h>
///Using Linked List means dynamic memory size
using namespace std;
struct node{
    int no;
    node *next=NULL;
    node *prev=NULL;
};
node *root=NULL,*tail=NULL;
void addNode(int no)
{
    if(root==NULL)
    {
        root=new node();
        root->no=no;
        root->next=NULL;
        tail=root;
    }
    else
    {
        node *current_node=root;
        node *new_node=new node();
        new_node->no=no;
        while(current_node->next!=NULL)current_node=current_node->next;
        current_node->next=new_node;
        tail=new_node;
    }
    return;
}
void deleteNode()
{
    node *current_node=root;
    node *prev_node=NULL;
    while(current_node->next!=NULL)
    {
        prev_node=current_node;
        current_node=current_node->next;
    }
    if(prev_node==NULL)
    {
        root=NULL;
        tail=NULL;
    }
    else
    {
        prev_node->next=NULL;
        tail=prev_node;
    }

}
int peek()
{
    if(root==NULL)return INT_MIN;
    return tail->no;
}
int push(int top)
{
    addNode(top);
    return top;
}
int pop()
{
    if(peek()==INT_MIN)return INT_MIN;
    int top=peek();
    deleteNode();
    return top;
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
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        push(n);
    }
    for(int i=0;i<=t;i++)
    {
        cout<<"Peek: "<<peek()<<endl;
        cout<<"Pop: "<<pop()<<endl;
    }
    return 0;
}
