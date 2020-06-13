#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[15],b[15];
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
            cin>>a>>b;
        if(strcmp(a,"ataque")==0 && strcmp(b,"pedra")==0)cout<<"Jogador 1 venceu\n";
        else if(strcmp(a,"pedra")==0 && strcmp(b,"ataque")==0)cout<<"Jogador 2 venceu\n";
        else if(strcmp(a,"pedra")==0 && strcmp(b,"papel")==0)cout<<"Jogador 1 venceu\n";
        else if(strcmp(a,"papel")==0 && strcmp(b,"pedra")==0)cout<<"Jogador 2 venceu\n";
        else if(strcmp(a,"papel")==0 && strcmp(b,"ataque")==0)cout<<"Jogador 2 venceu\n";
        else if(strcmp(a,"ataque")==0 && strcmp(b,"papel")==0)cout<<"Jogador 1 venceu\n";
        else if(strcmp(a,"papel")==0 && strcmp(b,"papel")==0)cout<<"Ambos venceram\n";
        else if(strcmp(a,"pedra")==0 && strcmp(b,"pedra")==0)cout<<"Sem ganhador\n";
        else if(strcmp(a,"ataque")==0 && strcmp(b,"ataque")==0)cout<<"Aniquilacao mutua\n";
    }
    return 0;
}
