#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        int N;
        cin>>N;
        int ar[N],max=0;
        for(int j=0;j<N;j++)
        {
            cin>>ar[j];
            if(max<ar[j])max=ar[j];
        }
        cout<<"Case "<<i<<": "<<max<<"\n";
    }
    return 0;
}
