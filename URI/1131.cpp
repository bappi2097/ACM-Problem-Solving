#include<iostream>
using namespace std;
int main()
{
    int x=0,y=0,z=0,n,m,t; //Inter = x , Gremio = y , Empates = z
    while(cin>>m>>n)
    {
        if(m>n)x++;
        else if(m<n)y++;
        else z++;
        cout<<"Novo grenal (1-sim 2-nao)"<<endl;
        cin>>t;
        while(1)
        {
            if(t==1)break;
            else if(t==2)
            {
                cout<<x+y+z<<" grenais"<<endl;
                cout<<"Inter:"<<x<<endl;
                cout<<"Gremio:"<<y<<endl;
                cout<<"Empates:"<<z<<endl;
                if(x==y)cout<<"Nao houve vencedor"<<endl;
                else if(x>y)cout<<"Inter venceu mais"<<endl;
                else cout<<"Gremio venceu mais"<<endl;
                return 0;
            }
        }
    }
    return 0;
}
