#include<iostream>
using namespace std;
int Factorial[1003];
void factorial()
{
    long long int mul=1;
    for(int i=1;i<=1000;i++)
    {
        mul*=i;
        if(mul>=10000)
        {
            mul-=(mul/10000)*10000;
            Factorial[i]=mul;
        }
        else Factorial[i]=mul;
    }
}
int main()
{
    factorial();
    int i;
    while(cin>>i)cout<<Factorial[i]<<endl;
    return 0;
}
