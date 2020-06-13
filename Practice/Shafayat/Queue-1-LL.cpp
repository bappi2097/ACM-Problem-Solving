#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;

#define sf                  scanf
#define sfi(x)              sf("%d",&x)
#define sfii(x,y)           sf("%d %d",&x,&y)
#define sfiii(x,y,z)        sf("%d %d %d",&x,&y,&z)
#define pf                  printf
#define FOR(i,x,y)          for(i=x;i<y;i++)
#define RFOR(i,x,y)         for(i=x;i>=y;i--)
#define input               freopen("input.cpp","r",stdin)
#define output              freopen("output.cpp","w",stdout)

struct node{
    int no;
    node *next=NULL,*prev=NULL;
};
node *root=NULL,*head=NULL,*tail=NULL;
int Head()
{
    if(head==NULL)return INT_MIN;
    return head->no;
}
int Tail()
{
    if(tail==NULL)return INT_MAX;
    return tail->no;
}
bool isEmpty()
{
    if(head==NULL)return 1;
    return 0;
}
node* push(int no)
{
    node *new_node=new node();
    new_node->no=no;
    if(head==NULL)
    {
        head=new_node;
        tail=head;
        root=head;
    }
    else
    {
        node *current_node=root;
        while(current_node->next!=NULL)current_node=current_node->next;
        current_node->next=new_node;
        tail=new_node;
    }
    return new_node;
}
node* pop()
{
    if(isEmpty())return NULL;
    node *free_node=head;
    head=head->next;
    root=head;
    free(free_node);
    return head;
}
void print()
{
    if(isEmpty())
    {
        pf("Empty Queue\n");
        return;
    }
    node *current_node=head;
    while(current_node!=NULL)
    {
        pf("%d ",current_node->no);
        current_node=current_node->next;
    }
    pf("\n");
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    input;
    output;
    #endif // ONLINE_JUDGE
    int t,n,i;
    sfi(t);
    FOR(i,0,t)
    {
        sfi(n);
        push(n);
    }
    print();
    pop();
    print();
    pop();
    print();
    pop();
    print();
    return 0;
}
