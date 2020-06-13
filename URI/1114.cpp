#include<iostream>
using namespace std;
int main()
{
    int x;
    while(cin>>x)
    {
        if(x==2002)
        {
            cout<<"Acesso Permitido"<<endl;
            return 0;
        }
        else cout<<"Senha Invalida"<<endl;
    }
    return 0;
}

