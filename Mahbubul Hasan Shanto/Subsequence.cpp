#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char fullword[100],subword[100];
    cin>>fullword>>subword;
    int count=0,j=0,fullwordSize=strlen(fullword),subwordsize=strlen(subword);
    for(int i=0;i<fullwordSize;i++)
    {
        if(fullword[i]==subword[j])
        {
            count++;
            j++;
        }
    }
    if(count==subwordsize && count!=fullwordSize))cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
