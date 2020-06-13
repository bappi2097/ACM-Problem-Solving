#include<bits/stdc++.h>
using namespace std;
struct node{
    int no;
    node *next;
};
node *root=NULL;
void add(int no)
{
    if(root==NULL)
    {
        root=new node();
        root->no=no;
        root->next=NULL;
    }
    else
    {
        node *current_node=root;
        while(current_node->next!=NULL)current_node=current_node->next;
        node *new_node=new node();
        new_node->no=no;
        new_node->next=NULL;
        current_node->next=new_node;
    }
    return;
}
void print()
{
    node *next_node=root;
    while(next_node!=NULL)
    {
        cout<<next_node->no<<' ';
        next_node=next_node->next;
    }
    cout<<endl;
    return;
}
node* searchList(int no)
{
    node *search_node=root;
    while(search_node!=NULL)
    {
        if(search_node->no==no)break;
        search_node=search_node->next;
    }
    return search_node;
}
bool deleteNode(int no)
{
    if(root!=NULL)
    {
        node *current_node=root,*prev_node=NULL;
        while(current_node->no!=no && current_node->next!=NULL)
        {
            prev_node=current_node;
            current_node=current_node->next;
        }
        if(prev_node!=NULL && current_node->no==no)
        {
            prev_node->next=current_node->next;
            return 1;
        }
        else if(prev_node==NULL && current_node->no==no)
        {
            root=root->next;
            return 1;
        }
        return 0;
    }
    return 0;
}
node* addnew(int n,int no)
{
    node *position=searchList(n);
    node *new_node=new node();
    new_node->no=no;
    new_node->next=position;
    node *current_node=root,*prev_node=NULL;
    while(current_node->no!=n && current_node->next!=NULL)
    {
        prev_node=current_node;
        current_node=current_node->next;
    }
    if(prev_node!=NULL)prev_node->next=new_node;
    else if(prev_node==NULL)root=new_node;
    return new_node;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.cpp","r",stdin);
    freopen("output.cpp","w",stdout);
    #endif // ONLINE_JUDGE
    int t,no;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        add(n);
    }
    cin>>t;
    print();
    node *search_node=searchList(t);
    if(search_node!=NULL && search_node->no==t)cout<<search_node->no<<endl;
    else cout<<"Not Found"<<endl;
    cin>>t;
    if(deleteNode(t))cout<<"Delete"<<endl;
    else cout<<"Not Delete"<<endl;
    print();
    cin>>t>>no;
    if(searchList(t)!=NULL)cout<<addnew(t,no)->no<<endl;
    else cout<<"not Found"<<endl;
    print();
    return 0;
}
