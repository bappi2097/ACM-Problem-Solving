#include<bits/stdc++.h>
using namespace std;
struct node{
    int no;
    node *next=NULL,*prev=NULL;
};
node *root=NULL,*top=NULL;
bool isEmpty()
{
    return root==NULL;
}
void PRpush(int no)
{
    if(isEmpty())
    {
        root=new node();
        root->no=no;
        top=root;
    }
    else
    {
        node *current_node=root,*prev_node=NULL;
        while(current_node->next!=NULL && current_node->no>no)
        {
            prev_node=current_node;
            current_node=current_node->next;
        }
        node *new_node=new node();
        new_node->no=no;
        if(current_node==root && prev_node==NULL)
        {
            if(no<root->no)
            {
                new_node->next=root->next;
                root->next=new_node;
                top=root;
            }
            else
            {
                new_node->next=root;
                root=new_node;
                top=root;
            }
            return;
        }
        if(current_node->next==NULL)
        {
            current_node->next=new_node;
            return;
        }
        new_node->next=current_node;
        prev_node->next=new_node;
    }
    return;
}
void PRpop()
{
    if(isEmpty())
    {
        cout<<"Queue Empty"<<endl;
        return;
    }
    node *current_node=root;
    root=current_node->next;
    top=root;
    free(current_node);
    return;
}
void showPR()
{
    if(isEmpty())
    {
        cout<<"Empty Queue"<<endl;
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
    cin>>t;
    while(t--)
    {
        cin>>n;
        PRpush(n);
        showPR();
    }
    while(!isEmpty())
    {
        cout<<"Top : "<<top->no<<endl;
        PRpop();
        showPR();
    }
    return 0;
}
