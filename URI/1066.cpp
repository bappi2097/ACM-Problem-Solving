#include<iostream>
using namespace std;
int main()
{
    int n,neg=0,pos=0,odd=0,even=0;
    for(int i=0; i<5; i++)
    {
        cin>>n;
        if(n>0)pos++;
        if(n<0)neg++;
        if(n%2==0)even++;
        else odd++;
    }
    cout<<even<<" valor(es) par(es)"<<endl;
    cout<<odd<<" valor(es) impar(es)"<<endl;
    cout<<pos<<" valor(es) positivo(s)"<<endl;
    cout<<neg<<" valor(es) negativo(s)"<<endl;
    return 0;
}
