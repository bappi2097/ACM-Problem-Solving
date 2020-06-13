#include<bits/stdc++.h>
using namespace std;
struct node{
    int no;
    node *prev=NULL,*next=NULL;
};
node *root=NULL,*tail=NULL;
bool append(int no)
{
    if(root==NULL)
    {
        root=new node();
        root->no=no;
        root->next=NULL;
        root->prev=NULL;
        tail=root;
        return 1;
    }
    else
    {
        node *new_node=new node();
        new_node->no=no;
        new_node->next=NULL;
        new_node->prev=tail;
        tail->next=new_node;
        tail=new_node;
        return 1;
    }
    return 0;
}
void printForward()
{
    node *current_node=root;
    if(root==NULL)
    {
        cout<<"empty list"<<endl;
        return;
    }
    while(current_node!=NULL)
    {
        cout<<current_node->no<<' ';
        current_node=current_node->next;
    }
    cout<<endl;
    return;
}
void printBackward()
{
    node *current_node=tail;
    if(tail==NULL)
    {
        cout<<"empty list"<<endl;
        return;
    }
    while(current_node!=NULL)
    {
        cout<<current_node->no<<' ';
        current_node=current_node->prev;
    }
    cout<<endl;
    return;
}
node* searchForward(int no)
{
    if(root==NULL)return root;
    node *current_node=root;
    while(current_node!=NULL)
    {
        if(current_node->no==no)break;
        current_node=current_node->next;
    }
    return current_node;
}
node* searchBackward(int no)
{
    if(tail==NULL)return tail;
    node *current_node=tail;
    while(current_node!=NULL)
    {
        if(current_node->no==no)break;
        current_node=current_node->prev;
    }
    return current_node;
}
bool deleteNode(int no)
{
    node *position=searchForward(no);
    if(position==NULL)return 0;
    if(position->next!=NULL)
    {
        if(position->prev!=NULL)
        {
            node *prev_node=position->prev;
            node *next_node=position->next;
            prev_node->next=next_node;
            next_node->prev=prev_node;
        }
        else
        {
            root=root->next;
            root->prev=NULL;
        }
    }
    else
    {
        if(position->prev!=NULL)
        {
            tail=tail->prev;
            tail->next=NULL;
        }
        else
        {
            root=NULL;
            tail=NULL;
        }
    }
    return 1;
}
bool updateList(int n, int no)
{
    node *position=searchForward(n);
    if(position==NULL)return 0;
    node *new_node=new node();
    new_node->no=no;
    new_node->prev=position->prev;
    new_node->next=position;
    position->prev=new_node;
    node *prev_node=new_node->prev;
    if(prev_node!=NULL)prev_node->next=new_node;
    if(new_node->prev==NULL)root=new_node;
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.cpp","r",stdin);
    freopen("output.cpp","w",stdout);
    #endif // ONLINE_JUDGE
    int n,t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        append(n);
    }
    cout<<"Print Forward"<<endl;
    printForward();
    cout<<"Print Backward"<<endl;
    printBackward();
    cin>>t;
    cout<<"Forward Search"<<endl;
    if(searchForward(t)!=NULL)cout<<"Found : "<<searchForward(t)->no<<endl;
    else cout<<"Not Found"<<endl;
    cout<<"Backward Search"<<endl;
    if(searchBackward(t)!=NULL)cout<<"Found : "<<searchBackward(t)->no<<endl;
    else cout<<"Not Found"<<endl;
    cin>>t;
    if(deleteNode(t))cout<<"Deleted"<<endl;
    else cout<<"Not Found"<<endl;
    printForward();
    cin>>t>>n;
    if(updateList(t,n))cout<<"Updated"<<endl;
    else cout<<"Not Found"<<endl;
    printForward();
    return 0;
}
