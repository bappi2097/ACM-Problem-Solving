#include <iostream>
using namespace std;
int main()
{
    int t;
    while(cin>>t){
        for(int i=1;i<=t;i++)
        {
            int ar[4];
            cin>>ar[0]>>ar[1]>>ar[2]>>ar[3];
            for(int j=0;j<4;j++)
            {
                for(int k=0;k<4-j-1;k++)
                {
                    if(ar[k]>ar[k+1])
                    {
                        int temp = ar[k];
                        ar[k]=ar[k+1];
                        ar[k+1]=temp;
                    }
                }
            }
            if(ar[0]==ar[1] && ar[2]==ar[3]) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}
