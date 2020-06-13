#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char statement[15];
    int count=0;
    while(true)
    {
        cin>>statement;
        count++;
        if(strcmp(statement,"Hajj")==0)cout<<"Case "<<count<<": Hajj-e-Akbar\n";
        else if(strcmp(statement,"Umrah")==0)cout<<"Case "<<count<<": Hajj-e-Asghar\n";
        else if(strcmp(statement,"*")==0)break;
    }
    return 0;
}
