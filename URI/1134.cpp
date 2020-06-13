#include<iostream>
using namespace std;
int main()
{
    int a=0,g=0,d=0,x;  //a = Alcool , g = Gasoline , d = Diesel
    while(1)
    {
        cin>>x;
        if(x==1)a++;
        else if(x==2)g++;
        else if(x==3)d++;
        else if(x==4)break;
    }
    cout<<"MUITO OBRIGADO"<<endl;
    cout<<"Alcool: "<<a<<endl;
    cout<<"Gasolina: "<<g<<endl;
    cout<<"Diesel: "<<d<<endl;
    return 0;
}
