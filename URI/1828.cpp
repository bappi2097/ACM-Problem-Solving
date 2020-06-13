#include<iostream>
#include<cstring>
using namespace std;
int convertString(char ch[10])
{
    if(strcmp(ch,"pedra")==0)return 1;           // 1 = pedra
    else if(strcmp(ch,"papel")==0)return 2;      // 2 = papel
    else if(strcmp(ch,"tesoura")==0)return 3;    // 3 = tesoura
    else if(strcmp(ch,"lagarto")==0)return 4;    // 4 = lagarto
    else return 5;                               // 5 = Spock
}
int printResult(int a,int b)
{
    if(a==3 && b==2)cout<<"Bazinga!"<<endl;
    else if(a==2 && b==1 )cout<<"Bazinga!"<<endl;
    else if(a==1 && b==4 )cout<<"Bazinga!"<<endl;
    else if(a==4 && b==5 )cout<<"Bazinga!"<<endl;
    else if(a==5 && b==3 )cout<<"Bazinga!"<<endl;
    else if(a==3 && b==4 )cout<<"Bazinga!"<<endl;
    else if(a==4 && b==2 )cout<<"Bazinga!"<<endl;
    else if(a==2 && b==5 )cout<<"Bazinga!"<<endl;
    else if(a==5 && b==1 )cout<<"Bazinga!"<<endl;
    else if(a==1 && b==3 )cout<<"Bazinga!"<<endl;
    else if(b==3 && a==2 )cout<<"Raj trapaceou!"<<endl;
    else if(b==2 && a==1 )cout<<"Raj trapaceou!"<<endl;
    else if(b==1 && a==4 )cout<<"Raj trapaceou!"<<endl;
    else if(b==4 && a==5 )cout<<"Raj trapaceou!"<<endl;
    else if(b==5 && a==3 )cout<<"Raj trapaceou!"<<endl;
    else if(b==3 && a==4 )cout<<"Raj trapaceou!"<<endl;
    else if(b==4 && a==2 )cout<<"Raj trapaceou!"<<endl;
    else if(b==2 && a==5 )cout<<"Raj trapaceou!"<<endl;
    else if(b==5 && a==1 )cout<<"Raj trapaceou!"<<endl;
    else if(b==1 && a==3 )cout<<"Raj trapaceou!"<<endl;
    else cout<<"De novo!"<<endl;
    return 0;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        char ch1[10],ch2[10];
        cin>>ch1>>ch2;
        int a=convertString(ch1),b=convertString(ch2);
        cout<<"Caso #"<<i+1<<": ";
        printResult(a,b);
    }
    return 0;
}
