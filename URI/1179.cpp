#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,even[5],odd[5],i,j=0,k=0;
    for(int i=0;i<15;i++)
    {
        cin>>n;
        if(n%2==0)
        {
            even[j++]=n;
            if(j==5)
            {
                for(int l=0;l<5;l++)cout<<"par["<<l<<"] = "<<even[l]<<endl;
                j=0;
            }
        }
        else{
            odd[k++]=n;
            if(k==5)
            {
                for(int l=0;l<5;l++)cout<<"impar["<<l<<"] = "<<odd[l]<<endl;
                k=0;
            }
        }
    }
    for(int l=0;l<k;l++)cout<<"impar["<<l<<"] = "<<odd[l]<<endl;
    for(int l=0;l<j;l++)cout<<"par["<<l<<"] = "<<even[l]<<endl;
    return 0;
}
