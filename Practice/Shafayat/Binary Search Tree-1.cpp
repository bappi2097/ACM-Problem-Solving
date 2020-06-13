#include<bits/stdc++.h>
using namespace std;
struct node{
    int no;
    node *left,*right;
    node()
    {
        left=NULL;
        right=NULL;
    }
};
node *root=NULL;
bool insertBTS(int no)
{
    if(root==NULL)
    {
        root=new node();
        root->no=no;
    }
    else
    {
        node *current_node=root;
        node *prev_node=new node();
        while(current_node!=NULL)
        {
            if(no>current_node->no)
            {
                prev_node=current_node;
                current_node=current_node->right;
            }
            else if(no<current_node->no)
            {
                prev_node=current_node;
                current_node=current_node->left;
            }
            else return 0;
        }
        node *new_node=new node();
        new_node->no=no;
        if(no>prev_node->no)prev_node->right=new_node;
        else prev_node->left=new_node;
    }
    return 1;
}
void print(node *current_node,node *prev_node)
{
    if(current_node==NULL)return;
    if(prev_node!=NULL)
    {
        if(current_node->no>prev_node->no)cout<<prev_node->no<<' '<<current_node->no<<endl;
        else cout<<current_node->no<<' '<<prev_node->no<<endl;
    }
    else cout<<' '<<current_node->no<<endl;
    print(current_node->left,current_node);
    print(current_node->right,current_node);
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
    for(int i=0;i<t;i++)
    {
        cin>>n;
        if(!insertBTS(n))cout<<"Duplicate No"<<endl;
    }
    print(root,NULL);
    return 0;
}
