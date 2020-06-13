#include<iostream>
using namespace std;
int main()
{
    int t,Reg_Max,Reg;
    double max,mark;
    cin>>t>>Reg_Max>>max;
    for(int i=1;i<t;i++)
    {
        cin>>Reg>>mark;
        if(mark>max)
        {
            max=mark;
            Reg_Max=Reg;
        }
    }
    if(max>=8)cout<<Reg_Max<<'\n';
    else cout<<"Minimum note not reached\n";
    return 0;
}
